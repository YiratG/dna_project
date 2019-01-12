#include <iostream>
#include <cstring>
#include "Model/DnaSequence.h"
#include "Model/DnaReader.h"
#include "Controller/Executable.h"

using std::cout;
using std::endl;


void TestCopyCtor() {
    cout << "test copy ctor" << endl;
    try {
        DnaSequence ds1("ATCGGT");
        DnaSequence ds2(ds1);
        cout << "ds1:" << ds1 << endl << "ds2:" << ds2 << endl;
        cout << "ds1 length:" << ds1.get_length() << endl << "ds2 length:" << ds2.get_length() << endl;
    }
    catch (const char *ex) {
        cout << ex << endl;
    }

}

void TestAssignment() {
    cout << "test assignment " << endl;
    try {
        const char *cp = "ACCcTGGTAGCt";
        DnaSequence ds;
        ds = cp;
        delete[] cp;

    }
    catch (const char *ex) {
        cout << ex << endl;
    }
}

//void TestSlice() {
//    cout << "test slice " << endl;
//    try {
//        DnaSequence ds("ACCcTGGTAGCt");
//        DnaSequence slice;
//        slice = ds.get_slice(3, 6);
//        cout << "slice:" << slice << endl;
//    }
//    catch (const char *ex) {
//        cout << ex << endl;
//    }
//}

//void TestPair() {
//    cout << "test pair " << endl;
//    try {
//        DnaSequence ds("AAAGGGTTTCCC");
//        DnaSequence pa;
//        pa = ds.pair();
//        cout << "original: " << ds << endl;
//        cout << "pair: " << pa << endl;
//    }
//    catch (const char *ex) {
//        cout << ex << endl;
//    }
//}

//void TesFileReading() {
//    cout << "test read from file " << endl;
//    try {
//        DnaSequence ds;
//        ds.readFromFile("DNAFile.txt");
//        cout << "from file:  " << ds << endl;
//    }
//    catch (const char *ex) {
//        cout << ex << endl;
//    }
//}
//
//void TestFileWriting()
//{
//    cout << "test write to file" << endl;
//    try
//    {
//        DnaSequence ds("AAAGGGTTTCCC");
//        ds.WriteToFile("DNAFile2.txt");
//
//    }
//    catch (const char *ex) {
//        cout << ex << endl;
//    }
//}
int main()
 {
    //TestCopyCtor();
//    TestAssignment();
   // TestSlice();
   // TestPair();
    //TesFileReading();
    //TestFileWriting();
    Executable ex;
    ex.run();
    return 0;


}
