#include<iostream>
#include "securityStudent.h"

using namespace std;

SecurityStudent::SecurityStudent() :Student() {
	degree = NETWORKING;
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourses[], Degree degree)
	: Student(studentID, firstName, lastName, emailAddress, age, daysToCompleteCourses) {
	degree = NETWORKING;
}

Degree SecurityStudent::getDegreeProgram() {
	return NETWORKING;
}

void SecurityStudent::print() {
	this->Student::print();
	cout << "Needs implemented for SecurityStudent" << "\n";
}

SecurityStudent::~SecurityStudent() {
	Student::~Student();
}