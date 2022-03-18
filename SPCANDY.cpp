#include<iostream>
#include <bits/stdc++.h>;
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, k;
		cin >> n >> k;
		
		if(k == 0){
		    cout << 0 << ' ' << n << endl;
		}
        else{
            cout << n / k << ' ' << n % k << endl;    
        }
		
	}
	return 0;
}