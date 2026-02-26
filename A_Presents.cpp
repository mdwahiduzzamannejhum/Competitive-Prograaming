#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p[101];     
    int giver[101]; 

    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }

    
    for (int i = 1; i <= n; ++i) {
        giver[p[i]] = i; 
    }

    for (int i = 1; i <= n; ++i) {
        cout << giver[i] << " ";
    }

    return 0;
}
