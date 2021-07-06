NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
CC = clang++

SRCS = main.cpp \
	Bureaucrat.cpp \
	Form.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp \
	Intern.cpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp	
	$(CC) $(CFLAGS) $< -c -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean : 
	$(RM) $(OBJS)
	$(RM) $(wildcard *_shrubbery)

fclean : clean
	$(RM) $(NAME)

re : fclean all