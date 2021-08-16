#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int GradeToExec)
	: _name(name),
	  _isSigned(false),
	  _gradeToSign(gradeToSign),
	  _gradeToExec(GradeToExec)
{}

Form::Form(Form const &op)
	: _name(op._name),
	  _isSigned(false),
	  _gradeToSign(op._gradeToSign),
	  _gradeToExec(op._gradeToExec)
{}

Form::~Form() {}

Form& Form::operator=(Form const &op) {
	if (this == &op)
		return *this;
	_isSigned = op._isSigned;
	return *this;
}

void Form::beSigned(Bureaucrat &bu) {
	int grade = bu.getGrade();
	if (grade < _gradeToSign) {
		_isSigned = true;
		bu.signForm(true, _name, "");
	}
	else {
		throw Form::GradeTooLowException();
	}
}

/* void Form::execute(Bureaucrat const &executor) const {
	std::cout << "executed" << std::endl;
} */

std::string Form::getName() const {
	return _name;
}

bool Form::getSign() const {
	return _isSigned;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExec() const {
	return _gradeToExec;
}


std::ostream& operator<<(std::ostream &o, Form const &op) {
	if (op.getSign() == true)
		o << "Sign " << op.getName() << " is signed";
	else
		o << "Sign " << op.getName() << " is not signed";
	return o;
}