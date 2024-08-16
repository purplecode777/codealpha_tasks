/*This is a random c++ code specially for task 3 to identify code errors and vulnerabilities manually. However in this following code there are various 
errors and vulnerabilities which are resolved in the later code*/
// C++ program to illustrate the use of copy constructor
#include <iostream>
#include <string.h
using namespace std;

// Class definition for 'student'
class student {
    int rno;
    string name;
    double fee;

public:
    // Parameterized constructor
    student(int, string, double);
    // Copy constructor
    student(student& t)
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout < "Copy Constructor Called" << endl;
    }
    // Function to display student details
    void display()
};

// Implementation of the parameterized constructor
student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

// Implementation of the display function
void student:display()
{
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main()
{
    // Create student object with parameterized constructor
    student s(1001, "Manjeet", 10000);
    s.display()

    // Create another student object using the copy
    // constructor
    student manjeet(s);
    manjeet.display();

    return 0;
}

/*In the following code, changes have been done when errors were detected. This code analysis is done manually on windows 11*/

// C++ program to illustrate the use of copy constructor
#include <iostream>
#include <string.h>
using namespace std;

// Class definition for 'student'
class student {
    int rno;
    string name;
    double fee;

public:
    // Parameterized constructor
    student(int, string, double);
    // Copy constructor
    student(student& t)
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "Copy Constructor Called" << endl;
    }
    // Function to display student details
    void display();
};

// Implementation of the parameterized constructor
student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

// Implementation of the display function
void student::display()
{
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main()
{
    // Create student object with parameterized constructor
    student s(1001, "Manjeet", 10000);
    s.display();

    // Create another student object using the copy
    // constructor
    student manjeet(s);
    manjeet.display();

    return 0;
}