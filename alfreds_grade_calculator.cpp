#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

struct course
{
    string name;
    float grade;
    int credit_hours;
    float grade_point;
};

int main() {
    string name;
    string family_name;

    course first = {"", 0.0f, 0, 0.0f};
    course second = {"", 0.0f, 0, 0.0f};
    course third = {"", 0.0f, 0, 0.0f};
    course forth = {"", 0.0f, 0, 0.0f};
    course fifth = {"", 0.0f, 0, 0.0f};

    cout << "==========================================\n";
    cout << "    ALFRED'S GRADE CALCULATOR v1.0\n";
    cout << "==========================================\n\n";
    
    cout << "Welcome to Alfred's Grade Calculator!\n";
    cout << "This program will help you calculate your GPA.\n\n";
    
    cout << "Enter the student's name: ";
    getline(cin, name);
    cout << "Enter the student's family name: ";
    getline(cin, family_name);

    cout << "\n=== COURSE 1 ===\n";
    cout << "Enter the course's title: ";
    getline(cin, first.name);
    cout << "Enter the course's total credit hours: ";
    while (!(cin >> first.credit_hours) || first.credit_hours <= 0) {
        cout << "Invalid input. Please enter a positive number for credit hours: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter the grade earned in the course (0.0-4.0): ";
    while (!(cin >> first.grade) || first.grade < 0.0 || first.grade > 4.0) {
        cout << "Invalid input. Please enter a grade between 0.0 and 4.0: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    first.grade_point = first.grade * first.credit_hours;

    cin.ignore();

    cout << "\n=== COURSE 2 ===\n";
    cout << "Enter the course's title: ";
    getline(cin, second.name);
    cout << "Enter the course's total credit hours: ";
    while (!(cin >> second.credit_hours) || second.credit_hours <= 0) {
        cout << "Invalid input. Please enter a positive number for credit hours: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter the grade earned in the course (0.0-4.0): ";
    while (!(cin >> second.grade) || second.grade < 0.0 || second.grade > 4.0) {
        cout << "Invalid input. Please enter a grade between 0.0 and 4.0: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    second.grade_point = second.grade * second.credit_hours;

    cin.ignore();

    cout << "\n=== COURSE 3 ===\n";
    cout << "Enter the course's title: ";
    getline(cin, third.name);
    cout << "Enter the course's total credit hours: ";
    while (!(cin >> third.credit_hours) || third.credit_hours <= 0) {
        cout << "Invalid input. Please enter a positive number for credit hours: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter the grade earned in the course (0.0-4.0): ";
    while (!(cin >> third.grade) || third.grade < 0.0 || third.grade > 4.0) {
        cout << "Invalid input. Please enter a grade between 0.0 and 4.0: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    third.grade_point = third.grade * third.credit_hours;

    cin.ignore();

    cout << "\n=== COURSE 4 ===\n";
    cout << "Enter the course's title: ";
    getline(cin, forth.name);
    cout << "Enter the course's total credit hours: ";
    while (!(cin >> forth.credit_hours) || forth.credit_hours <= 0) {
        cout << "Invalid input. Please enter a positive number for credit hours: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter the grade earned in the course (0.0-4.0): ";
    while (!(cin >> forth.grade) || forth.grade < 0.0 || forth.grade > 4.0) {
        cout << "Invalid input. Please enter a grade between 0.0 and 4.0: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    forth.grade_point = forth.grade * forth.credit_hours;

    cin.ignore();

    cout << "\n=== COURSE 5 ===\n";
    cout << "Enter the course's title: ";
    getline(cin, fifth.name);
    cout << "Enter the course's total credit hours: ";
    while (!(cin >> fifth.credit_hours) || fifth.credit_hours <= 0) {
        cout << "Invalid input. Please enter a positive number for credit hours: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter the grade earned in the course (0.0-4.0): ";
    while (!(cin >> fifth.grade) || fifth.grade < 0.0 || fifth.grade > 4.0) {
        cout << "Invalid input. Please enter a grade between 0.0 and 4.0: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    fifth.grade_point = fifth.grade * fifth.credit_hours;

    float total_grade_point;
    total_grade_point = first.grade_point + second.grade_point + third.grade_point + forth.grade_point + fifth.grade_point;
    int total_credit_hours;
    total_credit_hours = first.credit_hours + second.credit_hours + third.credit_hours + forth.credit_hours + fifth.credit_hours;
    float gpa;
    gpa = total_grade_point / total_credit_hours;

    cout << "\n==========================================\n";
    cout << "           RESULTS SUMMARY\n";
    cout << "==========================================\n";
    cout << "Student: " << name << " " << family_name << "\n";
    cout << "Total Credit Hours: " << total_credit_hours << "\n";
    cout << "Total Grade Points: " << setprecision(2) << fixed << showpoint << total_grade_point << "\n";
    cout << "GPA: " << setprecision(2) << fixed << showpoint << gpa << "\n";
    cout << "==========================================\n";
    cout << "Thank you for using Alfred's Grade Calculator!\n";

    return 0;
}
