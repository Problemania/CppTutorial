##
## * Summary: make file for HelloWorld project.
##
## * Usage:
##
##   Compile and link:
##     $ make all
##     g++ -c HelloWorld.cpp
##     g++ -o HelloWorld.out HelloWorld.o
##
##     $ ls
##     HelloWorld.cpp  HelloWorld.cpp~  HelloWorld.o  HelloWorld.out  Makefile  Makefile~
##
##   Run the executable file:
##     $ ./HelloWorld.out
##     Hello World!
##
##   Remove executable file and link object file:
##     $ make clean
##     rm *.o HelloWorld.out
##     $ ls
##     HelloWorld.cpp  HelloWorld.cpp~  Makefile  Makefile~
##
##
all: main

main: HelloWorld.o
	g++ -o main HelloWorld.o

HelloWorld.o: HelloWorld.cpp
	g++ -c HelloWorld.cpp

clean:
	rm *.o main

# END