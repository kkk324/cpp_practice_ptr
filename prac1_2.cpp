#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int *p = &a;
	cout << "a=" << a << endl;
	*p = 20;
	cout << "a=" << a << endl;
}
