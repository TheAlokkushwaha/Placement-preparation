#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2 ;
    int ans = -1;

    while(start <= end) {
        
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }

         else if(key > arr[mid]) {
            start = mid + 1 ;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2 ;
    int ans = -1;

    while(start <= end) {
        
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }

         else if(key > arr[mid]) {
            start = mid + 1 ;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int main() {
    int even[6] = {1,2,2,2,3,4};

    cout << "First Occurence of 2 is " << firstOcc(even, 6, 2) << endl;
    cout << "Last Occurence of 2 is " << lastOcc(even, 6, 2) << endl;;
    return 0;
}