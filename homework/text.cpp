#include<iostream>
using namespace std;
inline void func(int num);
int main(){
	func(1);
	return 0;
}
inline void func(int mun){
	cout<<"void func(int num)"<<endl;
	cout<<func<<endl;
}
