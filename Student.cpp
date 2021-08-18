#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
Student::assignDetails(int sId, char sName[]) {
  sId = studentId;
  strcpy(name, sName);
}

// Display StudentId and Name
Student::display() {
  cout <<"Student ID: "<< sId << endl;
  cout <<"Student Name: "<< sName << endl;
}
