#include <iostream>
using namespace std;

int main(){
	
	//宣告指標變數，為用new運算子動態分配記憶體，大小是5的整數陣列 
	int *arr_ptr = new int[5];

	//使用指標將陣列初始化為 {1, 2, 3, 4, 5}
	for(int i = 0; i < 5; i++ ){
		arr_ptr[i]=i+1;
	        cout << arr_ptr[i] << " ";	
	}
	
	//使用 delete[] 釋放記憶體
	delete[] arr_ptr;

}
