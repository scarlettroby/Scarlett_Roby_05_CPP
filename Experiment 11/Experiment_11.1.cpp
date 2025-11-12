#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

int main() {
    vector<int> v(5);

    cout << "enter the numbers: ";
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    cout << "\nchanged values: ";
    for (int i = 0; i < v.size(); i++) {
        v[i] = 2 * v[i];
        cout << v[i] << " ";
    }
    return 0;
}

