
#include <iostream>
using namespace std;

int main() {
    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: Ali" << endl;
    cout << "Age: 20" << endl;
    cout << "GPA: 3.5" << endl;

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    // This is a single-line comment

    /*
       This is a multi-line comment.
       It explains the purpose of the program.
    */

    int age = 20; // Variable stores a value

    cout << "Age: " << age << endl;

    return 0;
}




#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float gpa;
    string department;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your GPA: ";
    cin >> gpa;

    cout << "Enter your department: ";
    cin >> department;

    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int age;
    int birthYear;

    cout << "Enter your age: ";
    cin >> age;

    birthYear = 2026 - age;

    cout << "Your age is: " << age << endl;
    cout << "Your birth year is: " << birthYear << endl;

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    double fee = 25000.50;

    cout << "Student Grade: " << grade << endl;
    cout << "Student Fee: " << fee << endl;

    return 0;
}




