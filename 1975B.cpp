#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    for(int i=0; i<t; i++) {
        // get test case
        cin >> n;
        vector<int> a(n);
        for(int j=0; j<n; j++) {
            cin >> a[j];
        }

        // solution
        sort(a.begin(), a.end());
        int ai = a[0], aj, j;

        for(int k=1; k<n; k++) {
            if(a[k]%ai != 0) {
                j = k;
                aj = a[k];
                break;
            }
        }

        bool flag = true;
        for(int k=j+1; k<n; k++) {
            if(a[k]%ai != 0 && a[k]%a[j] != 0) {
                flag = false;
                break;
            }
        }

        if(flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
}