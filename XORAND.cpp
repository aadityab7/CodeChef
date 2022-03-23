#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		long arr[128] = {};
		long long num;
		int count = 0;
		
		for(long i = 0; i < n; i++){
			cin >> num;
			count = 0;
			//count no. of bits in number :
            
			while(num != 0){
				count ++;
				num /= 2;
			}

			arr[count - 1]++;
		}

		long long ans = 0;
		long long numb;
		for(long i = 0; i < 128; i++){
			if(arr[i] > 0){
			    numb = arr[i] * (arr[i] - 1);
				ans += numb / 2;
			}
		}

		cout << ans << endl;
	}
	return 0;
}