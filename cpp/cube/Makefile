# compile the cpp files

# Compiler and compilation flags
CC = clang++
CCFLAGS = -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g

#clang++: Calls the clang C++ compiler.
#-std=c++1y: Specifies the C++ standard to use (in this case, C++14).
#-stdlib=libc++: Specifies to use the LLVM C++ standard library.
#-O0: Turns off all optimization.
#-pedantic: Issues all the warnings demanded by strict ISO C++.
#-Wall: Enables all warnings about constructions that some users consider questionable.
#-Werror: Treats all warnings as errors.
#-Wfatal-errors: Stops compilation after the first error.
#-Wextra: Enables some extra warning flags.
#-Wno-unused-parameter: Suppresses warnings about unused parameters.
#-Wno-unused-variable: Suppresses warnings about unused variables.
#-g: Generates debugging information.
#-c: Compiles the source files without linking them.

OBJ_DIR = .objs
SRC_DIR = ./
#:= expands curdir immediately as opposed to = w/c creates a recursive var that's expanded each time it's referenced

TARGET = main
DEPS = $(wildcard $(SRC_DIR)/*.cc)

all: $(TARGET)

$(TARGET): $(DEPS) # $^: repr. all prerequisite files while $@ repr. the target file
	$(CC) $(CCFLAGS) $^ -o $@ 

clean:
	rm -r $(TARGET).dSYM $(TARGET).d

