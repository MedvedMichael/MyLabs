#include <iostream>
using namespace std;
bool isInsideShape(float x, float y) {
    if (x <= 1 && x >= -1 && ((x - 1) * (x - 1) + y * y) <= 4)
        return true;
    else if (x > 1 && x <= 3 && (abs(x - 1) + abs(y)) <= 2)
        return true;

    return false;
}
int main() {
    float x = 0, y = 0;
    cout<< "Input x: ";
    cin>>x;
    cout<< "Input y: ";
    cin>>y;
    cout << "Your result is: "<<((isInsideShape(x, y))?"true":"false") << endl;
    return 0;
}