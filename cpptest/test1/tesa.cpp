#include <iostream>

using namespace std;

int countOddNumberInArray(int arr[1000], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << countOddNumberInArray(arr, n);
	return 0;
}