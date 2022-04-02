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
        int ans = 0;
        
		int arr[100] = {};

        int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			arr[num - 1]++;
		}

		for(int i = 0; i < 100; i++){
			if(arr[i] % 2 != 0){
				ans++;
				n++;
			}
		}

		if(n % 4 != 0){
			ans += 2;
		}

		cout << ans << endl;


	}
	return 0;
}