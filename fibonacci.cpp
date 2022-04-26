#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> findNum(ll i,vector<ll>&arr){
  ll n = arr.size();
  if(i == n){
    return arr; 
  }
  arr[i] = arr[i-1] + arr[i-2];
  return findNum(i+1,arr);
}

int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    if(n == 1){
      cout << 1 << endl;
      continue;
    }
    vector<ll>arr(n);
    arr[0] = arr[1] = 1;
    findNum(2,arr);
    for(auto it : arr){
      cout << it << " ";
    }
    cout << endl;
  }
}