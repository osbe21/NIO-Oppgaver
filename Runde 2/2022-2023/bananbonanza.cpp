#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;

  cin >> N;

  int prevMax = 0;

  vector<int> priceB(N);
  vector<int> priceO(N);

  for (int i = 0; i < N; i++) {
    cin >> priceB[i] >> priceO[i];
  }
}