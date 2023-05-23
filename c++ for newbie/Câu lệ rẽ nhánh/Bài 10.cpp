#include<iostream>

using namespace std;

int main() {
	int a, b;
	char c;
	cin >> a >> c >> b;
/*cấu trúc case điển hình (gần với if)*/
	switch (c)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    
    default:
        cout<<"no solution";
        break;
    }
	return 0;
}
