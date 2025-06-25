#include <bits/stdc++.h>
using namespace std;
int move_left(vector<int> &v,int n){
  
    rotate(v.begin(), v.begin() + 1, v.end());
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
    move_left(v,n);
    return 0;
}



// gfg solution  



// new basic is store the first element 
// shift array [i-1] and array[i] 
// then last element array[n-1]== temp
