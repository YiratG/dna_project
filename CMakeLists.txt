cmake_minimum_required(VERSION 3.12)
project(DNA)

set(CMAKE_CXX_STANDARD 98)

add_executable(DNA main.cpp Model/DnaWriter.h DnaReader.cp Model/DnaReader.h Model/DnaWriter.cpp Model/DnaWriter.h Model/DnaSequence.cpp Model/DnaSequence.h Model/Nucleotide.cpp Model/Nucleotide.h Model/IDna.h View/CLI.cpp View/CLI.h Controller/Parser.cpp Controller/Parser.h Controller/Executable.cpp Controller/Executable.h)