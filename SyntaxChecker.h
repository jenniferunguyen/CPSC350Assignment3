//Jennifer Nguyen
//2320560
//jenguyen@chapman.edu
//CPSC 350-02
//Assignment 3: Syntax Checker

#ifndef SYNTAXCHECKER_H
#define SYNTAXCHECKER_H
#include "GenStack.h"

class SyntaxChecker{
public:
    SyntaxChecker(); // default constructor
    ~SyntaxChecker(); // destructor

    bool problem(int lineNum, char c); // add element to stack of delimiter for file
    int lastLine(); // get line number of last delimiter
    bool finalCheck(); // returns true if delimiter stack is empty

private:
    GenStack<char> *myStack;
    int latestLine = 0;
};

#endif
