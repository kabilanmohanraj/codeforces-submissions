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
        int a,b,c,d;
        cin >>a>>b>>c>>d;

        if(a>b) swap(a,b);
        if(c>d) swap(c,d);

        // range overlap of {a,b} and {c,d}
        if((a<c && d<b) || (a>c && d>b) || (b<c || a>d)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
 
}