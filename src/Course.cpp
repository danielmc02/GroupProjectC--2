/*
    BugsCanFly.h
    
    Maung, Min Myat
    Ma, Kelvin
    Kim, Minju
    
    Fall 2022
    CS A250 - C++ 2
    Project: CS Courses    
*/

#include "Course.h"

#include <iostream>
#include <iomanip>
using namespace std;

const string Course::PREFIX = "CS A";

// Definition overloaded constructor
Course::Course(int inputNumber, const string& inputName, int inputUnits, const set<int>& inputPrereqs) :
	courseNumber(inputNumber),
	courseName(inputName),
	courseUnits(inputUnits),	
	prereqs (inputPrereqs) {}

// Definition function getCourseName
const string& Course::getCourseName() const
{
	return courseName;
}

// Definition function getCourseNumber
int Course::getCourseNumber() const
{
	return courseNumber;
}

// Definition function getCourseUnits
int Course::getCourseUnits() const
{
	return courseUnits;
}
// Definition function getCoursePrereqs
const set<int>& Course::getCoursePrereqs() const
{
	return prereqs;
}

// Definition function getCourse
const Course& Course::getCourse() const
{
	return *this;
}

// Definition function getPrefix
string Course::getPrefix() 
{
	return Course::PREFIX;
}

// Definition function setCourseName
void Course::setCourseName(const string& inputName)
{
	courseName = inputName;
}

// Definition function setCourseNumber
void Course::setCourseNumber(int inputNumber)
{
	courseNumber = inputNumber;
}

// Definition function setCourseUnits
void Course::setCourseUnits(int inputUnits)
{
	courseUnits = inputUnits;
}

// Definition function setPrereqs
void Course::setPrereqs(int otherArray[], int length)
{
	prereqs.clear();
	for(int i = 0; i < length; i++)
	{
		prereqs.insert(otherArray[i]);
	}
	
}
