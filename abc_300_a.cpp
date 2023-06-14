#include<bits/stdc++.h>

using namespace std;
int main(){
  int n,a,b;
  cin >> n >> a >> b;
  vector<int> c(n);
  for(auto &nx : c){cin >> nx;}
  int ans;
  for(int i=0;i<n;i++){
    if(a+b == c[i]){ans=i+1;break;}
  }
  cout << ans << "\n";
  return 0;
}