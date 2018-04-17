#include "student.h"
#include "count_scolarship_contenders.h"


int count_scolarship_conteders(Student*& students,int length){
    int counter = 0;
    for (int i = 0;i < length;i++){
        if (!students[i].has_contract){
            counter++;
        }
    }
    return counter;
}
