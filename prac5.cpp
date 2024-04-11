
#include <iostream>
using namespace std;

	
int main(){
        
	//指標與多維陣列
	//使用指標遍歷並輸出一個 2x3 的二維整數陣列
	int arr[2][3] = {{1,2,3},{4,5,6}};
	
	for(int i = 0; i < 2; i++){
		for(int j =0;j < 3;j++){
			//cout << *(&arr[i]+j) << " ";
			cout << *(*(arr + i) + j) << " ";
			// *(arr + i) 是解引用取值，值是指標，指向第i行的首元素
		}
	}	
}
      
