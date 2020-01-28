#pragma once
#include<string>
#include "degree.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

struct StudentRow {
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	Degree degree;
};

class Roster {
private:
	int lastIndex;
	int capacity;
	Student** classRosterArray;

public:
	Roster();
	Roster(int capacity);

	StudentRow parseStudentString(string row);
	string getStudentID(int i);

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);

	~Roster();
};