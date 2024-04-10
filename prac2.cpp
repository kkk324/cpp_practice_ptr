#include <iostream>
using namespace std;

int main() {
	int arr[5] = {10,2,30,4,50};
	int *p = &arr[0];
	for(int i =0;i<5;i++){
		//*p = arr[i];
		cout << "i=" << *(p+i) << endl;
	}
}
