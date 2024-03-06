#include <iostream>

bool is_palindrome(int intergers[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (intergers[start] != intergers[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int sum_array_elements(int intergers[], int length){
    int sum = 0;
    for (int i=0; i < length; i++){
        sum = sum + intergers[i];
    }
    return sum;
}

int sum_if_palindrome(int intergers[], int length){
    if (length == 0 ){
        return -1 ;
    }
    if (is_palindrome(intergers, length)){
        return sum_array_elements(intergers, length);
    }else{
        return -2;
    }
}
