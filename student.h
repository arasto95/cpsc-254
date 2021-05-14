#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student
{
public:
  // CONSTRUCTOR
  Student();

  // MODIFICATION MEMBER FUNCTIONS
  void setID(const int);
  void setAddress(const string);
  void setFName(const string);
  void setLName(const string);
  void setGPA(const float);
  void deleteStudent();
  Student find(Student *, int, const int);

  // CONSTANT MEMBER FUNCTIONS
  int getID(void) const;
  void display(void) const;

private:
  int ID;
  float GPA;
  string Address;
  string FName;
  string LName;
};

#endif
