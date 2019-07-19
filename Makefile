##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.cpp \
		src/Exception.cpp \
		src/Chipset.cpp	\
		src/Memory.cpp	\
		src/Register.cpp	\
		src/CPU.cpp	\
		src/IOManager.cpp	\
		src/bigDecimal.cpp	\
		src/double.cpp	\
		src/Factory.cpp	\
		src/float.cpp	\
		src/int8.cpp	\
		src/int16.cpp	\
		src/int32.cpp	\

NAME	=	abstractVM

OBJ	=	$(SRC:.cpp=.o)

CXX	=	g++

RM	=	rm -f

INC	=	-I include/

CXXFLAGS	=	$(INC) -W -Wall -Wextra

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CXX) -o $(NAME) $(OBJ)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)
		make fclean -C unit_tests/

re	:	fclean all

debug: 		CFLAGS += -g
debug:		re

tests_run:
		make -C unit_tests/
		./unit_tests/unit_tests
