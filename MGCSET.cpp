#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

long long powers[32];

void create_powers(){
	powers[0] = 1;

	for(int i = 1; i < 32; i++){
		powers[i] = 2 * powers[i - 1];
	}
}

int main(){

	create_powers();

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m;
		cin >> m;

		int num, count = 0;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num % m == 0){
				count++;
			}
		}

		long long ans = powers[count] - 1;

		cout << ans << "\n";
	}
	return 0;
}