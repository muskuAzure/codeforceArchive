#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

int main() {
  cin.tie(0);ios::sync_with_stdio(0);

  ll numberOfTestcase{};
  cin >> numberOfTestcase;

  while(numberOfTestcase--) {
    ll n{};
    ll t,h,u;
    cin >> t >> h >> u;

    ll n4=min(t,u);
    t-=n4;
    u-=n4;
    n+=4*n4;
    
    // 2 t 1 h
    ll n7=min(t/2,h);
    t-=n7*2;
    h-=n7;
    n+=n7*7;

    // 1t 1h
    ll n5=min(t,h);
    t-=n5;
    h-=n5;
    n+=5*n5;
    
    // t
    n5= t > 0 ? 3 : 0;
    ll remainT = t - 1 > 0 ? t -1 : 0;
    n+=n5+(remainT*2);

    n+=3*(h+u);
    
    cout << n <<'\n';
  }

  return EXIT_SUCCESS;
}