#include <bits/stdc++.h>
using namespace std;
int leader(vector<int> &v,int n){
        int flag=0;
        
    for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1]){
            flag=1;
            break;
        }
    }
   if(flag==1) cout<<v[n-1]<<" ";

 for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            flag=0;
            break;
        }
    }
  if(flag==0)  {
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
  }
  int temp=v[n-1];
  cout<<temp<<" ";

  for (int i = n - 2; i >= 0; i--) {
    if (v[i] >= temp) {
       temp = v[i];
        cout << v[i] << " ";
    }
}
}
int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
   leader(v,n);
    return 0;
}
