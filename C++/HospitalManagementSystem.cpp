#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Patient class
class Patient {
public:
    string name;
    int age;
    string ailment;

    void getdata() {
        cout << "Enter Patient Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Ailment: ";
        cin >> ailment;
    }

    void putdata() const {
        cout << "Name: " << name << "\nAge: " << age << "\nAilment: " << ailment << endl;
    }
};

//Doctor class
class Doctor {
public:
    string name;
    string specialization;
    int experience;

    void getdata() {
        cout << "Enter Doctor Name: ";
        cin >> name;
        cout << "Enter Specialization: ";
        cin >> specialization;
        cout << "Enter Years of Experience: ";
        cin >> experience;
    }

    void putdata() const {
        cout << "Name: " << name << "\nSpecialization: " << specialization
             << "\nExperience: " << experience << " years" << endl;
    }
};

//Medicine class
class Medicine {
public:
    string name;
    float price;
    string expiry;

    void getdata() {
        cout << "Enter Medicine Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Expiry Date: ";
        cin >> expiry;
    }

    void putdata() const {
        cout << "Name: " << name << "\nPrice: " << price << "\nExpiry: " << expiry << endl;
    }
};

//Instrument class
class Instrument {
public:
    string name;
    string manufacturer;
    float cost;

    void getdata() {
        cout << "Enter Instrument Name: ";
        cin >> name;
        cout << "Enter Manufacturer: ";
        cin >> manufacturer;
        cout << "Enter Cost: ";
        cin >> cost;
    }

    void putdata() const {
        cout << "Name: " << name << "\nManufacturer: " << manufacturer
             << "\nCost: " << cost << endl;
    }
};

//Function to manage patients
void managePatients() {
    Patient patient;
    fstream file;
    int choice;

    do {
        cout << "\n1. Insert Patient Data\n";
        cout << "2. Display All Patient Data\n";
        cout << "3. Exit to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            file.open("patient.dat", ios::out | ios::app | ios::binary);
            if (!file) {
                cout << "Error opening file for writing.\n";
                return;
            }
            patient.getdata();
            file.write((char *)&patient, sizeof(patient));
            file.close();
            cout << "Patient data added successfully.\n";
            break;

        case 2:
            file.open("patient.dat", ios::in | ios::binary);
            if (!file) {
                cout << "Error opening file for reading.\n";
                return;
            }
            while (file.read((char *)&patient, sizeof(patient))) {
                patient.putdata();
                cout << "---------------------\n";
            }
            file.close();
            break;

        case 3:
            cout << "Exiting to Main Menu...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);
}

//Similar functions for Doctor, Medicine, and Instrument
void manageDoctors() {
    Doctor doctor;
    fstream file;
    int choice;

    do {
        cout << "\n1. Insert Doctor Data\n";
        cout << "2. Display All Doctor Data\n";
        cout << "3. Exit to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            file.open("doctor.dat", ios::out | ios::app | ios::binary);
            if (!file) {
                cout << "Error opening file for writing.\n";
                return;
            }
            doctor.getdata();
            file.write((char *)&doctor, sizeof(doctor));
            file.close();
            cout << "Doctor data added successfully.\n";
            break;

        case 2:
            file.open("doctor.dat", ios::in | ios::binary);
            if (!file) {
                cout << "Error opening file for reading.\n";
                return;
            }
            while (file.read((char *)&doctor, sizeof(doctor))) {
                doctor.putdata();
                cout << "---------------------\n";
            }
            file.close();
            break;

        case 3:
            cout << "Exiting to Main Menu...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);
}

//Similar structure for Medicine and Instrument
void manageMedicines() {
    Medicine medicine;
    fstream file;
    int choice;

    do {
        cout << "\n1. Insert Medicine Data\n";
        cout << "2. Display All Medicine Data\n";
        cout << "3. Exit to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            file.open("medicine.dat", ios::out | ios::app | ios::binary);
            if (!file) {
                cout << "Error opening file for writing.\n";
                return;
            }
            medicine.getdata();
            file.write((char *)&medicine, sizeof(medicine));
            file.close();
            cout << "Medicine data added successfully.\n";
            break;

        case 2:
            file.open("medicine.dat", ios::in | ios::binary);
            if (!file) {
                cout << "Error opening file for reading.\n";
                return;
            }
            while (file.read((char *)&medicine, sizeof(medicine))) {
                medicine.putdata();
                cout << "---------------------\n";
            }
            file.close();
            break;

        case 3:
            cout << "Exiting to Main Menu...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);
}

void manageInstruments() {
    Instrument instrument;
    fstream file;
    int choice;

    do {
        cout << "\n1. Insert Instrument Data\n";
        cout << "2. Display All Instrument Data\n";
        cout << "3. Exit to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            file.open("instrument.dat", ios::out | ios::app | ios::binary);
            if (!file) {
                cout << "Error opening file for writing.\n";
                return;
            }
            instrument.getdata();
            file.write((char *)&instrument, sizeof(instrument));
            file.close();
            cout << "Instrument data added successfully.\n";
            break;

        case 2:
            file.open("instrument.dat", ios::in | ios::binary);
            if (!file) {
                cout << "Error opening file for reading.\n";
                return;
            }
            while (file.read((char *)&instrument, sizeof(instrument))) {
                instrument.putdata();
                cout << "---------------------\n";
            }
            file.close();
            break;

        case 3:
            cout << "Exiting to Main Menu...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);
}

//Main menu
int main() {
    int choice;

    do {
        cout << "\nMain Menu\n";
        cout << "1. Manage Patients\n";
        cout << "2. Manage Doctors\n";
        cout << "3. Manage Medicines\n";
        cout << "4. Manage Instruments\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            managePatients();
            break;
        case 2:
            manageDoctors();
            break;
        case 3:
            manageMedicines();
            break;
        case 4:
            manageInstruments();
            break;
        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}