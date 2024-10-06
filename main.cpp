#include <iostream>
#include <cassert>
#include "array_shift.h"
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    array_shift(arr1, 5, 1);
    assert(arr1[0] == 2 && arr1[1] == 3 && arr1[2] == 4 && arr1[3] == 5 && arr1[4] == 1);
    cout << "After shifting arr1 by 1: [2, 3, 4, 5, 1]" << endl;

    array_shift(arr1, 5, 1);
    assert(arr1[0] == 3 && arr1[1] == 4 && arr1[2] == 5 && arr1[3] == 1 && arr1[4] == 2);
    cout << "After shifting arr1 by 1: [3, 4, 5, 1, 2]" << endl;

    array_shift(arr1, 5, 1);
    assert(arr1[0] == 4 && arr1[1] == 5 && arr1[2] == 1 && arr1[3] == 2 && arr1[4] == 3);
    cout << "After shifting arr1 by 1: [4, 5, 1, 2, 3]" << endl;

    int arr2[] = {1, 2, 3, 4, 5};
    array_shift(arr2, 5, 3);
    assert(arr2[0] == 4 && arr2[1] == 5 && arr2[2] == 1 && arr2[3] == 2 && arr2[4] == 3);
    cout << "After shifting arr2 by 3: [4, 5, 1, 2, 3]" <<  endl;

    array_shift(arr2, 5, 3);
    assert(arr2[0] == 2 && arr2[1] == 3 && arr2[2] == 4 && arr2[3] == 5 && arr2[4] == 1);
    cout << "After shifting arr2 by 3: [2, 3, 4, 5, 1]" << endl;

    array_shift(arr2, 5, 3);
    assert(arr2[0] == 5 && arr2[1] == 1 && arr2[2] == 2 && arr2[3] == 3 && arr2[4] == 4);
    cout << "After shifting arr2 by 3: [5, 1, 2, 3, 4]" << endl;

    int arr3[] = {1, 2, 3};
    array_shift(arr3, 3, 3);
    assert(arr3[0] == 1 && arr3[1] == 2 && arr3[2] == 3);
    cout << "After shifting arr3 by 3: [1, 2, 3]" << endl;

    int arr4[] = {1, 2, 3};
    array_shift(arr4, 3, 4);
    assert(arr4[0] == 2 && arr4[1] == 3 && arr4[2] == 1);
    cout << "After shifting arr4 by 4: [2, 3, 1]" << endl;
    return 0;
}
