#include<iostream>
using namespace std;

int ApSeries(int a, int d, int n) {
    return (a + (n-1) * d);
}

int main () {
    int a,d,n;
    cout << "Enter the starting number: " << endl;
    cin >> a;
    cout << "Enter the difference: " << endl;
    cin >> d;
    cout << "Enter the term to be find: " << endl;
    cin >> n;
    cout << n << " term is your AP series is: " <<  ApSeries(a , d, n);
}