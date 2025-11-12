#include<iostream>
using namespace std;
class Account{
	public:
		int account;
	float bal ;
		void acc(){
			cout<<"enter acc no. balance:";
			cin>>account>>bal;
		}
		void disp(){
			cout<<"acc no.:"<<account<<"\nbalance:"<<bal;
		}
};
int main(){
	Account s[10];
	int i;
	for(i=0;i<10;i++){
			s[i].acc();
			if(s[i].bal>=5000){
				printf("\ninterest given :10%");
				s[i].disp();
			}
	}
return 0;
}
