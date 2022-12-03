/*
    BugsCanFly.h
    
    Maung, Min Myat
    Ma, Kelvin
    Kim, Minju
    
    Fall 2022
    CS A250 - C++ 2
    Project: CS Courses    
*/

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <set>

class Course
{
public:

	// Constructors
	Course() : courseNumber(0),
				courseName("N/A"),
				courseUnits(0) {}
	
	Course(int , const std::string& , int , const std::set<int>&);

	// Accessor functions

	const std::string& getCourseName() const;

	int getCourseNumber() const;

	int getCourseUnits() const;

	const std::set<int>& getCoursePrereqs() const;
	
	const Course& getCourse() const;

	static std::string getPrefix();

	// Mutator functions
	void setCourseName(const std::string&);

	void setCourseNumber(int);

	void setCourseUnits(int);

	void setPrereqs(int[], int);

	// Destructor

	~Course() = default;

private:
	int courseNumber;
	std::string courseName;	
	int courseUnits;	
	std::set<int> prereqs;
	static const std::string PREFIX;
};
#endif

