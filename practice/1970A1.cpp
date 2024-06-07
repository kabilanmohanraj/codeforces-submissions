#include <iostream>
// #include <vector>
#include <algorithm>
#include <array>

using namespace std;

// the comparator will carry the condition I want to be true
// If the comparator gives false, it is time to flip the elements
bool cmp(array<int, 2> a, array<int, 2> b) {
    if(a[0] != b[0]) {
        return a[0] < b[0];
    }
    return a[1] > b[1];
}

int main() {
    string s;
    cin >> s;

    int n = s.length();
    array<int, 2> a[n];

    int balance = 0;

    for(int i=0; i<n; i++) {
        a[i][0] = balance;
        a[i][1] = i+1;

        if(s[i] == '(') {
            balance++;
        } else {
            balance--;
        }
    }

    sort(a, a+n, cmp);

    for(int i=0;i <n; i++) {
        cout << s[a[i][1]-1];
    }

}