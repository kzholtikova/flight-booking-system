# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/flight_booking_system.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/flight_booking_system.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/flight_booking_system.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/flight_booking_system.dir/flags.make

CMakeFiles/flight_booking_system.dir/src/airplane.cpp.o: CMakeFiles/flight_booking_system.dir/flags.make
CMakeFiles/flight_booking_system.dir/src/airplane.cpp.o: /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/airplane.cpp
CMakeFiles/flight_booking_system.dir/src/airplane.cpp.o: CMakeFiles/flight_booking_system.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/flight_booking_system.dir/src/airplane.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/flight_booking_system.dir/src/airplane.cpp.o -MF CMakeFiles/flight_booking_system.dir/src/airplane.cpp.o.d -o CMakeFiles/flight_booking_system.dir/src/airplane.cpp.o -c /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/airplane.cpp

CMakeFiles/flight_booking_system.dir/src/airplane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/flight_booking_system.dir/src/airplane.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/airplane.cpp > CMakeFiles/flight_booking_system.dir/src/airplane.cpp.i

CMakeFiles/flight_booking_system.dir/src/airplane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/flight_booking_system.dir/src/airplane.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/airplane.cpp -o CMakeFiles/flight_booking_system.dir/src/airplane.cpp.s

CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.o: CMakeFiles/flight_booking_system.dir/flags.make
CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.o: /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/fileReader.cpp
CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.o: CMakeFiles/flight_booking_system.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.o -MF CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.o.d -o CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.o -c /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/fileReader.cpp

CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/fileReader.cpp > CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.i

CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/fileReader.cpp -o CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.s

CMakeFiles/flight_booking_system.dir/src/main.cpp.o: CMakeFiles/flight_booking_system.dir/flags.make
CMakeFiles/flight_booking_system.dir/src/main.cpp.o: /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/main.cpp
CMakeFiles/flight_booking_system.dir/src/main.cpp.o: CMakeFiles/flight_booking_system.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/flight_booking_system.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/flight_booking_system.dir/src/main.cpp.o -MF CMakeFiles/flight_booking_system.dir/src/main.cpp.o.d -o CMakeFiles/flight_booking_system.dir/src/main.cpp.o -c /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/main.cpp

CMakeFiles/flight_booking_system.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/flight_booking_system.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/main.cpp > CMakeFiles/flight_booking_system.dir/src/main.cpp.i

CMakeFiles/flight_booking_system.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/flight_booking_system.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/main.cpp -o CMakeFiles/flight_booking_system.dir/src/main.cpp.s

CMakeFiles/flight_booking_system.dir/src/seat.cpp.o: CMakeFiles/flight_booking_system.dir/flags.make
CMakeFiles/flight_booking_system.dir/src/seat.cpp.o: /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/seat.cpp
CMakeFiles/flight_booking_system.dir/src/seat.cpp.o: CMakeFiles/flight_booking_system.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/flight_booking_system.dir/src/seat.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/flight_booking_system.dir/src/seat.cpp.o -MF CMakeFiles/flight_booking_system.dir/src/seat.cpp.o.d -o CMakeFiles/flight_booking_system.dir/src/seat.cpp.o -c /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/seat.cpp

CMakeFiles/flight_booking_system.dir/src/seat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/flight_booking_system.dir/src/seat.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/seat.cpp > CMakeFiles/flight_booking_system.dir/src/seat.cpp.i

CMakeFiles/flight_booking_system.dir/src/seat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/flight_booking_system.dir/src/seat.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/seat.cpp -o CMakeFiles/flight_booking_system.dir/src/seat.cpp.s

CMakeFiles/flight_booking_system.dir/src/system.cpp.o: CMakeFiles/flight_booking_system.dir/flags.make
CMakeFiles/flight_booking_system.dir/src/system.cpp.o: /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/system.cpp
CMakeFiles/flight_booking_system.dir/src/system.cpp.o: CMakeFiles/flight_booking_system.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/flight_booking_system.dir/src/system.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/flight_booking_system.dir/src/system.cpp.o -MF CMakeFiles/flight_booking_system.dir/src/system.cpp.o.d -o CMakeFiles/flight_booking_system.dir/src/system.cpp.o -c /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/system.cpp

CMakeFiles/flight_booking_system.dir/src/system.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/flight_booking_system.dir/src/system.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/system.cpp > CMakeFiles/flight_booking_system.dir/src/system.cpp.i

CMakeFiles/flight_booking_system.dir/src/system.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/flight_booking_system.dir/src/system.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/system.cpp -o CMakeFiles/flight_booking_system.dir/src/system.cpp.s

CMakeFiles/flight_booking_system.dir/src/ticket.cpp.o: CMakeFiles/flight_booking_system.dir/flags.make
CMakeFiles/flight_booking_system.dir/src/ticket.cpp.o: /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/ticket.cpp
CMakeFiles/flight_booking_system.dir/src/ticket.cpp.o: CMakeFiles/flight_booking_system.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/flight_booking_system.dir/src/ticket.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/flight_booking_system.dir/src/ticket.cpp.o -MF CMakeFiles/flight_booking_system.dir/src/ticket.cpp.o.d -o CMakeFiles/flight_booking_system.dir/src/ticket.cpp.o -c /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/ticket.cpp

CMakeFiles/flight_booking_system.dir/src/ticket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/flight_booking_system.dir/src/ticket.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/ticket.cpp > CMakeFiles/flight_booking_system.dir/src/ticket.cpp.i

CMakeFiles/flight_booking_system.dir/src/ticket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/flight_booking_system.dir/src/ticket.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/ticket.cpp -o CMakeFiles/flight_booking_system.dir/src/ticket.cpp.s

CMakeFiles/flight_booking_system.dir/src/user.cpp.o: CMakeFiles/flight_booking_system.dir/flags.make
CMakeFiles/flight_booking_system.dir/src/user.cpp.o: /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/user.cpp
CMakeFiles/flight_booking_system.dir/src/user.cpp.o: CMakeFiles/flight_booking_system.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/flight_booking_system.dir/src/user.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/flight_booking_system.dir/src/user.cpp.o -MF CMakeFiles/flight_booking_system.dir/src/user.cpp.o.d -o CMakeFiles/flight_booking_system.dir/src/user.cpp.o -c /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/user.cpp

CMakeFiles/flight_booking_system.dir/src/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/flight_booking_system.dir/src/user.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/user.cpp > CMakeFiles/flight_booking_system.dir/src/user.cpp.i

CMakeFiles/flight_booking_system.dir/src/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/flight_booking_system.dir/src/user.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/src/user.cpp -o CMakeFiles/flight_booking_system.dir/src/user.cpp.s

# Object files for target flight_booking_system
flight_booking_system_OBJECTS = \
"CMakeFiles/flight_booking_system.dir/src/airplane.cpp.o" \
"CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.o" \
"CMakeFiles/flight_booking_system.dir/src/main.cpp.o" \
"CMakeFiles/flight_booking_system.dir/src/seat.cpp.o" \
"CMakeFiles/flight_booking_system.dir/src/system.cpp.o" \
"CMakeFiles/flight_booking_system.dir/src/ticket.cpp.o" \
"CMakeFiles/flight_booking_system.dir/src/user.cpp.o"

# External object files for target flight_booking_system
flight_booking_system_EXTERNAL_OBJECTS =

flight_booking_system: CMakeFiles/flight_booking_system.dir/src/airplane.cpp.o
flight_booking_system: CMakeFiles/flight_booking_system.dir/src/fileReader.cpp.o
flight_booking_system: CMakeFiles/flight_booking_system.dir/src/main.cpp.o
flight_booking_system: CMakeFiles/flight_booking_system.dir/src/seat.cpp.o
flight_booking_system: CMakeFiles/flight_booking_system.dir/src/system.cpp.o
flight_booking_system: CMakeFiles/flight_booking_system.dir/src/ticket.cpp.o
flight_booking_system: CMakeFiles/flight_booking_system.dir/src/user.cpp.o
flight_booking_system: CMakeFiles/flight_booking_system.dir/build.make
flight_booking_system: CMakeFiles/flight_booking_system.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable flight_booking_system"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flight_booking_system.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/flight_booking_system.dir/build: flight_booking_system
.PHONY : CMakeFiles/flight_booking_system.dir/build

CMakeFiles/flight_booking_system.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/flight_booking_system.dir/cmake_clean.cmake
.PHONY : CMakeFiles/flight_booking_system.dir/clean

CMakeFiles/flight_booking_system.dir/depend:
	cd /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug /Users/owner/Storage/KSE/IT-Disciplines/OPD/flight-booking-system/cmake-build-debug/CMakeFiles/flight_booking_system.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/flight_booking_system.dir/depend

