CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: fragtrap

fragtrap: main.o ClapTrap.o FragTrap.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f fragtrap

re: fclean all
