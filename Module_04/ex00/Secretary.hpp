#ifndef _SECRETARY_HPP_
#define _SECRETARY_HPP_

#include "Staff.hpp"

class Secretary : public Staff
{
private:

public:
	Form* createForm(FormType p_formType);
	void archiveForm();
};

#endif