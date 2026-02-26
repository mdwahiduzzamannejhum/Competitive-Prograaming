#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n, k;
        cin >> n >> k;  // Length of the string and maximum number of operations
        string s;
        cin >> s;  // The input string
        
        int swaps_used = 0;
        bool possible = true;

        // Try to make the string universal by performing swaps
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] != s[n - i - 1]) {
                swaps_used++;
                if (swaps_used > k) {
                    possible = false;
                    break;
                }
            }
        }

        // If we used more swaps than allowed or the string can't be made universal
        if (swaps_used <= k && possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}