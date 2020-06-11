#include <iostream>
using namespace std;

class D{
	private:
		int D1;
		float D2;
	public:
		int getD1(){ return D1; }
		float getD2() { return D2; }
		void setD1(int n) { D1 = n; }
		void setD2(float n) { D2 = n; }
	
		void MD1() { cout << "MD1" << endl; }
		void MD2() { cout << "MD2" << endl; }
		void MD3() { cout << "MD3" << endl; }
};
