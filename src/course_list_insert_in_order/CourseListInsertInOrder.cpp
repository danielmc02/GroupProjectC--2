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

// Definition function insertInOrder
// Assume there are no duplicates.
void CourseList::insertInOrder(Node* ptrToNode)
{
    int currentNodesCourseNumber = ptrToNode->getCourse().getCourseNumber();
    while(ptrToNode->getNext()->getCourse().getCourseNumber() > currentNodesCourseNumber)
    {
        
    }
}