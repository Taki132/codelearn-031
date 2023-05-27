#include "iostream"
using namespace std;
void lowercase(string s){
    for (int i=0; i<=s.size(); i++){
        if (s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
        }
    }
    cout<<s<<endl;
}
int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    lowercase(s1);
    lowercase(s2);
    lowercase(s3);
    return 0;
    }
