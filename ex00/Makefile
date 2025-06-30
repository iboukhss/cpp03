CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: claptrap

claptrap: main.o ClapTrap.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f claptrap

re: fclean all
