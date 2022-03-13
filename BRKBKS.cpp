#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int s;
		cin >> s;

		int arr[3];

		for(int i = 0; i < 3 ; i++){
			cin >> arr[i];
		}

		int i = 0;
		int j = 2;

		int ans = 0;
		while(i <= j){
			int k = i;
			int l = j;

			int sum1 = 0, sum2 = 0;

			while(k < 3 && sum1 + arr[k] <= s){
				sum1 += arr[k];
				k++;
			}

			while(l >= 0 && sum2 + arr[l] <= s){
				sum2 += arr[l];
				l--;
			}

			if((k - i) >= (j - l)){
				i = k;
			}
			else{
				j = l;
			}

			ans++;
		}

		cout << ans << endl;
	}
	return 0;
}
