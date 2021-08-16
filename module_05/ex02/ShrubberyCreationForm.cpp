#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &name)
	: Form(name, 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &op)
	: Form(op.getName(), 145, 137)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &op) {
	(void)op;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (this->getSign() == false)
		throw ShrubberyCreationForm::NotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	std::ofstream newfile(this->getName() + "_shrubbery");
	newfile << "      /\\      " << std::endl;
	newfile << "     /\\*\\     " << std::endl;
	newfile << "    /\\O\\*\\    " << std::endl;
	newfile << "   /*/\\/\\/\\   " << std::endl;
	newfile << "  /\\O\\/\\*\\/\\  " << std::endl;
	newfile << " /\\*\\/\\*\\/\\/\\ " << std::endl;
	newfile << "/\\O\\/\\/*/\\/O/\\" << std::endl;
	newfile << "      ||      " << std::endl;
	newfile << "      ||      " << std::endl;
	newfile << "      ||      " << std::endl;
	newfile.close();
}
