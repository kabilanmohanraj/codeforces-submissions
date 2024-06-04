#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0; i<t; i++) {
        int n;
        cin >> n;

        int a[n-1];
        for(int j=0; j<n-1; j++) {
            cin >> a[j];
        }

        int b[n];
        b[0] = a[0]+1;
        for(int j=1; j<n; j++) {

            b[j] = (a[j]/b[j-1]+1)*b[j-1] + a[j-1];

            // b[j] = b[j-1]+a[j-1];
            // while(b[j] <= a[j]) {
            //     b[j] += b[j-1];
            // }
        }

        for(int j=0; j<n; j++) {
            cout << b[j] << " ";
        }
        cout << "\n";
    }
}