#include <iostream>
using namespace std;
int main()
{
    int a; cin >> a;
    int b; cin >> b;
    if (a <= 0 || b <=0) {
        cout << "Error: number(s) is(are) not natural";
    }
    else {
        int t = 0;
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                t += 1;
            }
        }
        int l = 0;
        for (int i = 2; i < b; i++) {
            if (b % i == 0) {
                l += 1;
            }
        }
        if (l == 0 && t == 0 && abs(a - b) == 2) {
            cout << a << " , " << b << " is twin numbers";
        }
        else {
            cout << a << " , " << b << " is not twin numbers";
        }
    }
    return 0;
}

