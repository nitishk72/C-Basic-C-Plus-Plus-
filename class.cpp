#include<iostream>
using namespace std;
class className{
	private:
		// ANY VARIABLE UNDER CLASS IS CALLED MEMBER VARIABLE 
		// IT DOES NOT DEPENDS UPON PUBLIC OR PRIVATE OR PROTECTED ETC
		int a;
	public:
		// ANY FUNCTION UNDER CLASS IS CALLED MEMBER FUNCTION
		// IT DOES NOT DEPENDS UPON PUBLIC OR PRIVATE OR PROTECTED ETC
		void functionName(int parameter){
			cout<<"This is parameter"<<endl;
			cout<<parameter<<endl;
		}
};
int main(){
	className objectName;
	objectName.functionName(78);
	return 0;
}
