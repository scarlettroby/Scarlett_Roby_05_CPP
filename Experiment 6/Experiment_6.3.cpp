#include<iostream>
using namespace std;
class Vehicle{
	public:
		string brand,model;
};
class Car:protected Vehicle{
	public:
			string type;
		void acc(){
			cout<<"enter car brand model and type:";
			cin>>brand>>model>>type;
		}
		void disp(){
			cout<<"\nbrand:"<<brand<<"\nmodel:"<<model<<"\ntype:"<<type;
		}
};
class ECar:protected Car{
	string battery;
	public:
		void acc2(){
			cout<<"enter car brand model and type and battery capacity:";
			cin>>brand>>model>>type>>battery;
		}
		void disp2(){
			cout<<"\nbrand:"<<brand<<"\nmodel:"<<model<<"\ntype:"<<type<<"\nbattery capacity:"<<battery;
		}
};
int main(){
	Car c;
	c.acc();
	c.disp();
	ECar ec;
	ec.acc2();
	ec.disp2();
    return 0;
}
