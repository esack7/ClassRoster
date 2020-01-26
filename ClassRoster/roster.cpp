#include <iostream>
#include <cstdlib>
#include "roster.h"

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

Roster::Roster() {
	this->capacity = 0;
	this->lastIndex = -1;
	this->classRosterArray = nullptr;
}

Roster::Roster(int capacity) {
	this->capacity = capacity;
	this->lastIndex = -1;
	this->classRosterArray = new Student*[capacity];
}

void Roster::parseThenAdd(string row) {
	if (lastIndex < capacity) {
		++lastIndex;
		StudentRow rowData;
		int rowLength = row.length();
		int end = row.find(",");
		int start = 0;
		string final = "";

		rowData.studentID = row.substr(start, end - start);
		start = end + 1;
		end = row.find(",", start);

		rowData.firstName = row.substr(start, end - start);
		start = end + 1;
		end = row.find(",", start);

		rowData.lastName = row.substr(start, end - start);
		start = end + 1;
		end = row.find(",", start);

		rowData.emailAddress = row.substr(start, end - start);
		start = end + 1;
		end = row.find(",", start);

		rowData.age = atoi(row.substr(start, end - start).c_str());
		start = end + 1;
		end = row.find(",", start);

		rowData.daysInCourse1 = atoi(row.substr(start, end - start).c_str());
		start = end + 1;
		end = row.find(",", start);

		rowData.daysInCourse2 = atoi(row.substr(start, end - start).c_str());
		start = end + 1;
		end = row.find(",", start);

		rowData.daysInCourse3 = atoi(row.substr(start, end - start).c_str());
		start = end + 1;
		end = rowLength;

		final = row.substr(start, end - start);
		if (final == "SECURITY") {
			rowData.degree = SECURITY;
		}
		else if (final == "NETWORKING") {
			rowData.degree = NETWORKING;
		}
		else if (final == "SOFTWARE") {
			rowData.degree = SOFTWARE;
		}
		else {
			rowData.degree = SOFTWARE;
		}

		add(rowData.studentID, rowData.firstName, rowData.lastName, rowData.emailAddress, rowData.age, rowData.daysInCourse1, rowData.daysInCourse2, rowData.daysInCourse3, rowData.degree);
	}
	else {
		cerr << "ERROR! EXCEEDED MAXIMUM CAPACITY!\nEXITING NOW!";
		exit(-1);
	}
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
	int daysInCourseArray[Student::DAYS_TO_COMPLETE_ARRAY_SIZE];
	daysInCourseArray[0] = daysInCourse1;
	daysInCourseArray[1] = daysInCourse2;
	daysInCourseArray[2] = daysInCourse3;

	if (degree == SECURITY) {
		classRosterArray[lastIndex] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourseArray, degree);
	}
	else if (degree == NETWORKING) {
		classRosterArray[lastIndex] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourseArray, degree);
	}
	else {
		classRosterArray[lastIndex] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourseArray, degree);
	}
}

void Roster::printAll() {
	for (int i = 0; i <= this->lastIndex; ++i) {
		(this->classRosterArray)[i]->print();
	}
}

int main()
{
	int numStudents = 5;
	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Isaac,Heist,iheist@wgu.edu,38,12,60,45,SOFTWARE"
	};

	Roster* roster = new Roster(numStudents);

	for (int i = 0; i < numStudents; ++i) {
		roster->parseThenAdd(studentData[i]);
	}

	cout << "Course Title:\t\tSCRIPTING AND PROGRAMMING APPLICATIONS - C867" << endl;
	cout << "Programming Language:\tC++" << endl;
	cout << "Student ID:\t\t001101302" << endl;
	cout << "Student Name:\t\tIsaac Heist\n"<< endl;

	roster->printAll();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

