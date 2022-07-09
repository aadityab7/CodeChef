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
		int diffs[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		//assuming array is sorted
		//sort(arr, arr + n);

		int min = 360;

		for(int i = 1; i < n; i++){

			int num = arr[i] - arr[i - 1];

			if(num < min){
				min = num;
			}

			diffs[i - 1] = num;
		}

		diffs[n - 1] = 360 + arr[0] - arr[n - 1];
		int done = 0;

		while(!done && min > 1){

			if(360 % min == 0){
				bool div_all = true;
				for(int i = 0; i < n; i++){
					if(diffs[i] % min != 0){
						div_all = false;
						break;
					}
				}

				if(div_all){
					done = 1;
					break;
				}
				else{
					min--;
				}
			}
			else{
				min--;
			}

		}

		int total_pieces_needed = 360 / min;

		int ans = total_pieces_needed - n;
		
		cout << ans << "\n";
	}
	return 0;
}