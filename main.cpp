#include <iostream>
#include <fstream>
#include <string>
#include "parse_file.h"
#include "student.h"
#include "write_to_file.h"
#include "count_scolarship_contenders.h"
#include "sort.h"

using namespace std;

int main(int argc,char* argv[])
{
    ifstream input_file(argv[1]);
    ofstream output_file("rating.csv");
    
    int length = 3;
     
    Student* students = new Student[length];
    parse(students, length, input_file);
    sort(students, length);
    write_scolarships(students, length, output_file);
}
