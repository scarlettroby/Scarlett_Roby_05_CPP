#include<iostream>
using namespace std;
template<class T> T sum(T arr[], int no)
{
    int i;
    T s=0;
    for(i=0;i<no;i++)
    {
        s=s+arr[i];
    }
    return s;
}
int main()
{
    int b=5; 
    int a[]={1,2,3,4,5};
    cout<<"sum= "<<sum(a,b);
    return 0;
}