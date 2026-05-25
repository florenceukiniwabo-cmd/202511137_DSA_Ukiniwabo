#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    int age;
    string course;
};

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

#endif

	


#include "student.h"

Student students[100];
int totalStudents = 0;

// Add Student
void addStudent()
{
    cout << "\nEnter Student ID: ";
    cin >> students[totalStudents].id;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, students[totalStudents].name);

    cout << "Enter Age: ";
    cin >> students[totalStudents].age;

    cin.ignore();

    cout << "Enter Course: ";
    getline(cin, students[totalStudents].course);

    totalStudents++;

    cout << "Student added successfully.\n";
}

// Display Students
void displayStudents()
{
    if (totalStudents == 0)
    {
        cout << "\nNo students found.\n";
        return;
    }

    cout << "\nList of Students\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;
    }
}

// Search Student
void searchStudent()
{
    int searchId;
    bool found = false;

    cout << "\nEnter Student ID to search: ";
    cin >> searchId;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].id == searchId)
        {
            cout << "\nStudent Found\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Course: " << students[i].course << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found.\n";
    }
}

// Update Student
void updateStudent()
{
    int updateId;
    bool found = false;

    cout << "\nEnter Student ID to update: ";
    cin >> updateId;

    cin.ignore();

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].id == updateId)
        {
            cout << "Enter new name: ";
            getline(cin, students[i].name);

            cout << "Enter new age: ";
            cin >> students[i].age;

            cin.ignore();

            cout << "Enter new course: ";
            getline(cin, students[i].course);

            cout << "Student updated successfully.\n";

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found.\n";
    }
}

// Delete Student
void deleteStudent()
{
    int deleteId;
    bool found = false;

    cout << "\nEnter Student ID to delete: ";
    cin >> deleteId;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].id == deleteId)
        {
            for (int j = i; j < totalStudents - 1; j++)
            {
                students[j] = students[j + 1];
            }

            totalStudents--;

            cout << "Student deleted successfully.\n";

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found.\n";
    }
}





#include "student.h"

int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "Program exited.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}