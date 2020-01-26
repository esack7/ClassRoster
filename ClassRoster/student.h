#pragma once
#include <string>
#include "degree.h"

using namespace std;

class Student {
public:
	static const int DAYS_TO_COMPLETE_ARRAY_SIZE = 3;

protected:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysToCompleteCourses[DAYS_TO_COMPLETE_ARRAY_SIZE];
	Degree degree;

public:
	Student();
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourses[]);

	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getDaysToCompleteCourses();
	virtual Degree getDegreeProgram() = 0;

	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	//void setDaysToCompleteCourses([]int daysToCompleteCourses);

	virtual void print() = 0;

	~Student();
};

