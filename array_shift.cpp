#include "array_shift.h"

void array_shift(int arr[], int size, int shifts) {
    if (size == 0) return; 
    shifts = shifts % size; 
    if (shifts < 0) shifts += size; 

   
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[(i + shifts) % size];
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}
