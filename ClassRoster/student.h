#include <string>
#include "degree.h"

using namespace std;

class student {
public:
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	[]int getDaysToCompleteCourses();
	Degree getDegree();

	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysToCompleteCourses([]int daysToCompleteCoursesArray);
	void setDegree(Degree degree);

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysToCompleteCourses[3];
	Degree degree;
};

