#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

int main() {
  cin.tie(0);ios::sync_with_stdio(0);

  ll numberOfTestcase{};
  cin >> numberOfTestcase;

  while(numberOfTestcase--) {
    ll courseNumber, kLevel;
    cin >> courseNumber >> kLevel;

    vector<ll> capOfeachLevel;
    vector<pair<ll,ll>> courseWishScore;

    for(ll i{}; i < kLevel;i++) {
      ll token;
      cin >> token;
      capOfeachLevel.push_back(token);
    }

    for(ll i{}; i < courseNumber;i++) {
      ll tokenFragment;
      cin >> tokenFragment;
      pair<ll,ll> token{i+1,tokenFragment};
      courseWishScore.push_back(token);
    }

    sort(courseWishScore.begin(), courseWishScore.end(), [](const pair<ll,ll>& a, const pair<ll,ll>& b){ return a.second > b.second;});

    ll maxOperation{1000};

    vector<pair<ll,ll>> courseUpdateIndex;
    for(auto& courseScore : courseWishScore) {
      ll incrementNeed = kLevel+1-courseScore.second;
      maxOperation-=incrementNeed;
      pair<ll,ll> token{courseScore.first, incrementNeed};

      courseUpdateIndex.push_back(token);
    }

    if(maxOperation < 0) {
      cout << -1 << '\n';
      continue;
    } 

    cout << 1000-maxOperation << '\n';
    for ( auto& courseIndex : courseUpdateIndex) {
      for (int i{}; i < courseIndex.second; i++) cout << courseIndex.first << ' '; 
    }
    cout <<'\n';

  }

  return EXIT_SUCCESS;
}