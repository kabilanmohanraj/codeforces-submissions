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

void generate_all_subsequences(string s, vector<string> *result) {
    // recursive approach
    if(s.length()==1) {
        (*result).push_back(s); (*result).push_back("");
    } else {
        vector<string> temp;
        temp.push_back(s.substr(0,1)); temp.push_back("");
        generate_all_subsequences(s.substr(1), result);
        int res_size=(*result).size();
        for(int i=0;i<temp.size()-1;i++) {
            for(int j=0;j<res_size;j++) {
                (*result).push_back(temp[i]+(*result)[j]);
            }
        }
    }
}

int main() {
    string s;
    cin>>s;
    vector<string> result;

    generate_all_subsequences(s, &result);

    for(int i=0;i<result.size();i++) {
        cout<< result[i] << "\n";
    }
}