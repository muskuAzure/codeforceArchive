#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll numberOfCase{};
  cin >> numberOfCase;

  while(numberOfCase--) {

    ll numberOFGasStation{}, maxLength{}, gasNeed{}, lastStop{}, nextStop{};
    cin >> numberOFGasStation >> maxLength;

    while(numberOFGasStation--) {
      cin >> nextStop;
      gasNeed = gasNeed < nextStop-lastStop ? nextStop-lastStop : gasNeed;
      lastStop=nextStop;
    }
    gasNeed = gasNeed < (maxLength - lastStop)*2 ? (maxLength - lastStop)*2 : gasNeed;

    cout << gasNeed << '\n';

  }

  return EXIT_SUCCESS;
}
