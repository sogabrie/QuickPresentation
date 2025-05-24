#ifndef _FORM_HPP_
#define _FORM_HPP_

#include "datas.hpp"

class Form
{
private:
	FormType _formType;

public:
	Form(FormType p_formType)
	{

	}

	virtual void execute() = 0;
};

#endif