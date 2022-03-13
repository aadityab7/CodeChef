#include<iostream>
#include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, x, y;
		cin >> m >> x >> y;

		int arr[m];
		for(int i = 0; i < m; i++){
			cin >> arr[i];
		}

		sort(arr, arr + m);

		int ans = 0;
		
		int num = x * y;
		int prev = 0;
		for(int i = 0; i < m; i++){
			if((arr[i] - num) > prev){
				ans += (arr[i] - num) - prev - 1;
			}

			prev = arr[i] + num;
		}

		if(prev < 100){
			ans += 100 - prev;
		}

		cout << ans << endl;
	}
	return 0;
}
