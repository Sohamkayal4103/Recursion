#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(ll n){
  if(n == 0){
    return 1;
  }
  return n * fact(n-1);
}
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    cout << fact(n) << endl;
  }
  return 0;
}