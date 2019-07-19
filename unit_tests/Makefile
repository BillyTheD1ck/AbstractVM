##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC_DIR	=	../src

SRC	=	$(SRC_DIR)/Exception.cpp \
		$(SRC_DIR)/Chipset.cpp	\
		$(SRC_DIR)/Memory.cpp	\
		$(SRC_DIR)/Register.cpp	\
		$(SRC_DIR)/CPU.cpp	\
		$(SRC_DIR)/IOManager.cpp	\
		$(SRC_DIR)/bigDecimal.cpp	\
		$(SRC_DIR)/double.cpp	\
		$(SRC_DIR)/Factory.cpp	\
		$(SRC_DIR)/float.cpp	\
		$(SRC_DIR)/int8.cpp	\
		$(SRC_DIR)/int16.cpp	\
		$(SRC_DIR)/int32.cpp

SRC_UT_DIR	=	./src

SRC_UT	=	$(SRC_UT_DIR)/test_factory.cpp	\
		$(SRC_UT_DIR)/test_regex.cpp	\
		$(SRC_UT_DIR)/test_operations.cpp

NAME	=	unit_tests

OBJ	=	$(SRC:%.cpp=%.o) $(SRC_UT:%.cpp=%.o)

CXX	=	g++

RM	=	rm -f

INC	=	-I ../include/

CXXFLAGS	=	$(INC) -W -Wall -Wextra --coverage

LDFLAGS	=	-lcriterion -lgcov

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CXX) -o $(NAME) $(OBJ) $(LDFLAGS)

clean	:
		$(RM) $(OBJ)
		$(RM) .test_file

fclean	:	clean
		$(RM) $(NAME)
		$(RM) $(SRC_DIR)/*.gc*
		$(RM) $(SRC_UT_DIR)/*.gc*

re	:	fclean all
