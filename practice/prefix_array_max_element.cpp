#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

#define ll long long

using namespace std;

int main() {
    
    int a[5] = {5,7,3,2,1};
    int p[5];

    int max_till_now = a[0];
    
    for(int i=1; i<5;i++) {
        max_till_now=max(max_till_now, a[i]);
    }

}