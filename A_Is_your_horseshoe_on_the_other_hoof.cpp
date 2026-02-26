#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int shoes[4];
    for(int i=0;i<4;i++){
        cin>>shoes[i];
    }
    sort(shoes,shoes+4);
    int count=0;    
    for(int i=0;i<3;i++){
        if(shoes[i]==shoes[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}