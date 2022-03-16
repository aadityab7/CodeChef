#include<iostream>
#include <bits/stdc++.h>
// #include <string>
#include<cmath>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;

		long long arr[n];
		for(long i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		long long sum = 0;
		long long ans = 0;
		int f = 1;

		for(long i = 0; i < n; i++){
		    sum += arr[i];
		 
		    
			if(sum <= k){
				ans++;
			}
			else if(f == 1){
			    sum -= ceil(arr[i] / 2);
			    if(sum <= k){
			        ans++;
			        f = 0;
			    }
			    else{
			        break;
			    }
			}
			else{
			    break;
			}
		
		}
	

		cout << ans << endl;
	}
	return 0;
}