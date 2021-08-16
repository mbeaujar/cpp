#include "RobotomyRequestForm.hpp"
#include <sys/time.h> // for robotomy
#include <unistd.h>   // same

RobotomyRequestForm::RobotomyRequestForm(std::string const &name)
	: Form(name, 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &op)
	: Form(op.getName(), 72, 45)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &op) {
	(void)op;
	return *this;
}

unsigned int hash3(unsigned int h1, unsigned int h2, unsigned int h3)
{
    return ((((h1 * 2654435789U) + h2) * 2654435789U) + h3);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (this->getSign() == false)
		throw RobotomyRequestForm::NotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	struct timeval time;
	gettimeofday(&time, NULL);
	srand(hash3(time.tv_sec, time.tv_usec, getpid()));
	std::cout << "Bzzzz... Bzzzz..." << std::endl;
	if (rand() % 2)
		std::cout << this->getName() << " has been robotomized succesfully !" << std::endl;
	else
		std::cout << this->getName() << " has not been robotomized succesfully !" << std::endl;
}
