#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int numbers[100], evenCount = 0, oddCount = 0, evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
            evenIndex = i + 1; // +1 for 1-based indexing
        } else {
            oddCount++;
            oddIndex = i + 1;
        }
    }

    // Output the index of the number that differs in evenness
    if (evenCount == 1)
        cout << evenIndex << endl;
    else
        cout << oddIndex << endl;

    return 0;
}
