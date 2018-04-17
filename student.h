#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student{
    std::string surname;
    int* grades = new int[5];
    bool has_contract;
    float avarage;
}; 

#endif

