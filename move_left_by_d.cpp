#include <bits/stdc++.h>
using namespace std;
int move_left(vector<int> &v,int n,int d){
    d = d % n;
    rotate(v.begin(), v.begin() + d, v.end());
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }

}
int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int d;
    cin>>d;
    move_left(v,n,d);
    return 0;
}





// GFG SOLUTION DOWNWARDS



/*
#include <iostream>
using namespace std;

void leftRotateOne(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void leftRotate(int arr[], int n, int d) {
    for (int i = 0; i < d; i++) {
        leftRotateOne(arr, n);
    }
}

*/
