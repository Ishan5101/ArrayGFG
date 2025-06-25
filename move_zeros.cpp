#include <bits/stdc++.h>
#include <algorithm>

#include <vector>
using namespace std;

int zeros_check(vector<int> &v, int n) {
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            for (int j = i + 1; j < n; j++) {
                if (v[j] != 0) {
                    swap(v[i], v[j]);
                    
                }
            }
        }
    }

    for(int k=0;k<n;k++){
        cout<<v[k]<<" ";
    }
    return 0;
}

int main() {
    int n;
    cin>>n;

    vector<int >v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];

    }

  zeros_check(v,n);
    return 0;
}
