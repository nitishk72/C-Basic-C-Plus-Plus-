#include<iostream>
using namespace std;
class className{
	public:
		static int varStatic;
		void increment(){
			varStatic = varStatic + 1;
			cout<<"Static "<<varStatic<<endl;
		}
};
// 
/* */
int className::varStatic;
int main(){
	className ob1;
	ob1.increment();
	ob1.increment();
	return 5;
}
