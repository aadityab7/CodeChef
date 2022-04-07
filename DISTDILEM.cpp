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

		long num;
		long long sum = 0;
		for(int i = 0; i < n; i++){
			cin >> num;
			sum += num;
		}

		long nu = 0;
		long long x = (nu * nu + nu) / 2;
		while(x <= sum){
			nu++;
			x = (nu * nu + nu) / 2;
		}

		cout << nu - 1 << endl;

	}
	return 0;
}