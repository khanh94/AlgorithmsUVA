#include <iostream>
#include <vector>

using namespace std;

int main(){
	int T, a, b, c;
	vector<int> numbers(3);
	cin >> T;
	int k = T;
	while (T--){
		for(int i = 0; i < 3; i++)
			cin >> numbers[i];
		sort(numbers.begin(), numbers.end());
		cout << "Case " << k - T << ": " << numbers[1] << endl;
	}
}