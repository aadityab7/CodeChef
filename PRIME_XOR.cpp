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
		

		long long x, y;
		cin >> x >> y;

		long long z = x ^ y;


		//find the odd ones 

		long long arr[3];
		arr[0] = 2;
		int i = 1;

		if(x % 2 != 0){
			arr[i] = x ^ 2;
			i++;
		}
		
		if(y % 2 != 0){
			arr[i] = y ^ 2;
			i++;
		}

		if(z % 2 != 0){
			arr[i] = z ^ 2;
			i++;
		}

		sort(arr, arr + 3);

		cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << "\n";
	}
	return 0;
}