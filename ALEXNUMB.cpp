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
		int n;
		cin >> n;

		long arr[n];
		
		for(int i = 0; i < n; i++){
		    cin >> arr[i];
		}

		long long ans = 0;

		sort(arr, arr + n);
		
        int i = 0;
		while(i < n - 1){
			int j = i + 1;
			while(j < n && arr[i] == arr[j]){
				j++;
			}

			ans += (n - j) * (j - i); 
		
		    i = j;
		}

		cout << ans << endl;
	}
	return 0;
}
