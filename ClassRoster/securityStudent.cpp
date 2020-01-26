#include<iostream>
#include "securityStudent.h"

using namespace std;

SecurityStudent::SecurityStudent() :Student() {
	degree = SECURITY;
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourses[], Degree degree)
	: Student(studentID, firstName, lastName, emailAddress, age, daysToCompleteCourses) {
	degree = SECURITY;
}

Degree SecurityStudent::getDegreeProgram() {
	return SECURITY;
}

void SecurityStudent::print() {
	this->Student::print();
	cout << "Degree Program: " << degreeStrings[SECURITY] << endl;
}

SecurityStudent::~SecurityStudent() {
	Student::~Student();
}