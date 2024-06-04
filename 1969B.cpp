#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0; i<t; i++) {
        string s;
        cin >> s;

        long long min_cost = 0;
        int j = 0, k = 1;

        // find substring to shift
        while(k<s.length()) {
            while(j<s.length()) {
                if(s[j]=='1') break;
                j++;
            }

            if(s[k]=='0' && k>j) {
                min_cost += (k-j)+1;
                char temp = s[k];

                // shift here
                s.erase(k, 1);
                s.insert(j, 1, temp);
            } else {
                k++;
            }
        }
        cout << min_cost << "\n";
    }
}