#include <iostream>
using namespace std;

void swap(int a, int b){
	int *tmp = &b;
	b = a;
	a = *tmp;
}

int main() {
	int a = 10;
	int b = 20;
	cout << "a=" << a << ",b=" << b << endl;
	swap(a,b);
	cout << "a=" << a << ",b=" << b << endl; 
}
