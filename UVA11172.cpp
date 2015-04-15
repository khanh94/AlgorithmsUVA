#include <iostream>

using namespace std;

int main(){
	long long int a, b;
	int t;
	cin >> t;
	while (t--){
		cin >> a >> b;
		if (a < b){
			cout << " < " << endl;
		}
		else if (a > b){
			cout << " > " << endl;
		}
		else{
			cout << " = " << endl;
		}
	}
}