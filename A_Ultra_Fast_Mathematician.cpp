#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]==1){
            cout<<0;
        }else{
            cout<<1;
        }
    }
    return 0;
}