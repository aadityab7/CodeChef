#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x, y;
		cin >> x >> y;

		long ans = (n / 100) * x;

		long car_gas = ceil((n % 100) / 4.0) * y;

		if(car_gas < x){
			ans += car_gas;
		}
		else{
			ans += x;
		}

		long long all_bus = ceil(n / 100.0) * x;
		long long all_car = ceil(n / 4.0) * y;

		if(all_bus < ans){
			ans = all_bus;
		}

		if(all_car < ans){
			ans = all_car;
		}

		
		cout << ans << "\n";

	}
	return 0;
}