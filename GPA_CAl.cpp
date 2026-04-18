#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float grade, credit;
    float totalCredits = 0, totalGradePoints = 0;

    for (int i = 1; i <= n; i++) 
	{
        cout << "\nCourse " << i << endl;

        cout << "Enter grade (e.g., 4.0, 3.7, etc.): ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}