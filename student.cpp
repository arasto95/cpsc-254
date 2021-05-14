#include <iostream>
#include <string>
#include <cstdlib>
#include "student.h"
using namespace std;

// CONSTRUCTOR
Student::Student()
{
     ID = 0;
     GPA = 0;
     Address = "";
     FName = "";
     LName = "";
}

// MODIFICATION MEMBER FUNCTIONS
void Student::setID(const int value)
{
     ID = value;
}

void Student::setAddress(string value)
{
     while (value == "")
     {
          cout << "Please enter a valid address! ";
          cin >> value;
     }
     Address = value;
}

void Student::setFName(string value)
{
     while (value == "")
     {
          cout << "Please enter a student's first name! ";
          cin >> value;
     }
     FName = value;
}

void Student::setLName(string value)
{
     while (value == "")
     {
          cout << "Please enter a student's last name! ";
          cin >> value;
     }
     LName = value;
}

void Student::setGPA(float value)
{
     while (value < 0 || value > 4)
     {
          cout << "Please enter a valid GPA for the student (0 - 4.0): ";
          cin >> value;
     }
     GPA = value;
}
void Student::deleteStudent()
{
     ID = 0;
     GPA = 0;
     Address = "";
     FName = "";
     LName = "";
}

// CONSTANT MEMBER FUNCTIONS

int Student::getID(void) const
{
     return ID;
}

Student Student::find(Student students[], int numStudents, const int searchID)
{
     for (int index = 0; index < numStudents; index++)
     {
          if (students[index].getID() == searchID)
          {
               return students[index];
          }
     }
     return students[numStudents - 1];
}

void Student::display(void) const
{
     if (ID != 0)
     {
          cout << endl;
          cout << "ID: " << ID << endl;
          cout << "Name: " << FName << " " << LName << endl;
          cout << "Address: " << Address << endl;
          cout << "GPA: " << GPA << endl;
          cout << endl;
     }
}
