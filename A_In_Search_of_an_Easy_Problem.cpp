#include<iostream>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    optimize;
   int n;
   cin>>n;
   int x[n];
   int flag=0;
   for(int i=0;i<n;i++){
       cin>>x[i];}

       for(int i=0;i<n;i++){
        if(x[i]==1){
            flag=1;
            break;}
        }
        if(flag==1){
            cout<<"HARD";
        }else{
            cout<<"EASY";
        }
        
    return 0;
}