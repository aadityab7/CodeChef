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

		long ans = INT_MAX;
		
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                long f = i;
                long f2 = n / i;
                if(abs(f - f2) < ans) ans = abs(f - f2); 
            }
        }

		cout << ans;
		cout << endl;
	}
	return 0;
}