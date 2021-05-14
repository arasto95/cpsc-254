#include <iostream>
#include <string>
#include <cstdlib>
#include "student.h"
#include "student.cpp"
using namespace std;

int main(void)
{
   Student students[30];
   int term = 0;
   int searchID = 0;
   int numStudents = 0;
   int menuChoice = 0;
   string mFName = "";
   string mLName = "";
   string mAddress = "";
   int mID = 0;
   float mGPA = 0;
   do
   {
      cout << "MENU" << endl;
      cout << "1. Create New Student" << endl;
      cout << "2. Delete Student (by ID Number)" << endl;
      cout << "3. Display All Students" << endl;
      cout << "4. Search for Student (by ID Number)" << endl;
      cout << "5. Quit" << endl;
      cin >> menuChoice;
      if (menuChoice == 1)
      {
         cout << "Please enter new student's first name: ";
         cin >> mFName;
         cout << "Please enter new student's last name: ";
         cin >> mLName;
         cout << "Please enter new student's address: ";
         cin >> mAddress;
         cout << "Please enter new student's GPA: ";
         cin >> mGPA;
         mID = (rand() % 9999) + 1;
         students[numStudents].setID(mID);
         students[numStudents].setFName(mFName);
         students[numStudents].setLName(mLName);
         students[numStudents].setAddress(mAddress);
         students[numStudents].setGPA(mGPA);
         numStudents++;
      }
      else if (menuChoice == 2)
      {
         cout << "Please enter to be deleted student's ID : ";
         cin >> searchID;
         for (int index = 0; index < numStudents; index++)
         {
            if (students[index].getID() == searchID)
            {
               students[index].deleteStudent();
            }
         }
      }
      else if (menuChoice == 3)
      {
         for (int k = 0; k < numStudents; k++)
         {
            students[k].display();
         }
      }

      else if (menuChoice == 4)
      {
         cout << "Which student are you looking for? (Please enter their ID Number) : ";
         cin >> searchID;
         (students[numStudents - 1].find(students, numStudents, searchID)).display();
      }
      else if (menuChoice = 5)
      {
         term = 1;
      }
      else
         cout << "Please enter in a correct menu choice: ";
   } while (term == 0);
   return 0;
}
