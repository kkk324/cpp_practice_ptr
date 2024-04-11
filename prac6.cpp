#include <iostream>
using namespace std;

int main(){
	//宣告一個字串 "Hello"，使用指標將其每個字符輸出
	
	char str[] = "Hello";
	char *p    = str;

        while(*p != '\0'){
	 	cout << *p << " ";
	        p++;	
	}	
}
