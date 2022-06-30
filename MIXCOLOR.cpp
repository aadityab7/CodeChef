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

		long arr[n];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int ans = 0;
		
		for (int i = 0; i < n - 1; ++i)
		{
			/* code */

			if(arr[i] == arr[i + 1]){
				ans++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}