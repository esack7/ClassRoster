#include<iostream>
#include "softwareStudent.h"

using namespace std;

SoftwareStudent::SoftwareStudent() :Student() {
	degree = SOFTWARE;
}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourses[], Degree degree)
	: Student(studentID, firstName, lastName, emailAddress, age, daysToCompleteCourses) {
	degree = SOFTWARE;
}

Degree SoftwareStudent::getDegreeProgram() {
	return SOFTWARE;
}

void SoftwareStudent::print() {
	this->Student::print();
	cout << "Degree Program: " << degreeStrings[SOFTWARE] << endl;
}

SoftwareStudent::~SoftwareStudent() {
	Student::~Student();
}