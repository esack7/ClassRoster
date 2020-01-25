#pragma once
#include<string>
#include "student.h"
class SecurityStudent : public Student {
public:
	SecurityStudent();
	SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourses[], Degree degree);

	Degree getDegreeProgram();
	void print();

	~SecurityStudent();
};

