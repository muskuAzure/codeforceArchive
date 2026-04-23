#include "bits/stdc++.h"

typedef long long ll;

using namespace std;

int main(){
  
  ios::sync_with_stdio(0);cin.tie(0);

  ll numberOfTestCase;
  cin >> numberOfTestCase;
  
  while(numberOfTestCase--){
    string status{"NO"};
    ll x, y, z;
    cin >> x >> y;

    z=x;

    while(z < y){
      z+=x;
      if( (!(z%x)) && y%z ) {
        status="YES";
        break;
      } 
    }

    cout << status << '\n';

  }

  return EXIT_SUCCESS;
}
