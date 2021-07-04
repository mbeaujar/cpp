NAME = replace
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp


OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) $< -c -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(OBJS) -o $@

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)


re : fclean all