//Jennifer Nguyen
//2320560
//jenguyen@chapman.edu
//CPSC 350-02
//Assignment 3: Syntax Checker

#include "FileIO.h"

FileIO::FileIO(){
    myChecker = new SyntaxChecker();
}


FileIO::~FileIO(){
    delete myChecker;
}

void FileIO::readFile(string fileName){
    string line;
    ifstream inputFile(fileName);
    if(inputFile.is_open()){
        while(getline(inputFile,line)){
            for(int i = 0; i < (line.length()-1); ++i){
                if(myChecker->problem(lineNum, line[i])) {
                    exit(-1);
                }
            }
            lineNum++;
        }
        if(myChecker->finalCheck()){
            cout << "Your file is good!" << endl;
        }
        else{
            cout << "You have an extra delimiter on line " << myChecker->lastLine() << endl;
            exit(-1);
        }
        inputFile.close();
    }

}
