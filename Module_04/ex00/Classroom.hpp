#ifndef _CLASSROOM_HPP_
#define _CLASSROOM_HPP_

#include "Room.hpp"

class Classroom : public Room
{
private:
	Course* _currentRoom;

public:
	Classroom();
	void assignCourse(Course* p_course);
};

#endif