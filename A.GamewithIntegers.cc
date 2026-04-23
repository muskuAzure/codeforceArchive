#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

int main(){
  ios::sync_with_stdio(0); cin.tie(0); 

  ll numberOfTestCase;
  cin >> numberOfTestCase;

  while(numberOfTestCase--) {
    ll startNumber;
    cin >> startNumber;
    if(startNumber % 3) {
      cout << "First\n";
    } else {
      cout << "Second\n";
    }
  }

  return EXIT_SUCCESS;
}