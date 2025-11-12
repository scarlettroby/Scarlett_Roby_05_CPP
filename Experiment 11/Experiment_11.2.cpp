#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    int index = 2;
    int newValue = 10;

    vector<int>::iterator it = v.begin();
    it = it + index;
    *it = newValue;

    int scalar = 3;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        *it = *it * scalar;
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
