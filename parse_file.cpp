#include "student.h"
#include "parse_file.h"
#include <fstream>
#include <string>

using namespace std;    

int parse(Student* students[], int length, ifstream& input_file){
    for (int i = 0; i < length;i++){
        string surname;
        int* grades = new int[5];
        bool has_contract;

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
        students[i] = new Student(surname, grades, has_contract);
    }
}    
    