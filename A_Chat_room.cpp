#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string x="hello";
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==x[j]){
            j++;
        }
        if(j==x.length()){
            break;
        }}
        if(j==x.length()){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        return 0;
    }