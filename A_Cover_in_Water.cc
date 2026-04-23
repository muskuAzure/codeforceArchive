#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

/*
  use getline and then string view
*/

int main(){
  cin.tie(0);ios::sync_with_stdio(0);

  ll numberOfCase{};
  char del{'#'};
  cin >> numberOfCase;
  
  while(numberOfCase--) {
    string wholeSpace;
    ll waterUse{};
    
    cin >> waterUse >> wholeSpace;
    waterUse=0;
    stringstream ss(wholeSpace);
    string waterSpace;
    while(getline(ss, waterSpace, del)) {
      if(waterSpace.size() < 3) {
        waterUse+=waterSpace.size();
      } else {
        waterUse=2;
        break;
      }
    }

    cout << waterUse << '\n';

  }

  return EXIT_SUCCESS;
}