#include "iostream"
using namespace std;
void sort(int arr[1000], int x){
    for (int i=0;i<x;i++){
        for(int k=i+1; k<x;k++){
            if (arr[i] < arr[k]) {
                int ara=arr[i];
                arr[i]=arr[k];
                arr[k]=ara;
            }
        }
    }
}
int main() {
	int x;
	int arr[1000];
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> arr[i];
	}
	sort(arr, x);
	for (int i = 0; i < x; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}