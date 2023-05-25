#include<iostream>

using namespace std;

int main() {
    int n, k;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    int m = 0;
    for (int i=0; i<n; i++){
        if (arr[i]==k){
            m+=1;
        }
    }
    cout<<m;
    
    return 0;
}