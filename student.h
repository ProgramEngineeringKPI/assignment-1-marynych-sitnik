#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student{
    std::string surname;
    int* grades = new int[5];
    bool has_contract;
    float avarage;
    Student(std::string surname, int grades[5], bool has_contract){
        this->surname = surname;
        this->grades = grades;
        this->has_contract = has_contract;
        for (int i = 0; i < 5; i++){
            avarage += grades[i];
        }
        avarage /= 5;
    }
}; 

#endif

