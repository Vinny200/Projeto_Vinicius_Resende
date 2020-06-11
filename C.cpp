#include <iostream>
using namespace std;

class C{
	private:
		string C1;
		int C2;
		
	public:
		string getC1() { return C1; }
		int getC2() { return C2; }
		void setC1(string n) { C1 = n; }
		void setC2(int n) { C2 = n; }
		
		void MC1() { cout << "MC1" << endl; }
		void MC2() { cout << "MC2" << endl; }
};
