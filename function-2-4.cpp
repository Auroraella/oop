#include <iostream>

int array_min(int intergers[], int length) {
    int min = intergers[0];
    for (int i = 1; i< length; i++ ){
        if ( min > intergers[i]){
            min = intergers[i];
        }
    }

    return min;
}

int array_max(int intergers[], int length) {
    int max = intergers[0];
    for (int i = 1; i< length; i++ ){
        if ( max < intergers[i]){
            max = intergers[i];
        }
    }

    return max;
}


int sum_min_max(int intergers[], int length){
    if (length < 0 ){
        return -1 ;
    }
    return array_min(intergers, length) + array_max(intergers, length);
}