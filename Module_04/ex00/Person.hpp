#ifndef _PERSON_HPP_
#define _PERSON_HPP_

#include <iostream>
#include "Room.hpp"
#include "Form.hpp"
#include "Classroom.hpp"
#include "Course.hpp"

class Person
{
private:
	std::string _name;
	Room* _currentRoom;
public:
	Person(std::string p_name);
	Room* room() {return (_currentRoom);}
};

#endif