// program to simple grade calculator terniry operator
#include <iostream>
using namespace std;
int main()
{
    // declare variables
    int marks;
    string name;
    char grade;

    cout << "------------------WELCOME TO GRADE CALCULATOR------------------" << endl;
    //  take input from user
    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello " << name << endl;

    cout << "Enter your marks: ";
    cin >> marks;

    // ternary operator to check the grade
    (marks > 90)
        ? grade = 'A'
    : (marks > 80)
        ? grade = 'B'
    : (marks > 60)
        ? grade = 'C'
    : (marks > 40)
        ? grade = 'D'
        : grade = 'F';

    (marks <= 100 && marks > 0)
        ? cout << "Your grade is: " << grade << ". "
        : cout << "Invalid marks" << endl;

    // switch case to provide feedback based on the grade
    switch (grade)
    {
    case 'A':
        cout << "Excellent work!";
        break;
    case 'B':
        cout << "Well done";
        break;
    case 'C':
        cout << "Good job";
        break;
    case 'D':
        cout << "You Passed, But you could do better";
        break;
    case 'F':
        cout << "Sorry, you failed";
        break;
    default:
        cout << "Invalid grade";
        break;
    }

    // if else statement to check if the student is eligible for the next level of study or not
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << " You are eligible for the next level of your study. " << endl;
    }
    else
    {
        cout << "Please try again next time." << endl;
    }

    return 0;
}