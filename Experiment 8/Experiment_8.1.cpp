#include<iostream>
#include<string>
using namespace std;
class A{
		string str1,str2;
	public:
		
			void acc(string s1,string s2){
				str1=s1;
				str2=s2;
			}
		void operator +(){
			string con = str1+str2;
		cout<<"concatanated:"<<con;
		}
};
int main(){
	A s;
	s.acc("haha","hahaaha");
	+s;
    return 0;
}
