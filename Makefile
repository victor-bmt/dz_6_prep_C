Solids : main.o Solid.o
	g++ -std=gnu++11 -Wall -Wextra -Werror main.o Solid.o -o Solids

main.o : main.cpp Solid.h
	g++ -std=gnu++11 -Wall -Wextra -Werror -c main.cpp

Solid.o : Solid.cpp Solid.h
	g++ -std=gnu++11 -Wall -Wextra -Werror -c Solid.cpp
