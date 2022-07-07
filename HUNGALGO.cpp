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

		int arr[n] = {};
		int num;

		bool ans = true;
		bool row_contains_zero;
		
		for(int i = 0; i < n; i++){
			row_contains_zero = false;
			
			for(int j = 0; j < n; j++){
				cin >> num;
				if(num == 0){
					row_contains_zero = true;
					arr[j] = 1;
				}				
			}

			if(ans && !row_contains_zero){
				ans = false;
			}
		}

		if(ans){
			for(int i = 0; i < n; i++){
				if(arr[i] == 0){
					ans = false;
					break;
				}
			}
		}


		if(ans){
			cout << "YES" << "\n";
		}
		else{
			cout << "NO" << "\n";
		}

	}
	return 0;
}