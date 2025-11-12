#include <iostream>
#include <queue>
#include <ctype.h>
using namespace std;

int main() {
    queue<int> v;
    v.push(11);
    v.push(22);
    v.push(33);
    v.push(44);
    v.push(55);

    if (v.empty()) {
        cout << "\nqueue is empty";
    }
    else {
        cout << "\nqueue is not empty";
    }

    cout << "\nsize: " << v.size();
    cout << "\nfront: " << v.front();
    cout << "\nback: " << v.back();
    return 0;
}
