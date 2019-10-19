#include <iostream>
using namespace std;

float returnElementN(float a, float d, int n) {
    for (int i = 1; i < n; i++)
        a += d;
    return a;
}

int main() {
    float a = 0, d = 0;
    int n = 0;
    try {
        cout << "This program performs n-element of: a, a+d, ... a+(n-1)d" << endl;
        cout << "Enter a: ";
        cin >> a;
        if(a==0) throw -1;
        cout << "Enter d: ";
        cin >> d;
        if(d==0) throw -1;
        cout << "Enter n: ";
        cin >> n;
        if(n<1) throw -1;
        cout << "Your result is: " << returnElementN(a, d, n) << endl;
    }
    catch (int ex) { cout << "Exception caught!"; }

    return 0;
}