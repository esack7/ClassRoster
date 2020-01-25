#include<iostream>
#include "softwareStudent.h"

using namespace std;

SoftwareStudent::SoftwareStudent() :Student() {
	degree = NETWORKING;
}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourses[], Degree degree)
	: Student(studentID, firstName, lastName, emailAddress, age, daysToCompleteCourses) {
	degree = NETWORKING;
}

Degree SoftwareStudent::getDegreeProgram() {
	return NETWORKING;
}

void SoftwareStudent::print() {
	this->Student::print();
	cout << "Needs implemented for SoftwareStudent" << "\n";
}

SoftwareStudent::~SoftwareStudent() {
	Student::~Student();
}