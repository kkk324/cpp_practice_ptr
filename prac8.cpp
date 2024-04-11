#include <iostream>
using namespace std;


// 定義一個函數 increment，接受一個整數指標作為參數，
// 並將其指向的值增加 1


void increment(int *p){
	*p = *p + 1;
	//(*p)++;
}

int main(){
	int a = 10;
	increment(&a);
	cout << a << endl;
}
