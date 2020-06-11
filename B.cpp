#include <iostream>
using namespace std;

class B{
	private:
		int B1;
		float B2;
	public:
		int getB1() { return B1; }
		float getB2() { return B2; }
		void setB1(int n){ B1 = n; }
		void setB2(float n){ B2 = n; }
		
		void MB1(){ cout << "MB1" << endl; }
		void MB2(){ cout << "MB2" << endl; }
		void MB3(){ cout << "MB3" << endl; }
			
};
