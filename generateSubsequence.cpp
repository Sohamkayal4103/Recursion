#include <bits/stdc++.h>
#define ll long long
using namespace std;

void generateSubsequence(vector<ll>&ans,vector<vector<ll>>&fans,ll i,ll n,vector<ll>arr){
  fans.push_back(ans);
  while(i < n){
    ans.push_back(arr[i]);
    generateSubsequence(ans,fans,i+1,n,arr);
    ans.pop_back();
    i++;
  }
}

int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
      cin >> arr[i];
    }
    vector<vector<ll>>fans;
    vector<ll>ans;
    generateSubsequence(ans,fans,0,n,arr);
    for(ll i = 0;i < fans.size();i++){
      for(ll j=0;j<fans[i].size();j++){
        cout << fans[i][j] << " ";
      }
      cout << endl;
    }
  }
}