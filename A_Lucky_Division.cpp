#include <iostream>
using namespace std;

int main() {
  int n;
    cin >> n;
            if(n%4==0 || n%7==0)
            {
                cout<<"YES"<<endl;
            }

            else{
                while(n>0){
                int digit=n%10;
                n=n/10;
                if(digit==4 || digit==7)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO";
                }
                    
            }
        }
    return 0;
}
