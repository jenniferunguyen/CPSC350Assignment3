//Jennifer Nguyen
//2320560
//jenguyen@chapman.edu
//CPSC 350-02
//Assignment 3: Syntax Checker

#include "FileIO.h"

int main(int argc, char** argv){

    if(argc < 2){
        cout << "Invalid usage, please provide an input file" << endl;
        exit(-1);
    }

    bool checking = true;
    string fileName = argv[1];
    while(checking){
        FileIO *newRead = new FileIO();
        newRead->readFile(fileName);
        char again;
        cout << "Check another file? y/n" << endl;
        cin >> again;
        if(again == 'y'){
            cout << "Next file name: ";
            cin >> fileName;
        }
        else{
            break;
        }
    }


    return 0;
}
