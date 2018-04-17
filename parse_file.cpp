#include "student.h"
#include "parse_file.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;    

void setStudentValues(Student&, string, int*, bool);
void resize(Student*&, int&, int);
void fit_array(Student*&, int&);

void parse(Student*& students, int &length, ifstream& input_file){
    string surname;
    int* grades = new int[5];
    bool has_contract;
    int i = 0;
    while(!input_file.eof()){
        if (i + 1 > length){
            resize(students, length, length+10);
        }
        getline(input_file,surname,',');
        string grade;
        for (int j = 0; j < 5; j++){
            getline(input_file, grade, ',');
            grades[j] = stoi(grade);
        }        
        string str_has_contract = "";
        getline(input_file, str_has_contract, '\n');
        if(str_has_contract == "FALSE")
            has_contract = false;
        else 
            has_contract = true;
        setStudentValues(students[i], surname, grades, has_contract);
        i++;
    };
    fit_array(students, length);
}    

void resize(Student*& students, int& length, int new_length){
    Student* new_arr = new Student[new_length];
    if(new_length > length){
        for (int j = 0; j < length; j++){
            new_arr[j] = students[j];
        }
    }
    else{
        for (int j = 0; j < new_length; j++){
            new_arr[j] = students[j];
        }
    }
    delete[] students;
    students = new_arr;
    length = new_length;
    
}

void fit_array(Student*& students, int& length){
    int counter = 0;
    while (students[counter].surname != ""){
        counter++;
    }
    resize(students, length, counter);
}

void setStudentValues(Student& student, string surname, int* grades, bool has_contract){
        student.surname = surname;
        student.grades = grades;
        double avarage = 0;
        for (int j = 0; j < 5; j++){
            avarage += grades[j];
        }
        student.avarage = avarage / 5;
        student.has_contract = has_contract;
}    