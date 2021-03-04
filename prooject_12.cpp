#include <iostream>
#include <string>
using namespace std;


int main()
{ 
	int* p_a = new int();
	
	cin >> *p_a;
	if (*p_a > 0) {
		cout << *p_a << endl;
	}
	else if (*p_a < 0) {
		*p_a = -(*p_a);
		cout << *p_a << endl;
	}
	delete p_a;

	p_a = 0;
	
}
