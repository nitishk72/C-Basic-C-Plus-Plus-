#include<iostream>
using namespace std;
struct structName{
	int a;
	double b;
	void check(){
		cout<<"I AM CPP"<<endl;
	}
};
class className{
	private:
		int a;
		double b;
	public:
		void function(){
			cout<<"I AM FUNCTION"<<endl;
		}
};
int main(){
	struct structName ss;
	ss.check();
	return 0;
}
