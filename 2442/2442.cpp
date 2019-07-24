#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int cost = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2*N; j++) {
			cost = N - j - i;
			if (cost > 1) {
				cout << " ";
			}
			else if(cost > -2 * i) {
				cout << "*";
			}
			else {
				break;
			}
		}

		if (i != N - 1) {
			cout << endl;
		}
	}

	return 0;
}