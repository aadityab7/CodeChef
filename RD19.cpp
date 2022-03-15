#include<iostream>
#include<algorithm>
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
		int n;
		cin >> n;

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int ans = -1;

        int a = arr[0];
		for(int i = 1; i < n; i++){
		    a = __gcd(a, arr[i]);
		    
		    if(a == 1){
				ans = 0;
				break;
			}
		}
		

		cout << ans << endl;

	}
	return 0;
}