#include<bits/stdc++.h>
#define ll long long
using namespace std;
int checkPallindrome(string s,ll i){
  ll n = s.length();
  if(i >= n/2){
    return 1;
  }
  if(s[i] == s[n-1-i]){
    return checkPallindrome(s,i+1);
  }
  else{
    return 0; 
  }
}
int main(){
  string s;
  cin >> s;
  if(checkPallindrome(s,0)){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
  return 0;
}