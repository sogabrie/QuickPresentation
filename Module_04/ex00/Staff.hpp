#ifndef _STAFF_HPP_
#define _STAFF_HPP_

#include "Person.hpp"


class Staff : public Person
{
private:

public:
	void sign(Form* p_form);
};

#endif