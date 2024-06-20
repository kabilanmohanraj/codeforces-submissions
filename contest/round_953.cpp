#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <bitset>
#include <unordered_set>
#include <iomanip>

#define ll long long

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int a[n];

        int temp;
        for(int i=0;i<n;i++) {
            cin>>temp;
            a[i]=temp;
        }

        int max1=a[n-1];
        int max2_idx=distance(a, max_element(a,a+n));
        int max2=a[max2_idx];

        // cout << n << " " << max2_idx <<"\n";
        if(n-1==max2_idx) {
            max2=*max_element(a,a+n-1);
        }

        cout << (ll)(max1+max2) << "\n";
        
    }
}
