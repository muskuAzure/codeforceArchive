#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

void getVectorInput(vector<ll>& vectorOfBox, ll numberOfElement ) {
  ll input{};
  while(numberOfElement--) {
    cin >> input;
    vectorOfBox.push_back(input);
  }
}

int main() {  
  cin.tie(0);ios::sync_with_stdio(false);

  ll numberOfCase{};
  cin >> numberOfCase;

  while(numberOfCase--) {
    vector<ll> vectorOfBox;
    ll numberOfElement{}, numberOfMaxReverse{};
    cin >> numberOfElement >> numberOfMaxReverse;

    getVectorInput(vectorOfBox, numberOfElement);
    
    string canSort;
    if (is_sorted(vectorOfBox.begin(), vectorOfBox.end())) {
      canSort = "YES"; 
    } else {
      canSort = numberOfMaxReverse > 1 ? "YES" : "NO";
    }

    cout << canSort << '\n';

  }

  return EXIT_SUCCESS;
}