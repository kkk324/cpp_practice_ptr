#include <iostream>
using namespace std;

//宣告一個整數 a，賦值為 10。宣告一個指向整數的指標 p，使其指向 a。
//再宣告一個指向指標的指標 pp，使其指向 p。透過 pp 修改 a 的值為 20，
//並輸出 a 的值。

int main(){
	int a = 10;
	int *p = &a;
	int **pp = &p;

        **pp = 20;
	cout << a << endl;	
}
