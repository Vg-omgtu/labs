#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Vvedite koordinaty tochki x i y: ";
    cin >> x >> y;

    if (x * x + y * y >= 9 && x * x + y * y <= 64 && x <= 0 && y >= 0) {
        cout << "Tochka prinadlezhit oblasti" << endl;
    } else {
        cout << "Tochka ne prinadlezhit oblasti" << endl;
    }

    return 0;
}