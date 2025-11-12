#include <iostream>
#include <stack>
#include <ctype.h>
using namespace std;

int main() {
    stack<int> v;
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);
    v.push(5);

    if (v.empty()) {
        cout << "\nstack is empty";
    }
    else {
        cout << "\nstack is not empty";
    }

    cout << "\nsize: " << v.size();
    cout << "\ntopmost: " << v.top();

    cout << "\nstack: ";
    while (!v.empty()) {
        cout << v.top() << " ";
        v.pop();
    }

    cout << "\nsize (after popping): " << v.size();
    return 0;
}
