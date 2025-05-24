#ifndef _PERSON_HPP_
#define _PERSON_HPP_

#include <iostrem>
#include "Room.hpp"

class Person
{
private:
	std::string _name;
	Room* _currentRoom;
public:
	Personne(std::string p_name);
	Room* room() {return (_currentRoom);}
};

#endif