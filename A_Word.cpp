#include<iostream>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    optimize;
    string s;
    cin>>s;
    int count=0;
    int n=s.size();

    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            count++;
        }
}
if(count>n/2){
    for(int i=0;i<n;i++){
        s[i]=toupper(s[i]);
    }
    cout<<s;
    return 0;
}
else{
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
    }
    cout<<s;
}
    return 0;
}