#include<iostream>
#include "networkStudent.h"

using namespace std;

NetworkStudent::NetworkStudent() :Student() {
	degree = NETWORKING;
}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourses[], Degree degree)
	: Student(studentID, firstName, lastName, emailAddress, age, daysToCompleteCourses) {
	degree = NETWORKING;
}

Degree NetworkStudent::getDegreeProgram() {
	return NETWORKING;
}

void NetworkStudent::print() {
	this->Student::print();
	cout << "Needs implemented for NetworkStudent" << "\n";
}

NetworkStudent::~NetworkStudent() {
	Student::~Student();
}