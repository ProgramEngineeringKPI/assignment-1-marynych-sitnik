#include <fstream>
#include "student.h"
#include "write_to_file.h"
#include "count_scolarship_contenders.h"


void write_scolarships(Student*& students, int length, std::ofstream& output_file)
{
    int scolarship_contenders = count_scolarship_conteders(students, length);
    int number_of_scolarships = scolarship_contenders * 0.4;
    for (int i = 0;i < length;i++){
        if (!students[i].has_contract && number_of_scolarships){
            output_file << students[i].surname << " " << students[i].avarage;
            output_file << '\n';
            number_of_scolarships--;
            if (!number_of_scolarships){
                output_file << students[i].avarage;
            }
        }
    }

}