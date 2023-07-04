#include<iostream>
using namespace std;

bool Search(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {

        if(arr[i] == key) {
            cout << "Key is found in " << i << " index" << endl;
            return 1;
        }
    }
    return 0;
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

    int key;
    cout <<"\nEnter the key: ";
    cin >> key;

    bool found = Search(arr, size, key);
    if(found == 0){
        cout << "Key is not found" << endl;
    }
}