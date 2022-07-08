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


		int i = 0;

		int ans = 0;

		while(i < n){
			//students scoring less than me = i
			//students scoring equal to me

			int curr = i;
			int j = i;
			int eq = 0;
			while(j < n && arr[i] == arr[j]){
				eq++;
				j++;
			} 

			curr += eq;
			if(curr > (n - curr)){
				ans += eq;
			}

			i = i + eq;
		}

		cout << ans << "\n";

	}
	return 0;
}