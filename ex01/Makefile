CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: scavtrap

scavtrap: main.o ClapTrap.o ScavTrap.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f scavtrap

re: fclean all
