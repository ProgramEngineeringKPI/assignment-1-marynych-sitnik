#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "parse_file.h"
#include "student.h"

using namespace std;

int main(int argc,char* argv[])
{
    ifstream input_file(argv[1]);
    ofstream output_file("rating.csv");
    
    int length;
    input_file >> length;
    
    Student* students[length];
    parse(students, length, input_file);
}
