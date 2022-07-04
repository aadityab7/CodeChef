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
		int m, k;
		cin >> m >> k;

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);
        
        
        
		int duplicates = 0;

		string ans = "NO";

		int j = 0;
		int curr_mex = 0;
		int size = 0;
		

		for(int i = 0; i < n; i++){
			
			if(arr[i] == k){
				continue;
			}

			if(i > 0 && arr[i] == arr[i - 1]){
				duplicates++;
			}

			if(arr[i] == j){
				curr_mex++;
				j++;
			}


			size++;

			if(curr_mex == k && size == m){
				ans = "YES";
				break;
			}

			if(curr_mex > k){
				break;
			}

			if(size >= m){
				if(duplicates > 0){
					size--;
					duplicates--;
				}
				else{
					break;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}