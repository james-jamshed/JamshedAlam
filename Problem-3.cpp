#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int effectiveCount = (a % 2 == 0) ? a - 1 : a;

    for (int i = 0; i < effectiveCount; i++) {
        cout << 2 * i + 1;
        if (i < effectiveCount - 1) cout << ", ";
    }

    cout << endl;
    return 0;
}
