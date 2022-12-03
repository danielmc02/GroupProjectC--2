/*
    BugsCanFly.h
    
    Maung, Min Myat
    Ma, Kelvin
    Kim, Minji
	McCray, Daniel

    Fall 2022
    CS A250 - C++ 2
    Project: CS Courses    
*/

#include "../header/CourseList.h"

#include <iostream>
#include <sstream>
using namespace std;

// Definition function addCourse
void CourseList::addCourse(const Course& inputCourse)
{
	insertInOrder(new Node(inputCourse, nullptr));
}

// Definition function addCourse (overloaded version)
void CourseList::addCourse(int inputNumber, const string& inputName, int inputUnits, const set<int>& inputSet)
{
	insertInOrder(new Node(Course (inputNumber, inputName, inputUnits, inputSet), nullptr));
}

// Definition function getPrefix (Accessor)
string CourseList::getPrefix() const
{
	return Course::getPrefix();
}

// Definition function getNumberOfCourses (Accessor)
int CourseList::getNumberOfCourses() const
{
	return count;
}

// Definition function isEmpty (Boolean)
bool CourseList::isEmpty() const
{
	return (count == 0);
}

// Definition function searchCourse (courseNumber) (Boolean)
// Assume list is non-empty.
bool CourseList::searchCourse(int searchValue) const
{
	return (CourseList::getCourseLocation(searchValue) != nullptr);
}

// Definition function searchCourse (courseNumber, courseName) (Boolean/Overloaded)
// Assume list is non-empty.
bool CourseList::searchCourse(int searchNumber, string& searchName) const
{
	Node* answer = CourseList::getCourseLocation(searchNumber);

	if(answer != nullptr)
	{
		searchName = answer->getCourse().getCourseName();
	}
	

	return (answer != nullptr);
}

// Definition function searchCourse(courseNumber, course) (Boolean/Overloaded)
// Assume list is non-empty.
bool CourseList::searchCourse(int searchNumber, Course& searchCourse) const
{
	Node* answer = CourseList::getCourseLocation(searchNumber);

	if(answer != nullptr)
	{
		searchCourse = answer->getCourse();
	}
	

	return (answer != nullptr);
}

// Definitiion deleteCourse
// Assume list is non-empty.
// Assume course is in the list.
void CourseList::deleteCourse(int searchNumber)
{
	Node* temp1 = first;
	Node* temp2 = first->getNext();
	bool found = false;

	while(temp2 != nullptr && !found)
	{
		if (temp1->getCourse().getCourseNumber() == searchNumber)
		{
			first = temp2;

			delete temp1;
			temp1 = nullptr;
			count--;
			found = true;
		}
		else if(temp2->getCourse().getCourseNumber() == searchNumber)
		{
			if(temp2 == last)
			{
				temp1->setNext(nullptr);
				last = temp1;
			}
			else
			{
				temp1->setNext(temp2->getNext());
			}
			
			delete temp2;
			temp2 = nullptr;
			count--;
			found = true;
		}
		else
		{
			temp1 = temp2;
			temp2 = temp2->getNext();
		}	
	}
}

// Definition retrieveAllCourses
// Assume list is non-empty.
void CourseList::retrieveAllCourses(string& allCourses) const
{
	Node* temp = first;
	ostringstream out;

	while(temp != nullptr)
	{
		Course tempCourse = temp->getCourse();
		out << getPrefix() << tempCourse.getCourseNumber() << " - " << tempCourse.getCourseName() << endl;

		temp = temp->getNext();
	}

	allCourses = out.str();

}

// Definition clearList
void CourseList::clearlist()
{
	Node* current = first;

	while(current != nullptr)
	{
		Node* temp = current;
		current = current->getNext();
		first = current;

		delete temp;
		temp = nullptr;
		count--;
	}

	first = nullptr;
	last = nullptr;
	current = nullptr;
}

// Definition function getCourseLocation
Node * CourseList::getCourseLocation(int searchValue) const
{
	Node* temp = first;
	bool found = false;

	while(!found && temp != nullptr)
	{
		if(temp->getCourse().getCourseNumber() == searchValue)
		{
			found = true;
		}
		else
		{
			temp = temp->getNext();
		}
		
	}

	return temp;
}

