#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student {
	
private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age, daysInCourse1, daysInCourse2, daysInCourse3;
	std::string degreeProgram;
	Student ** classRosterArray;

public:

	Student();
	Student(std::string, std::string, std::string, std::string, int, int, int, int, std::string);

	std::string get_studentID();
	std::string get_firstName();
	std::string get_lastName();
	std::string get_emailAddress();
	int get_age();
	int get_daysInCourse1();
	int get_daysInCourse2();
	int get_daysInCourse3();
	std::string get_degreeProgram();

	std::string set_studentID(std::string);
	std::string set_firstName(std::string);
	std::string set_lastName(std::string);
	std::string set_emailAddress(std::string);
	int set_age(int);
	int set_daysInCourse1(int);
	int set_daysInCourse2(int);
	int set_daysInCourse3(int);
	std::string set_degreeProgram(std::string);

	void printStudent();
	void printDaysInCourse(std::string);

};
#endif
