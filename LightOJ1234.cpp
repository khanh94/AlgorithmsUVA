/*#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int T;
	double n;
	cin >> T;
	int k = T;
	while (T--){
		cin >> n;
		double ans = 0.0;
		for(double i = 1; i <= n; i++){
			ans += 1/i;
		}
		printf("Case ");
		printf("%d", k - T);
		printf(": ");
		printf("%.8f\n", ans);
		
	}
	return 0;
}
*/

#include <cstdio>

using namespace std;

#define MS 100000

int main(){
	freopen("input.txt", "r", stdin);
	int test, cs = 1;
	int n;
	double h[MS+1];
	scanf("%d", &test);
	h[0] = 0.0;
	double nh = 1.0;
	int ind = 1000;
	for(int i = 2; i <= 100000000; i++){
		nh += 1.0/i;
		if(i == ind){
			h[ind/1000] = nh;
			ind += 1000;
		}
	}

	while(test--){
		scanf("%d", &n);
		nh = h[n/1000];
		for(int i = (n/1000) * 1000 + 1; i <= n; i++)
			nh += 1.0/i;
		printf("Case %d: %.10lf\n", cs++, nh);
	}
	return 0;
}