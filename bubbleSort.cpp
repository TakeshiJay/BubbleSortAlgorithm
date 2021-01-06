#include <algorithm>
#include <iostream>
#include <stdio.h>
/** Bubble sort algorithm for C++ using pointers
* @author Jacob Sunia
* 1/5/2021
*/
using namespace std;

/** This function swaps the item if the item is greater than the next
 *  @param nuX is the pointer of the first integer
 *  @param nuY is the pointer of the second integer
*/
void swap(int* nuX, int* nuY) {
    // asterisks call the value while ampersands call the reference address'  
    int item = *nuX;
    *nuX = *nuY;
    *nuY = item;
}

/** This function bubble sorts the array
 * @param arr[] is the array that is passed into the swap function
 * @param n is the length of the array
*/
void bubbleSort(int arr[], int n) {// arr[] is the array, n is number of item
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]); // referencing address to current array point
                swapped = true;
            }
        }
        if (swapped == false) break;
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        cout << " ";
    }
}

int main() {
    int arr[] = { 7,2,3,1,5,9 };
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    print(arr, n);

    return 0;
}
