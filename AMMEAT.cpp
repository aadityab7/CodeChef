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
		long long n, m;
		cin >> n >> m;

		long long arr[n];
		for(long long i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		long long ans = 0;
		long long sum = 0;
		for(long long i = n - 1; i >= 0; i--){
			sum += arr[i];
			if(sum >= m){
				ans = n - i;
				break;
			}
		}

        if(sum < m){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;    
        }

	}
	return 0;
}