
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

//shuffle array
void shuffleArray(int array[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

//shuffle options for question
void shuffleOptions(char options[4][100], char *correctAnswer) {
    int indices[] = {0, 1, 2, 3};
    shuffleArray(indices, 4);

    char tempOptions[4][100];
    char tempCorrectOption = *correctAnswer;

    // Copy shuffled options to temp array
    for (int i = 0; i < 4; i++) {
        strcpy(tempOptions[i], options[indices[i]]);
        if (tempCorrectOption == 'A' + indices[i]) {
            *correctAnswer = 'A' + i;
        }
    }

    // Copy back shuffled options
    for (int i = 0; i < 4; i++) {
        strcpy(options[i], tempOptions[i]);
    }
}

int main() {
    srand(time(0));

    // Questions
    char questions[][100] = {
        "What year did the C language debut?",
        "Who is credited with creating C?",
        "What is the predecessor of C?"
    };

    // Options
    char options[][4][100] = {
        {"A. 1969", "B. 1972", "C. 1975", "D. 1999"},
        {"A. Dennis Ritchie", "B. Nikola Tesla", "C. Ada Lovelace", "D. Doc Brown"},
        {"A. B", "B. BCPL", "C. Assembly", "D. None of the above"}
    };

    // Answer key
    char answers[] = {'B', 'A', 'B'};

    // Number of questions
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    //array of question, shuffle them
    int questionIndices[numberOfQuestions];
    for (int i = 0; i < numberOfQuestions; i++) {
        questionIndices[i] = i;
    }
    shuffleArray(questionIndices, numberOfQuestions);

    printf("********** QUIZ GAME **********\n");

    // Quiz loop
    for (int i = 0; i < numberOfQuestions; i++) {
        int questionIndex = questionIndices[i];
        
        // Shuffle options for the current question
        char currentOptions[4][100];
        for (int j = 0; j < 4; j++) {
            strcpy(currentOptions[j], options[questionIndex][j]);
        }
        char correctAnswer = answers[questionIndex];
        shuffleOptions(currentOptions, &correctAnswer);

        printf("\n**********\n");
        printf("%s\n", questions[questionIndex]);
        printf("**********\n");

        // Display shuffled options
        for (int j = 0; j < 4; j++) {
            printf("%s\n", currentOptions[j]);
        }

        // Accept user input
        printf("Your guess: ");
        scanf(" %c", &guess); 
        guess = toupper(guess); // Convert to uppercase

        // Check answer
        if (guess == correctAnswer) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n", correctAnswer);
        }
    }

    // Display final score
    printf("\n**********\n");
    printf("Final Score: %d/%d\n", score, numberOfQuestions);
    printf("**********\n");

    return 0;
}
