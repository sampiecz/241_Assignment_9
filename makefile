#
# PROGRAM: Assign 8   
# PROGRAMMER: Samuel Piecz 
# LOGON ID: Z1732715 
# DATE DUE: 11/29/17 
#
# Compiler variables
CCFLAGS = -ansi -Wall -std=c++11

# Rule to link object code files to create executable file
assign8: assign8.o
	g++ $(CCFLAGS) -o assign8 assign8.o

# Rule to compile source code file to object code
assign8.o: assign8.cpp    mergesort.h    sorts.h   quicksort.h
	g++ $(CCFLAGS) -c assign8.cpp

# Pseudo-target to remove object code and executable files
clean:
	-rm *.o assign8
