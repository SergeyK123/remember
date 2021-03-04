#include <iostream>
#include <string>
using namespace std;

int* foo() {
	int* p_a = new int();
	cin >> *p_a;
	if (*p_a > 0) {
		cout << *p_a << endl;
	}
	else if (*p_a < 0) {
		*p_a = -(*p_a);
		cout << *p_a << endl;
	}
	return p_a;
}

int main()
{ 
	int* p_a = 0;
	
	
	p_a = foo();

	delete p_a;

	p_a = 0;
	
}
