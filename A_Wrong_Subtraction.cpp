#include<iostream>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    optimize;
    int operation;
    string value;
    cin>>value>>operation;
 while(operation--){
    if(value.back()!='0'){
        value.back()--;
    }else{
        value.pop_back();
         
 }
   
}
    cout<<value;
    return 0;
}