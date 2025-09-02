COMP     = g++
FLAGS    = -Wall -Wextra -Werror
STD_FLAG = -std=c++98
OUT_NAME = output
SRCS     = main.cpp \
		   HumanA.cpp \
		   HumanB.cpp \
		   Weapon.cpp
OBJS     = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(COMP) -c $(FLAGS) $(STD_FLAG) $< -o $@

$(OUT_NAME): $(OBJS)
	$(COMP) $(FLAGS) $(STD_FLAG) $(OBJS) -o $(OUT_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(OUT_NAME)

re: fclean $(OUT_NAME)