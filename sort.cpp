#include "student.h"
#include "sort.h"
#include "count_scolarship_contenders.h"

void sort(Student*& students, int length)
{
    for (int k = 1; k < length; k++){
        Student swap = students[k];
        int i = k - 1;
        for (i;students[i].avarage < students[i + 1].avarage && i >= 0;){
            students[i + 1] = students[i];
            students[i] = swap;
            i--;
        }
    }
}