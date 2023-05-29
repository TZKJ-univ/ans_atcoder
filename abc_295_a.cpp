/**
  *  programmer:  Zama
*    created: 25.05.2023 16:28:36
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> W(N);
  for (int i =0; i < N; i++) cin >> W[i];

  string word[5] = {"and", "not", "that", "the", "you"};

  for (auto& x:W) {
    if (find(word, word+5, x) != word+5) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}