#include<iostream>
#include <bits/stdc++.h>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long a, b;
		cin >> a >> b;

		long diff = a - b;

		if(b > a){
			diff = b - a;
		}
		
		//cout << diff << endl;

		std::vector<int> arr;

		for(int i = 0; i <= diff; i++){
			arr.push_back(gcd(a,b));
			//cout << "GCD of " << a << " and " << b << " : " << gcd(a,b) << endl;
			a++;
			b++;
		}

		sort(arr.begin(), arr.end());

        // for(int i = 0; i < arr.size(); i++){
        //     cout << arr[i] << ' ';
        // }
        // cout << endl;
        
		int ans = 1;

		for(int i = 1; i < arr.size(); i++){
			if(arr[i] != arr[i - 1]){
				ans++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}