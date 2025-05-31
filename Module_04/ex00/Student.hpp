#ifndef _STUDENT_HPP_
#define _STUDENT_HPP_

#include "Person.hpp"
#include "Classroom.hpp"
#include "Course.hpp"

class Student : public Person
{
private:
	std::vector<Course*> _subscribedCourse;

public:
	void attendClass(Classroom* p_classroom);
	void exitClass();
	void graduate(Course* p_course);
};

#endif