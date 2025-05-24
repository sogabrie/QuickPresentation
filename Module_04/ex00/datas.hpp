class Student;
class Professor;




enum class FormType
{
	CourseFinished
	NeedMoreClassRoom
	NeedCourseCreation
	SubscriptionToCourse
};



class SubscriptionToCourseForm : public Form
{
private:

public:
	void execute();
};

class Student : public Person
{
private:
	std::vector<Course*> _subscribedCourse;

public:
	void attendClass(Classroom* p_classroom);
	void exitClass();
	void graduate(Course* p_course);
};

class Headmaster : public Staff
{
private:
	std::vector<Form*> _formToValidate;
	
public:
	void receiveForm(Form* p_form);
};

class Secretary : public Staff
{
private:

public:
	Form* createForm(FormType p_formType);
	void archiveForm();
};

class Professor : public Staff
{
private:
	Course* _currentCourse;

public:
	void assignCourse(Course* p_course);
	void doClass();
	void closeCourse();
};

enum class Event
{
	RingBell
};

