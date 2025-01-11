n = int(input("Enter the number of rows: "))
for i in range(1, n + 1):  # Outer loop for rows
    for j in range(1, i + 1):  # Inner loop for columns
        print("*", end=" ")  # Print stars in the same line
    print()