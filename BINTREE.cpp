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
		
		long a;
		long b;

		cin >> a >> b;

		//std::vector<long> arr;
		
		long long ans = 0;
		long i = 0;
		long steps = 0;

		while(a > 0){
			
			while(b > a){
				b = b / 2;
				steps++;
			}

			if(b == a){
				ans = steps + i;
				break;
			}

			a = a / 2;
			i++;
		}

		
		/*
		while(b > 0){
			while(b < arr[i]){
				i++;
			}

			if(b == arr[i]){
				ans = steps + i;
				break;
			}

			b = b / 2;
			steps++;
		}
		*/

        cout << ans << endl;
	}
	return 0;
}