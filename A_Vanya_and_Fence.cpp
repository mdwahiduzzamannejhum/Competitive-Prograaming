#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int n,h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>h){
            count+=2;
        }
        else{
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}
