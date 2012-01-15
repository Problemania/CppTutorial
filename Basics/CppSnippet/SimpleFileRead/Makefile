##
## * Summary: make file for test project.
##
## * Usage:
##
##   Compile and link:
##     $ make all
##     g++ -c main.cpp
##     g++ -o main.out main.o
##
##     $ ls
##     main.cpp  main.cpp~  main.o  main.out  Makefile  Makefile~
##
##   Run the executable file:
##     $ ./main.out
##
##   Remove executable file and link object file:
##     $ make clean
##     rm *.o main.out
##     $ ls
##     main.cpp  main.cpp~  Makefile  Makefile~
##
##
all: main

main: main.o
	g++ -o main main.o

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o main

# END