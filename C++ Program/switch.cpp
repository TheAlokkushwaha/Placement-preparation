#include <iostream>
using namespace std;

int main (){
    int amount;
    int note500, note100, note50, note20, note10, note1;
    note500 = note100 = note50 = note20 = note10 = note1 = 0;
    cout << "Find the total number of 500, 100, 50, 20, 10, 1 rupees note" << endl;
    cout << "Enter the total amount you have"<< endl;
    cin >> amount ;

    switch (amount>=500)
    {
    case 1:
        note500 = amount/500;
        amount-= amount/500 * 500;
        cout << "you have " << note500 << " Five hundred rupee notes "<< endl ;
        break;
    }

    switch (amount>=100)
    {
    case 1:
        note100 = amount/100;
        amount-= amount/100 * 100;
        cout << "you have " << note100 << " One hundred rupee notes "<< endl ;
        break;
    }

    switch (amount>=50)
    {
    case 1:
        note50 = amount/50;
        amount-= amount/50 * 50;
        cout << "you have " << note50 << " Fifty rupee notes "<< endl ;
        break;
    }

    switch (amount>=20)
    {
    case 1:
        note20 = amount/20;
        amount-= amount/20 * 20;
        cout << "you have " << note20 << " Twinty rupee notes "<< endl ;
        break;
    }

    switch (amount>=10)
    {
    case 1:
        note10 = amount/10;
        amount-= amount/10 * 10;
        cout << "you have " << note10 << " Ten rupee notes "<< endl ;
        break;
    }

    switch (amount>=1)
    {
    case 1:
        note1 = amount/1;
        amount-= amount/1 * 1;
        cout << "you have " << note1 << " One rupee notes "<< endl ;
        break;
    }
}