# compile the cpp files

# Compiler and compilation flags
CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g

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

# Directories
SRC_DIR = ./
OBJ_DIR = .objs

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cc) # the wildcard function is used to search for files or file patterns that match a specific criteria. 

OBJS = $(patsubst $(SRC_DIR)/%.cc,$(OBJ_DIR)/%.o,$(SRCS)) 
# the patsubst function is used to generate a list of object files ($(OBJ_DIR)/%.o)  from a list of source files
# ($(SRC_DIR)/%.cc) by replacing the source directory ($(SRC_DIR)) with the object directory ($(OBJ_DIR)).
DEPS = $(OBJS:.o=.d) # generates a list of dependency files corresponding to the object files.

# Targets
TARGET = main

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to build object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to create the object directory
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean up
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

# Include dependencies
-include $(DEPS)
