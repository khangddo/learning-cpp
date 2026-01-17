// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"
#include <fstream>
#include <string>

void initialize(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;
    
    initialize(SR);

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    SR.report_card(id);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec){
    std::ifstream inFile;
    std::string str;
    char c;
    int num;

    inFile.open("students.txt");
    if (inFile.fail()) {
        std::cout << "Failed to open file students.txt" << std::endl;
    } else {
        while (!inFile.eof()) {
            getline(inFile, str);
            num = stoi(str);
            getline(inFile, str);
            srec.add_student(num, str);
        }
        inFile.close();
    }   

    int cred;
    std::string cname;

    inFile.open("courses.txt");
    if (inFile.fail()) {
        std::cout << "Failed to open file courses.txt" << std::endl;
    } else {
        while (!inFile.eof()) {
            getline(inFile, str);
            num = stoi(str);
            getline(inFile, cname);
            getline(inFile, str);
            cred = stoi(str);
            srec.add_course(num, cname, cred);
        }
        inFile.close();
    }

    int course;
    inFile.open("grades.txt");
    if (inFile.fail()) {
        std::cout << "Failed to open file grades.txt" << std::endl;
    } else {
        while (!inFile.eof()) {
            getline(inFile, str);
            num = stoi(str);
            getline(inFile, str);
            course = stoi(str);
            getline(inFile, str);
            c = str[0];
            srec.add_grade(num, course, c);
        }
        inFile.close();
    }
}
