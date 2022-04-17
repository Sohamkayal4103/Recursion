#include<bits/stdc++.h>
#define ll long long
using namespace std;

void reverseArray(vector<ll>&arr,ll i){
  ll n = arr.size();
  if(i >= n/2){
    return;
  }
  ll temp = arr[i];
  arr[i] = arr[n-1-i];
  arr[n-1-i] = temp;
  reverseArray(arr,i+1);
}

int main(){
  ll n;
  cin >> n;
  vector<ll>arr(n);
  for(ll i = 0;i < n;i++){
    cin >> arr[i];
  }
  reverseArray(arr,0);
  for(auto it : arr){
    cout << it << " ";
  }
  cout << endl;
  return 0;
}