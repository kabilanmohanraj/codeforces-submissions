#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

#define ll long long

using namespace std;

int main() {
    int t;
    cin>>t;
 
    while(t--) {
        int n;
        cin>>n;
        vector<int> a;
        
        int temp;
        for(int i=0;i<n;i++) {
            cin>>temp;
            a.push_back(temp);
        }

        ll prefix_sum = 0;
        ll good_counter = 0;
        double required_sum = -1;
        map<ll,ll> elem_seen;

        for(int i=0;i<n;i++) {
            prefix_sum += a[i];
            elem_seen[a[i]] = 1;
            required_sum = -1;

            if(!(prefix_sum%2)) required_sum = prefix_sum/2.0;

            if(elem_seen[required_sum] == 1) {
                good_counter++;
            }
        }

        cout << good_counter << "\n";
    }
}