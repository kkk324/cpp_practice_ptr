#include <iostream>
using namespace std;

//定義一個函數 print，接受一個指向常數整數的指標作為參數，並輸出其指向的值

void print(int *p){
	cout << *p << endl;
}

int main(){
		
	int a = 10;
	print(&a);
	//cout << print(&a) << endl;
		
}
