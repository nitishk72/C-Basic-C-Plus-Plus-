#include<iostream>
using namespace std;
// This is function overloading because its is defined more than 
// once with same name(fun).
class className{
	private:
		
	public:
		// functon with two arguments  (int, int)
		void fun(int a, int b){
			int area = a*b;
			cout<<"AREA OF RECTANGLE [int]: "<<area<<endl;
		}
		// functon with two arguments  (double, double) but
		// name of function remains same i.e fun
		void fun(double a, double b){
			double area = a*b;
			cout<<"AREA OF RECTANGLE [double]: "<<area<<endl;
		}
		// functon with two arguments  (int, double) but
		// name of function remains same i.e fun
		void fun(int a, double b){
			double area = a*b;
			cout<<"AREA OF RECTANGLE [MIXED]: "<<area<<endl;
		}
		// functon with three arguments  (int, int, int) but 
		// name of function remains same i.e  fun
		void fun(int a, int b, int c){
			int vol = a*b*c;
			cout<<"VOLUME OF CUBOID : "<<vol<<endl;
		}
};
int main(){
	className objectName;
	// calling function fun (int , int)
	objectName.fun(5,6);
	// calling function fun (double , double)
	objectName.fun(5.0,6.0);
	// calling function fun (int , double)
	objectName.fun(5,6.0);
	// calling function fun (int , int, int)
	objectName.fun(10,20,30);
	return 0;	
}
