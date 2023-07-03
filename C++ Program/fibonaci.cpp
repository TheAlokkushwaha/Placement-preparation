#include<iostream>
using namespace std;

int Fabonaci(int n) {
    int sum, a, b;
    a = 0;
    b = 1;
    cout << a << " " << b << " ";

    for(int i=2; i<n; i++) {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    cout << "Fabonaci series is:" << endl;
    Fabonaci(n);
}