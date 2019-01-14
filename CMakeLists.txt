cmake_minimum_required(VERSION 3.12)
project(excellenteam-ella-c-dna-YiratG)

set(CMAKE_CXX_STANDARD 98)

add_executable(DNA main.cpp Model/DnaWriter.h Model/DnaReader.cpp Model/DnaReader.h Model/DnaWriter.cpp Model/DnaWriter.h Model/DnaSequence.cpp Model/DnaSequence.h Model/Nucleotide.cpp Model/Nucleotide.h Model/IDna.h View/CLI.cpp View/CLI.h View/Parser.cpp View/Parser.h Controller/Executable.cpp Controller/Executable.h Model/AddMotation.h Model/AddMotation.cpp usesLibraries/SharedPtr.h Controller/CmdFactory.h Controller/ICmd.cpp Controller/ICmd.h Controller/newCmd.cpp Controller/newCmd.h Model/DataCollection.cpp Model/DataCollection.h Model/DnaAndMetaData.cpp Model/DnaAndMetaData.h Controller/CmdFactory.cpp Controller/LoadCmd.cpp Controller/LoadCmd.h Model/IDna.cpp Controller/SaveCmd.cpp Controller/SaveCmd.h Controller/ListCmd.cpp Controller/ListCmd.h Model/DNAPair.cpp Model/DNAPair.h)