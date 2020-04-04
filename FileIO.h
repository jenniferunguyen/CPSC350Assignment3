//Jennifer Nguyen
//2320560
//jenguyen@chapman.edu
//CPSC 350-02
//Assignment 3: Syntax Checker

#ifndef FILEIO_H
#define FILEIO_H
#include <fstream>
#include <string>
#include "SyntaxChecker.h"

class FileIO{
public:
    FileIO(); // default constructor
    ~FileIO(); // overloaded constructor

    void readFile(string fileName); // read and check syntax in file

private:
    SyntaxChecker *myChecker;
    int lineNum = 1;

};

#endif
