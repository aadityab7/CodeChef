#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int evp = n / 2;
		int odp = n - evp;
		int o = 0, e = 0;
		long num;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num % 2 == 0){
				e++;
			}
			else{
				o++;
			}
		}

		int x = min(o, evp), y = min(e, odp);
// 		if(e > odp){
// 			x = odp;
// 		}
// 		else{
// 			x = e;
// 		}

// 		if(o > evp){
// 			y = evp;
// 		}
// 		else{
// 			y = o;
// 		}

		cout << x + y << endl;
	}
	return 0;
}