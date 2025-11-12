#include <iostream>
using namespace std;
template <class T1,class T2> class Calc{
    T1 a;
    T2 b;
public:
    Calc(T1 x,T2 y){
        a=x;
        b=y;
    }
    void func(){
        cout<<"add,sub,mult,div,exit:";
        int ch;
        while(1){
            cout<<"\nenter your choice:";
            cin>>ch;
            switch(ch){
                case 1:cout<<"\nsum:"<<a+b;
                break;
                case 2:cout<<"\ndiff:"<<a-b;
                break;
                case 3:cout<<"\nmul:"<<a*b;
                break;
                case 4:cout<<"\ndiv:"<<a/b;
                break;
                case 5:
                return;
                default:cout<<"\nwrong choice";
            }
        }
    }
};

int main() {
    Calc<int,int> c1(2,3);
    c1.func();
    Calc<int,float> c2(2,4.3);
    c2.func();
    Calc<float,float> c3(2.1,3.4);
    c3.func();
    return 0;
}

