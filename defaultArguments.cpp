#include<iostream>
using namespace std;
class className{
	// IT IS NOT MANDATORY TO WRITE PRIVATE BUT
	// IT LOOKS SPECIFIC (MEANINGFUL)
	private:
		
	public:
		// function without default parameter
		// THIS IS NORMAL FUNCTION
		void withoutDefault(int arguments){
			cout<<"THIS IS ARGUMENTS "<<arguments<<endl;
		}
		
		// function with default parameter
		void withDefault(int arguments = 10){
			cout<<"THIS IS ARGUMENTS "<<arguments<<endl;
		}
};
int main(){
	className objectName;
	// NO ARGUMENT
	objectName.withDefault();
	// SOME ARGUMENT
	
	objectName.withDefault(20);
	// NORMAL FUNCTION
	objectName.withoutDefault(123);
	// NORMAL FUNCTION , THIS IS AN ERROR !!
	//objectName.withoutDefault();
	
	return 0;
}
