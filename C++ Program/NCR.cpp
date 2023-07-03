#include <iostream>
using namespace std;

int fact(int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r) {
    int num, denom;
    num = fact(n);
    denom = fact(r) * fact(n - r);
    return num / denom;
}

int main() {
    cout << "Enter the numbers: " << endl;
    int n, r;
    cin >> n >> r;
    int ans = nCr(n, r);
    cout << ans;
    return 0;
}
