#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &name)
	: Form(name, 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &op)
	: Form(op.getName(), 25, 5)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &op) {
	(void)op;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (this->getSign() == false)
		throw PresidentialPardonForm::NotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	std::cout << this->getName() << " has been pardoned by Zafod Beelbebrox" << std::endl;

}
