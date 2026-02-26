
#include<iostream>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    optimize;
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}