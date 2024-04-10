#include <iostream>
using namespace std;


void swap(int *a, int *b){

	int *tmp = a;
	a = b;
	b = tmp;
	cout << "a=" << *a << ", b=" << *b << endl;
}


int main(){
	int a, b;
        a = 10;
	b = 20;
	swap(&a,&b);
	return 0;
}
