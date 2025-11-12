#include<iostream>
using namespace std;
template<class T> T square(T a)
{
    T s = a*a;
    return s;
}
template<> string square <string> (string a)
{
    return (a+a);
}
int main()
{
    int x=5; 
    string y="abc";
    cout<<"square= "<<square(x);
    cout<<"\nsquare= "<<square(y);
    return 0;  
}