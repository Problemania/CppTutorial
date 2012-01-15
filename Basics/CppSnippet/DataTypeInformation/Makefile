##
## * Summary: make file for the C++ project DataTypeSizeRange.
##
## * Usage:
##
##   Compile and link:
##     $ make main.Out
##     g++ -c main.cpp
##     g++ -o main.out main.o
##
##     $ ls
##     main.cpp  main.cpp~  main.o  main.out  Makefile  Makefile~
##
##   Run the executable file:
##     $ ./main.out
##     Hello World!
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