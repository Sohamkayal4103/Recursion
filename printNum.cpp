#include<bits/stdc++.h>
#define ll long long
using namespace std;

void printNum(ll count,ll i){
  if(count == 0){
    return;
  }
  cout<< count << endl;
  count--;
  i++;
  printNum(count,i);
}
int main(){
  ll n;
  cin >> n;
  printNum(n,1);
  return 0;
}