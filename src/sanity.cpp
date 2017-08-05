#include <iostream>

using namespace std;

int main() {
    int number = 6;
    if (6 == number--) {
        cout << "expected" << endl;
    } else {
        cout << "suprise" << endl;
    }
    if (4 == --number) {
        cout << "expected" << endl;
    } else {
        cout << "suprise" << endl;
    }
}
