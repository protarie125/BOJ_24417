#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

constexpr auto kMax = ll{1'000'000'007};

ll n;

ll fibo(ll x, ll a, ll b) {
  if (x == 1) {
    return b;
  }

  return fibo(x - 1, (a + b) % kMax, a);
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  cout << fibo(n, 1, 1) << ' ' << (n - 2) % kMax;

  return 0;
}