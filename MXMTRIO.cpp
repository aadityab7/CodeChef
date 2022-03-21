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
		long n;
		cin >> n;

		long arr[n];
		for(long i = 0; i< n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);
        
        //2nd greatest - smallest * greatest
        //greatest - smallest * 2nd greatest
        
        long ans = (arr[n - 1] - arr[0]) * arr[n - 2];
        long num = (arr[n - 2] - arr[0]) * arr[n - 1];
        
        ans = max(ans, num);

		cout << ans << endl;
	}
	return 0;
}