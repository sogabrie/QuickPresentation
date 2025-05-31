#ifndef _PROFESSOR_HPP_
#define _PROFESSOR_HPP_

#include "Staff.hpp"

class Professor : public Staff
{
private:
	Course* _currentCourse;

public:
	void assignCourse(Course* p_course);
	void doClass();
	void closeCourse();
};

#endif