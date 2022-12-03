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

#include "./header/CourseList.h"

#include <iostream>
using namespace std;

void testCourseList();
void testCopyConstructor();
void testOpEqualEmptyObjs();
void testOpEqSameLengthObjs();
void testOpEqCallingLonger();
void testOpEqCallingShorter();

int main()
{
testCourseList();
testCopyConstructor();
testOpEqualEmptyObjs();
testOpEqSameLengthObjs();
testOpEqCallingLonger();
testOpEqCallingShorter();
/***
     Course firstCourse;

    set<int> inputPrereqs = {1, 2, 3};

    Course secondCourse(250, "C++ Programming 2", 4, inputPrereqs);

    cout << "*******************************************" << endl << endl;
    
    cout << "For First Course" << endl;
    cout << "Prefix: " << Course::getPrefix() << endl;
    cout << "Course Name: " << firstCourse.getCourseName() << endl;
    cout << "Course Number: " << firstCourse.getCourseNumber() << endl;
    cout << "Course Units: " << firstCourse.getCourseUnits() << endl;

    set<int> firstPrereqs = firstCourse.getCoursePrereqs();

    cout << "Total prerequisites required: " << firstPrereqs.size() << endl << endl;
    
    cout << "*******************************************" << endl << endl;

    cout << "For Second Course" << endl;
    cout << "Course Name: " << secondCourse.getCourseName() << endl;
    cout << "Course Number: " << secondCourse.getCourseNumber() << endl;
    cout << "Course Units: " << secondCourse.getCourseUnits() << endl;
    set<int> secondPrereqs = secondCourse.getCoursePrereqs();
    cout << "Total prerequisites required: " << secondPrereqs.size() << endl;
    
    cout << endl << "*******************************************" << endl << endl;

    cout << "Setting Data Structure For First Course" << endl;

    firstCourse.setCourseName("Data Structures");
    cout << "Course Name: " << firstCourse.getCourseName() << endl;

    firstCourse.setCourseNumber(200);
    cout << "Course Number: " << firstCourse.getCourseNumber() << endl;

    firstCourse.setCourseUnits(4);
    cout << "Course Units: " << firstCourse.getCourseUnits() << endl;

    int prereqs1[] = {250, 170};
    firstCourse.setPrereqs(prereqs1, 2);
    firstPrereqs = firstCourse.getCoursePrereqs();
    
    cout << "Total prerequisites required: " << firstPrereqs.size() << endl;

    cout << "Prerequisites: ";

    for(int thePrereqs: firstPrereqs)
    {
        cout << thePrereqs << ",";
    }

    cout << endl << endl;

    cout << "*******************************************" << endl << endl;


    cout << "Setting Software Engineering For Second Course" << endl;

    secondCourse.setCourseName("Software Engineering");
    cout << "Course Name: " << secondCourse.getCourseName() << endl;

    secondCourse.setCourseNumber(220);
    cout << "Course Number: " << secondCourse.getCourseNumber() << endl;

    secondCourse.setCourseUnits(4);
    cout << "Course Units: " << secondCourse.getCourseUnits() << endl;

    int prereqs2[] = {250, 170, 150};
    secondCourse.setPrereqs(prereqs2, 3);
    secondPrereqs = secondCourse.getCoursePrereqs();
    
    cout << "Total prerequisites required: " << secondPrereqs.size() << endl;

    cout << "Prerequisites: ";

    for(int thePrereqs: secondPrereqs)
    {
        cout << thePrereqs << ",";
    }

    cout << endl << endl;

    cout << "*******************************************" << endl << endl;

    cout << "End of Testing" << endl;
***/

cout << "\n";
return 0;
}