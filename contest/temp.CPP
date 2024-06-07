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
        int last = 0;
        while(m--) {
            cin >> temp;
            if(d.find(temp) == d.end()) d[temp] = 0;
            d[temp] += 1;
            last = temp;
        }
        
        bool exit_flag = false;
        bool check = false;
        for(int i=0; i<n; i++) {
            if(a[i] != b[i]) {
                d[b[i]] -= 1;
                if(d[b[i]] < 0) {
                    exit_flag = true;
                    break;
                } 
                a[i] = b[i];
                if(b[i] == temp){
                    check = true;
                }
            }
        }

        if(exit_flag) {
            cout << "NO" << "\n";
            continue;
        }

        if(check){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
        
    }
 
}