#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of first pattern"<< endl;
    cin >> n;
    for ( int i=0; i<n; i++){
        for( int j=0; j<n; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    int n2;
    cout << "Enter the number of second pattern"<< endl;
    cin >> n2;
    for ( int i=1; i<=n2; i++){
        for( int j=1; j<=n2; j++){
            cout << i << " ";
        }
        cout << endl;
    }

    int n3;
    cout << "Enter the number of third pattern"<< endl;
    cin >> n3;
    for ( int i=1; i<=n3; i++){
        for( int j=1; j<=n3; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    int n4;
    cout << "Enter the number of forth pattern"<< endl;
    cin >> n4;
    for ( int i=1; i<=n4; i++){
        for( int j=1; j<=n4; j++){
            //formula j ki value ulta print karane ke liye n-j+1 ker denge
            cout << n4-j+1 << " ";
        }
        cout << endl;
    }

    int n5;
    int count=1;
    cout << "Enter the number of fifth pattern"<< endl;
    cin >> n5;
    for ( int i=1; i<=n5; i++){
        for( int j=1; j<=n5; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    int n6;
    cout << "Enter the number of sixth pattern"<< endl;
    cin >> n6;
    for ( int i=1; i<=n6; i++){
        for( int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    int n7;
    cout << "Enter the number of seventh pattern"<< endl;
    cin >> n7;
    for ( int i=1; i<=n7; i++){
        for( int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }

    int n8;
    cout << "Enter the number of eighth pattern"<< endl;
    cin >> n8;
    for ( int i=1; i<=n8; i++){
        int count = 1;
        for( int j=1; j<=i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    int n9;
    cout << "Enter the number of nineth pattern"<< endl;
    cin >> n9;
    for ( int i=1; i<=n9; i++){
        int value=i;
        for( int j=1; j<=i; j++){
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
      
    int N;
    cout << "Enter the number of tenth pattern"<< endl;
    cin >> N;
    for ( int i=1; i<=N; i++){
        for( int j=1; j<=i; j++){
            cout << i-j+1 << " ";
        }
        cout << endl;
    }

    int N2;
    cout << "Enter the number of eleventh pattern"<< endl;
    cin >> N2;
    for ( int i=1; i<=N2; i++){
        for( int j=1; j<=N2; j++){
            char ch  = 'A'+i-1;
            cout << ch << " ";
        }
        cout << endl;
    }

    int N3;
    cout << "Enter the number of 12th pattern"<< endl;
    cin >> N3;
    for ( int i=1; i<=N3; i++){
        for( int j=1; j<=N3; j++){
            char ch  = 'A'+j-1;
            cout << ch << " ";
        }
        cout << endl;
    }

    int N4;
    char ch  = 'A';
    cout << "Enter the number of 13th pattern"<< endl;
    cin >> N4;
    for ( int i=1; i<=N4; i++){
        for( int j=1; j<=N4; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    int N5;
    cout << "Enter the number of 14th pattern"<< endl;
    cin >> N5;
    for ( int i=1; i<=N5; i++){
        for( int j=1; j<=N5; j++){
            char ch = 'A'+i+j-2;
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    int N6;
    cout << "Enter the number of 15th pattern"<< endl;
    cin >> N6;
    for ( int i=1; i<=N6; i++){
        char ch = 'A'+N6-i;
        for( int j=1; j<=i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    int N7;
    cout << "Enter the number of 16th pattern"<< endl;
    cin >> N7;
    for(int i=1; i<=N7; i++){
        int space = N7-i;
        while(space){
            cout << " ";
            space=space-1;
        }
        for (int j=1; j<=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
        
        
    }

}