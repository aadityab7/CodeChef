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

		//locate 1 and n

		//int arr[n];
		int one_pos, last_pos;
		int num;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num == 1){
				one_pos = i;
			}
			else if(num == n){
				last_pos = i;
			}

			//arr[i] = num;
		}

		long ans = one_pos;

		ans += (n - 1 - last_pos);

		if(one_pos > last_pos){
			ans--;
		}

		cout << ans << "\n";
	}
	return 0;
}