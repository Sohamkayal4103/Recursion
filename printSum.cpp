#include<bits/stdc++.h>
#define ll long long
using namespace std;

void calculateSum(ll &sum,ll i,ll n){
  if(i > n){
    return;
  }
  if(i <= n){
    sum += i;
  }
  calculateSum(sum,i+1,n);
}

int main(){
  ll n;
  cin >> n;
  ll sumt = 0;
  calculateSum(sumt,0,n);
  cout << sumt << endl;
}