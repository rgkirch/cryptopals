# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/richie/Downloads/JetBrains/clion-2016.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/richie/Downloads/JetBrains/clion-2016.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/richie/Documents/rgkirch/cryptopals

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/richie/Documents/rgkirch/cryptopals

# Include any dependencies generated for this target.
include src/CMakeFiles/base.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/base.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/base.dir/flags.make

src/CMakeFiles/base.dir/base.c.o: src/CMakeFiles/base.dir/flags.make
src/CMakeFiles/base.dir/base.c.o: src/base.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/richie/Documents/rgkirch/cryptopals/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/base.dir/base.c.o"
	cd /home/richie/Documents/rgkirch/cryptopals/src && /usr/bin/gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/base.dir/base.c.o   -c /home/richie/Documents/rgkirch/cryptopals/src/base.c

src/CMakeFiles/base.dir/base.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/base.dir/base.c.i"
	cd /home/richie/Documents/rgkirch/cryptopals/src && /usr/bin/gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/richie/Documents/rgkirch/cryptopals/src/base.c > CMakeFiles/base.dir/base.c.i

src/CMakeFiles/base.dir/base.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/base.dir/base.c.s"
	cd /home/richie/Documents/rgkirch/cryptopals/src && /usr/bin/gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/richie/Documents/rgkirch/cryptopals/src/base.c -o CMakeFiles/base.dir/base.c.s

src/CMakeFiles/base.dir/base.c.o.requires:

.PHONY : src/CMakeFiles/base.dir/base.c.o.requires

src/CMakeFiles/base.dir/base.c.o.provides: src/CMakeFiles/base.dir/base.c.o.requires
	$(MAKE) -f src/CMakeFiles/base.dir/build.make src/CMakeFiles/base.dir/base.c.o.provides.build
.PHONY : src/CMakeFiles/base.dir/base.c.o.provides

src/CMakeFiles/base.dir/base.c.o.provides.build: src/CMakeFiles/base.dir/base.c.o


# Object files for target base
base_OBJECTS = \
"CMakeFiles/base.dir/base.c.o"

# External object files for target base
base_EXTERNAL_OBJECTS =

src/libbase.a: src/CMakeFiles/base.dir/base.c.o
src/libbase.a: src/CMakeFiles/base.dir/build.make
src/libbase.a: src/CMakeFiles/base.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/richie/Documents/rgkirch/cryptopals/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libbase.a"
	cd /home/richie/Documents/rgkirch/cryptopals/src && $(CMAKE_COMMAND) -P CMakeFiles/base.dir/cmake_clean_target.cmake
	cd /home/richie/Documents/rgkirch/cryptopals/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/base.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/base.dir/build: src/libbase.a

.PHONY : src/CMakeFiles/base.dir/build

src/CMakeFiles/base.dir/requires: src/CMakeFiles/base.dir/base.c.o.requires

.PHONY : src/CMakeFiles/base.dir/requires

src/CMakeFiles/base.dir/clean:
	cd /home/richie/Documents/rgkirch/cryptopals/src && $(CMAKE_COMMAND) -P CMakeFiles/base.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/base.dir/clean

src/CMakeFiles/base.dir/depend:
	cd /home/richie/Documents/rgkirch/cryptopals && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/richie/Documents/rgkirch/cryptopals /home/richie/Documents/rgkirch/cryptopals/src /home/richie/Documents/rgkirch/cryptopals /home/richie/Documents/rgkirch/cryptopals/src /home/richie/Documents/rgkirch/cryptopals/src/CMakeFiles/base.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/base.dir/depend

