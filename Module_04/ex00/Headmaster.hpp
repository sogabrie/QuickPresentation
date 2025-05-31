#ifndef _HEADMASTER_HPP_
#define _HEADMASTER_HPP_

#include "Staff.hpp"

class Headmaster : public Staff
{
private:
	std::vector<Form*> _formToValidate;
	
public:
	void receiveForm(Form* p_form);
};

#endif