# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /home/yirat/Downloads/clion-2018.2.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yirat/Downloads/clion-2018.2.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yirat/Documents/excellenteam-ella-c-dna-YiratG

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DNA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DNA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DNA.dir/flags.make

CMakeFiles/DNA.dir/main.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DNA.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/main.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/main.cpp

CMakeFiles/DNA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/main.cpp > CMakeFiles/DNA.dir/main.cpp.i

CMakeFiles/DNA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/main.cpp -o CMakeFiles/DNA.dir/main.cpp.s

CMakeFiles/DNA.dir/Model/DnaReader.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Model/DnaReader.cpp.o: ../Model/DnaReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DNA.dir/Model/DnaReader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Model/DnaReader.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaReader.cpp

CMakeFiles/DNA.dir/Model/DnaReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Model/DnaReader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaReader.cpp > CMakeFiles/DNA.dir/Model/DnaReader.cpp.i

CMakeFiles/DNA.dir/Model/DnaReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Model/DnaReader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaReader.cpp -o CMakeFiles/DNA.dir/Model/DnaReader.cpp.s

CMakeFiles/DNA.dir/Model/DnaWriter.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Model/DnaWriter.cpp.o: ../Model/DnaWriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DNA.dir/Model/DnaWriter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Model/DnaWriter.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaWriter.cpp

CMakeFiles/DNA.dir/Model/DnaWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Model/DnaWriter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaWriter.cpp > CMakeFiles/DNA.dir/Model/DnaWriter.cpp.i

CMakeFiles/DNA.dir/Model/DnaWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Model/DnaWriter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaWriter.cpp -o CMakeFiles/DNA.dir/Model/DnaWriter.cpp.s

CMakeFiles/DNA.dir/Model/DnaSequence.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Model/DnaSequence.cpp.o: ../Model/DnaSequence.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DNA.dir/Model/DnaSequence.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Model/DnaSequence.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaSequence.cpp

CMakeFiles/DNA.dir/Model/DnaSequence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Model/DnaSequence.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaSequence.cpp > CMakeFiles/DNA.dir/Model/DnaSequence.cpp.i

CMakeFiles/DNA.dir/Model/DnaSequence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Model/DnaSequence.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaSequence.cpp -o CMakeFiles/DNA.dir/Model/DnaSequence.cpp.s

CMakeFiles/DNA.dir/Model/Nucleotide.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Model/Nucleotide.cpp.o: ../Model/Nucleotide.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DNA.dir/Model/Nucleotide.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Model/Nucleotide.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/Nucleotide.cpp

CMakeFiles/DNA.dir/Model/Nucleotide.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Model/Nucleotide.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/Nucleotide.cpp > CMakeFiles/DNA.dir/Model/Nucleotide.cpp.i

CMakeFiles/DNA.dir/Model/Nucleotide.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Model/Nucleotide.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/Nucleotide.cpp -o CMakeFiles/DNA.dir/Model/Nucleotide.cpp.s

CMakeFiles/DNA.dir/View/CLI.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/View/CLI.cpp.o: ../View/CLI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/DNA.dir/View/CLI.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/View/CLI.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/View/CLI.cpp

CMakeFiles/DNA.dir/View/CLI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/View/CLI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/View/CLI.cpp > CMakeFiles/DNA.dir/View/CLI.cpp.i

CMakeFiles/DNA.dir/View/CLI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/View/CLI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/View/CLI.cpp -o CMakeFiles/DNA.dir/View/CLI.cpp.s

CMakeFiles/DNA.dir/View/Parser.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/View/Parser.cpp.o: ../View/Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/DNA.dir/View/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/View/Parser.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/View/Parser.cpp

CMakeFiles/DNA.dir/View/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/View/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/View/Parser.cpp > CMakeFiles/DNA.dir/View/Parser.cpp.i

CMakeFiles/DNA.dir/View/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/View/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/View/Parser.cpp -o CMakeFiles/DNA.dir/View/Parser.cpp.s

CMakeFiles/DNA.dir/Controller/Executable.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Controller/Executable.cpp.o: ../Controller/Executable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/DNA.dir/Controller/Executable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Controller/Executable.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/Executable.cpp

CMakeFiles/DNA.dir/Controller/Executable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Controller/Executable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/Executable.cpp > CMakeFiles/DNA.dir/Controller/Executable.cpp.i

CMakeFiles/DNA.dir/Controller/Executable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Controller/Executable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/Executable.cpp -o CMakeFiles/DNA.dir/Controller/Executable.cpp.s

CMakeFiles/DNA.dir/Model/AddMotation.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Model/AddMotation.cpp.o: ../Model/AddMotation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/DNA.dir/Model/AddMotation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Model/AddMotation.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/AddMotation.cpp

CMakeFiles/DNA.dir/Model/AddMotation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Model/AddMotation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/AddMotation.cpp > CMakeFiles/DNA.dir/Model/AddMotation.cpp.i

CMakeFiles/DNA.dir/Model/AddMotation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Model/AddMotation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/AddMotation.cpp -o CMakeFiles/DNA.dir/Model/AddMotation.cpp.s

CMakeFiles/DNA.dir/Controller/ICmd.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Controller/ICmd.cpp.o: ../Controller/ICmd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/DNA.dir/Controller/ICmd.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Controller/ICmd.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/ICmd.cpp

CMakeFiles/DNA.dir/Controller/ICmd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Controller/ICmd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/ICmd.cpp > CMakeFiles/DNA.dir/Controller/ICmd.cpp.i

CMakeFiles/DNA.dir/Controller/ICmd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Controller/ICmd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/ICmd.cpp -o CMakeFiles/DNA.dir/Controller/ICmd.cpp.s

CMakeFiles/DNA.dir/Controller/newCmd.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Controller/newCmd.cpp.o: ../Controller/newCmd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/DNA.dir/Controller/newCmd.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Controller/newCmd.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/newCmd.cpp

CMakeFiles/DNA.dir/Controller/newCmd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Controller/newCmd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/newCmd.cpp > CMakeFiles/DNA.dir/Controller/newCmd.cpp.i

CMakeFiles/DNA.dir/Controller/newCmd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Controller/newCmd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/newCmd.cpp -o CMakeFiles/DNA.dir/Controller/newCmd.cpp.s

CMakeFiles/DNA.dir/Model/DataCollection.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Model/DataCollection.cpp.o: ../Model/DataCollection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/DNA.dir/Model/DataCollection.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Model/DataCollection.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DataCollection.cpp

CMakeFiles/DNA.dir/Model/DataCollection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Model/DataCollection.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DataCollection.cpp > CMakeFiles/DNA.dir/Model/DataCollection.cpp.i

CMakeFiles/DNA.dir/Model/DataCollection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Model/DataCollection.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DataCollection.cpp -o CMakeFiles/DNA.dir/Model/DataCollection.cpp.s

CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.o: ../Model/DnaAndMetaData.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaAndMetaData.cpp

CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaAndMetaData.cpp > CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.i

CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Model/DnaAndMetaData.cpp -o CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.s

CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.o: ../Controller/CmdFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/CmdFactory.cpp

CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/CmdFactory.cpp > CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.i

CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/CmdFactory.cpp -o CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.s

CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.o: ../Controller/LoadCmd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.o -c /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/LoadCmd.cpp

CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/LoadCmd.cpp > CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.i

CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/Controller/LoadCmd.cpp -o CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.s

# Object files for target DNA
DNA_OBJECTS = \
"CMakeFiles/DNA.dir/main.cpp.o" \
"CMakeFiles/DNA.dir/Model/DnaReader.cpp.o" \
"CMakeFiles/DNA.dir/Model/DnaWriter.cpp.o" \
"CMakeFiles/DNA.dir/Model/DnaSequence.cpp.o" \
"CMakeFiles/DNA.dir/Model/Nucleotide.cpp.o" \
"CMakeFiles/DNA.dir/View/CLI.cpp.o" \
"CMakeFiles/DNA.dir/View/Parser.cpp.o" \
"CMakeFiles/DNA.dir/Controller/Executable.cpp.o" \
"CMakeFiles/DNA.dir/Model/AddMotation.cpp.o" \
"CMakeFiles/DNA.dir/Controller/ICmd.cpp.o" \
"CMakeFiles/DNA.dir/Controller/newCmd.cpp.o" \
"CMakeFiles/DNA.dir/Model/DataCollection.cpp.o" \
"CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.o" \
"CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.o" \
"CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.o"

# External object files for target DNA
DNA_EXTERNAL_OBJECTS =

DNA: CMakeFiles/DNA.dir/main.cpp.o
DNA: CMakeFiles/DNA.dir/Model/DnaReader.cpp.o
DNA: CMakeFiles/DNA.dir/Model/DnaWriter.cpp.o
DNA: CMakeFiles/DNA.dir/Model/DnaSequence.cpp.o
DNA: CMakeFiles/DNA.dir/Model/Nucleotide.cpp.o
DNA: CMakeFiles/DNA.dir/View/CLI.cpp.o
DNA: CMakeFiles/DNA.dir/View/Parser.cpp.o
DNA: CMakeFiles/DNA.dir/Controller/Executable.cpp.o
DNA: CMakeFiles/DNA.dir/Model/AddMotation.cpp.o
DNA: CMakeFiles/DNA.dir/Controller/ICmd.cpp.o
DNA: CMakeFiles/DNA.dir/Controller/newCmd.cpp.o
DNA: CMakeFiles/DNA.dir/Model/DataCollection.cpp.o
DNA: CMakeFiles/DNA.dir/Model/DnaAndMetaData.cpp.o
DNA: CMakeFiles/DNA.dir/Controller/CmdFactory.cpp.o
DNA: CMakeFiles/DNA.dir/Controller/LoadCmd.cpp.o
DNA: CMakeFiles/DNA.dir/build.make
DNA: CMakeFiles/DNA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable DNA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DNA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DNA.dir/build: DNA

.PHONY : CMakeFiles/DNA.dir/build

CMakeFiles/DNA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DNA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DNA.dir/clean

CMakeFiles/DNA.dir/depend:
	cd /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yirat/Documents/excellenteam-ella-c-dna-YiratG /home/yirat/Documents/excellenteam-ella-c-dna-YiratG /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug /home/yirat/Documents/excellenteam-ella-c-dna-YiratG/cmake-build-debug/CMakeFiles/DNA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DNA.dir/depend

