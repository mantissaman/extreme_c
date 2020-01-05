#include "average.h"

double avg(int* arr, int length, average_type_t type){
    if(length <=0 || type==NONE){
        return 0;
    }
    double sum = 0.0;

    for (int i =0; i<length; i++){
        if(type==NORMAL){
            sum +=arr[i];
        }
        else if(type==SQUARED){
            sum += arr[i] * arr[i];
        }
    }
    return sum/length;
}