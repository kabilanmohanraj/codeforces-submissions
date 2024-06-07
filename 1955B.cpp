#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, c, d;
        cin >> n >> c >> d;

        int n_squared = n*n, temp, a11=1e9+7;
        map<int, int> ps;
        while(n_squared--) {
            cin >> temp;
            if(temp < a11) a11 = temp; // find min element in the input stream
            if(ps.find(temp) == ps.end()) ps[temp] = 0;
            ps[temp] += 1;
        }

        // check if the map is empty after generating all the values in the matrix
        int temp_prev = a11;
        int temp_next = a11;
        bool exit_flag = false;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(ps.find(temp_next) == ps.end()) {
                    // key not found
                    exit_flag = true;
                }
                else {
                    // key found but value is less than 0
                    ps[temp_next] -= 1;

                    if(ps[temp_next] < 0) {
                        exit_flag = true;
                    }
                }
                // cout << temp_next << " ";
                temp_next += d;
            }
            // cout << "\n";
            if(exit_flag) {
                cout << "NO\n";
                break;
            }

            temp_next = temp_prev+c;
            temp_prev = temp_next;
        }

        if(!exit_flag) {
            cout << "YES\n";
        }
       
    }
}