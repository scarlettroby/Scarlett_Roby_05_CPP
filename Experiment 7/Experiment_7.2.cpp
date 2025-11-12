#include<iostream>
 using namespace std;
 class Sum{
 	public:
 		void func1(float a[],int size){
 			float sum=0;
 		for(int i=0;i<size;i++){
 			sum=sum+a[i];
		 }
		 cout<<"sum:"<<sum;
		 }
		 void func2(int b[],int size){
 			int sum=0;
 		for(int j=0;j<size;j++){
 			sum=sum+b[j];
		 }
		 cout<<"\nsum:"<<sum;
		 }
 };
 int main(){
 	Sum s;
 	float a[]={1.2,3.4,5.6,7.8,9.0};
 	int b[]={1,2,3,4,5,6,7,8,9,10};
 	s.func1(a,5);
 	s.func2(b,10);
    return 0;
 }