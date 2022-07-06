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

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		long long defense_points = 0, attack_points = 0;
		
		// for(int i = 0; i < n; i++){
		// 	if(i % 2 == 0){
		// 		defense_points += (1000 - arr[i]);
		// 	}
		// 	else{
		// 		attack_points += arr[i];
		// 	}
		// }

		int i = 1;
		defense_points += (1000 - arr[0]);
		while((i < n - 1) && (arr[i] <= (1000 - arr[i]))){
			defense_points += (1000 - arr[i]);
			i++;
		}

		while(i < n){
			attack_points += arr[i];
			i++;
		}

		long long ans = attack_points * defense_points;

		cout << ans << "\n";
	}
	return 0;
}