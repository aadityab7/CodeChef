#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

const long long N = 1e5+1;
const long long mod = 1e9+7;
long arr[N];

int main(){
	long t;
	cin >> t;
	
	arr[0] = 1;
	for(int i = 1; i < N; i++){
	    arr[i] = (arr[i - 1] * 2) % mod; 
	}
	
	while(t--){
		long n;
		cin >> n;
		
		cout << arr[n - 1] << endl;
	}
	return 0;
}