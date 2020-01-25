#include <string>
#include <iostream>
#include <iomanip>
#include "student.h";

Student::Student() {
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < DAYS_TO_COMPLETE_ARRAY_SIZE; ++i) {
		daysToCompleteCourses[i] = 0;
	}
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourses[]) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < DAYS_TO_COMPLETE_ARRAY_SIZE; ++i) {
		this->daysToCompleteCourses[i] = daysToCompleteCourses[i];
	}
}

string Student::getStudentID() {
	return studentID;
}

string Student::getFirstName() {
	return firstName;
}

string Student::getLastName() {
	return lastName;
}

string Student::getEmailAddress() {
	return emailAddress;
}
int Student::getAge() {
	return age;
}

int * Student::getDaysToCompleteCourses() {
	return daysToCompleteCourses;
}

void Student::setStudentID(string studentID) {
	this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysToCompleteCourses([]int daysToCompleteCourses) {
	for (int i = 0; i < DAYS_TO_COMPLETE_ARRAY_SIZE; ++i) {
		this->daysToCompleteCourses[i] = daysToCompleteCourses;
	}
}

void Student::print() {
	cout << left << setw(15) << setStudentID;
	cout << left << setw(15) << firstName;
	cout << left << setw(15) << lastName;
	cout << left << setw(30) << emailAddress;
	cout << left << setw(05) << age;
	cout << left << setw(15) << degree;
}

Student::~Student() {

}
