#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int t;
    cin>>t;
 
    while(t--) {
        int n,m;
        cin>> n;
 
        vector<int> a, b;
        int temp;
        for(int i=0; i<n;i++) {
            cin >> temp;
            a.push_back(temp);
        }
        for(int i=0; i<n;i++) {
            cin >> temp;
            b.push_back(temp);
        }

        cin >> m;
        map<int, int> d;
        while(m--) {
            cin >> temp;
            d[temp] += 1;
        }
        
        bool exit_flag = false;
        bool last_element_flag = false;
        for(int i=0; i<n; i++) {
            if(a[i] != b[i]) {
                d[b[i]] -= 1;
                if(d[b[i]] < 0) {
                    exit_flag = true;
                    break;
                } 
            }
            if(b[i] == temp) { //last_element_flag || 
                last_element_flag = true;
            }
        }

        if(exit_flag) {
            cout << "NO" << "\n";
            continue;
        }

        if(!last_element_flag) {
            // key not found
            cout << "NO" << "\n";
        } else {
            // key found
            cout << "YES" << "\n";
        }
        
    }
 
}