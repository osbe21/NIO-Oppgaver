#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, K;

	cin >> N >> K;

	vector<int> hus(N, 0);

	for (int i = 0; i < K; i++) {
		int a, b;

		cin >> a >> b;

		hus[a]++;

		if (b < hus.size()-1) hus[b + 1]++;
	}

	int state = 0;
	int sum = 0;
	for (int i = 0; i < hus.size(); i++) {
		state += hus[i];

		if (state % 2 == 0)
			sum++;
	}

	cout << sum;
}