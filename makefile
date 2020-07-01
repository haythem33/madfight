main : main.cpp
	g++ -c units/soldier/soldier.cpp units/infantry/infantry.cpp maps/test/test.cpp router/handleScreen.cpp main.cpp
	g++  soldier.o infantry.o test.o handleScreen.o  main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	rm -f main.o soldier.o infantry.o test.o handleScreen.o test.o
	./sfml-app
	
