# NAMES
NAME 				:= fixed

# SOURCE FILES
SRC		 			:= 	main.cpp \
						Fixed.cpp

# OBJECT FILES
OBJ_DIR				:=	obj/
OBJ_FILES			:= 	$(SRC:%.cpp=%.o)
OBJ					:=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

# COMPILER OPTIONS
CXX					:= c++
CPPFLAGS			:= -Wall -Werror -Wextra -std=c++98


# COLORS
RED					:=	\033[91;1m
GREEN				:=	\033[92;1m
YELLOW				:=	\033[93;1m
BLUE				:=	\033[94;1m
PINK				:=	\033[95;1m
CLEAR				:=	\033[0m

# MAKEFILE RULES
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@echo "$(PINK)Compiling $(NAME) file.$(CLEAR)"
	@$(CXX) $(CPPFLAGS) $(OBJ) $(INCLUDE) -o $(NAME) $(LDFLAGS)
	@echo "$(GREEN)[OK]\n$(CLEAR)$(GREEN)Success!$(CLEAR)\n"

clean:
	@echo "$(PINK)Removing $(YELLOW)$(NAME)$(PINK) object files.$(CLEAR)"
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN)Object files removed correctly\n$(CLEAR)"

fclean: clean
	@echo "$(PINK)Removing $(YELLOW)$(NAME) $(PINK)file.$(CLEAR)"
	@rm -f $(NAME)
	@echo "$(GREEN)$(NAME) file removed correctly\n$(CLEAR)"

re: fclean all

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o:	%.cpp
	@$(CXX) -c -o $@ $< $(CPPFLAGS) 

.PHONY:	all clean fclean re test_clean