#include <iostream>
using namespace std;

int main() {
	
	int a = 10;
	int *p = &a;
	*p = 20;
	cout << "a=" << a <<endl;

}
