#include "stdafx.h"
#include "student.h"
#include <iostream>

using namespace std;

const std::string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40" };

Student::Student() {};

Student::Student (std::string v_studentID, std::string v_firstName, std::string v_lastName, std::string v_emailAddress,
	int v_age, int v_daysInCourse1, int v_daysInCourse2, int v_daysInCourse3, std::string v_degreeProgram) {
	studentID = v_studentID;
	firstName = v_firstName;
	lastName = v_lastName;
	emailAddress = v_emailAddress;
	age = v_age;
	daysInCourse1 = v_daysInCourse1;
	daysInCourse2 = v_daysInCourse2;
	daysInCourse3 = v_daysInCourse3;
	degreeProgram = v_degreeProgram;
}


std::string Student::get_studentID()
{
	return studentID;
}

std::string Student::get_firstName()
{
	return firstName;
}

std::string Student::get_lastName()
{
	return lastName;
}

std::string Student::get_emailAddress()
{
	return emailAddress;
}

int Student::get_age()
{
	return age;
}

int Student::get_daysInCourse1()
{
	return daysInCourse1;
}

int Student::get_daysInCourse2()
{
	return daysInCourse2;
}

int Student::get_daysInCourse3()
{
	return daysInCourse3;
}

std::string Student::get_degreeProgram()
{
	return degreeProgram;
}

std::string Student::set_studentID(std::string v_studentID)
{
	studentID = v_studentID;
	return studentID;
}

std::string Student::set_firstName(std::string v_firstName)
{
	firstName = v_firstName;
	return firstName;
}

std::string Student::set_lastName(std::string v_lastName)
{
	lastName = v_lastName;
	return lastName;
}

std::string Student::set_emailAddress(std::string v_emailAddress)
{
	emailAddress = v_emailAddress;
	return emailAddress;
}

int Student::set_age(int v_age)
{
	age = v_age;
	return age;
}

int Student::set_daysInCourse1(int v_daysInCourse1)
{
	daysInCourse1 = v_daysInCourse1;
	return daysInCourse1;
}

int Student::set_daysInCourse2(int v_daysInCourse2)
{
	daysInCourse2 = v_daysInCourse2;
	return daysInCourse2;
}

int Student::set_daysInCourse3(int v_daysInCourse3)
{
	daysInCourse3 = v_daysInCourse3;
	return daysInCourse3;
}

std::string Student::set_degreeProgram(std::string v_degreeProgram)
{
	degreeProgram = v_degreeProgram;
	return degreeProgram;
}

void Student::printStudent()
{
	cout << "Student Information:" << '\n' <<
		'\t' << "StudentID: " << studentID << '\n' <<
		'\t' << "First Name: " << firstName << '\n' <<
		'\t' << "Last Name: " << lastName << '\n' <<
		'\t' << "Email Address: " << emailAddress << '\n' <<
		'\t' << "Age: " << age << '\n' <<
		'\t' << "Days In Course 1: " << daysInCourse1 << '\n' <<
		'\t' << "Days In Course 2: " << daysInCourse2 << '\n' <<
		'\t' << "Days In Course 3: " << daysInCourse3 << '\n' <<
		'\t' << "Degree Program: " << degreeProgram << '\n';

}

void Student::printDaysInCourse(std::string v_studentID)
{
	for (int i = 0; i < 3; i++)
	{
		// Needs to be in Roster class
	}
}

int main() {

	// Creating array of pointers to hold Student Objects and adding each student object
	//typedef Student* StudentPtr; 
	//StudentPtr * classRosterArray = new StudentPtr[3];  // Saw this typedef aliasing and wondered why this over below.  Ask instructor?

	Student ** classRosterArray = new Student*[3];
	for (int i = 0; i < 4; ++i) {
		classRosterArray[i] = new Student();  // future spot for iteration through student substring data
	}
	
	// Testing creating student object and populating data statically through mutators
	classRosterArray[0]->set_studentID("A1");
	classRosterArray[0]->set_firstName("John");
	classRosterArray[0]->set_lastName("Smith");
	classRosterArray[0]->set_emailAddress("John1989@gm ail.com");
	classRosterArray[0]->set_age(20);
	classRosterArray[0]->set_daysInCourse1(30);
	classRosterArray[0]->set_daysInCourse2(35);
	classRosterArray[0]->set_daysInCourse3(40);
	classRosterArray[0]->set_degreeProgram("SECURITY");

	classRosterArray[1]->set_studentID("A2");
	classRosterArray[1]->set_firstName("Suzan");
	classRosterArray[1]->set_lastName("Erickson");
	classRosterArray[1]->set_emailAddress("Erickson_1990@gmailcom");
	classRosterArray[1]->set_age(19);
	classRosterArray[1]->set_daysInCourse1(50);
	classRosterArray[1]->set_daysInCourse2(30);
	classRosterArray[1]->set_daysInCourse3(40);
	classRosterArray[1]->set_degreeProgram("NETWORK");

	classRosterArray[2]->set_studentID("A3");
	classRosterArray[2]->set_firstName("Jack");
	classRosterArray[2]->set_lastName("Napoli");
	classRosterArray[2]->set_emailAddress("The_lawyer99yahoo.com");
	classRosterArray[2]->set_age(19);
	classRosterArray[2]->set_daysInCourse1(20);
	classRosterArray[2]->set_daysInCourse2(40);
	classRosterArray[2]->set_daysInCourse3(33);
	classRosterArray[2]->set_degreeProgram("SOFTWARE");

	classRosterArray[3]->set_studentID("A4");
	classRosterArray[3]->set_firstName("Erin");
	classRosterArray[3]->set_lastName("Black");
	classRosterArray[3]->set_emailAddress("Erin.black@comcast.net");
	classRosterArray[3]->set_age(22);
	classRosterArray[3]->set_daysInCourse1(50);
	classRosterArray[3]->set_daysInCourse2(58);
	classRosterArray[3]->set_daysInCourse3(40);
	classRosterArray[3]->set_degreeProgram("SECURITY");

	/* 
	Testing creating student object with paramaterized constructor.
	Should be removed but used as a learning tool to help me understand constructors and accessor/mutators.
	Found it interesting that the IDE formats accessor/mutator object.printstudent() with -> but when creating the object
	using paramaterized constructor it formats object.printstude() it without the ->.  Ask instructor?  Seems to behave the same.
	
	//Student student2("A2", "J", "A", "ja@wgu.edu", 39, 30, 40, 50, "SOFTWARE");
	//student2.printStudent();

	*/
	classRosterArray[0]->printStudent();
	classRosterArray[1]->printStudent();
	classRosterArray[2]->printStudent();
	classRosterArray[3]->printStudent();

	
	return 0;
}