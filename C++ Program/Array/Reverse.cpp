#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0;
    int end = size-1;
    cout << "Your reverse array is: " ;
    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] <<" ";
    }
}

int main() {
    int size;
    int arr[100];
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Your array is: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    reverse(arr, size);
    printArray(arr, size); 

}