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

		long num;
		long odd = 0, even = 0;
		for(long i = 0; i < n; i++){
			cin >> num;
			if(num % 2 == 0) even ++;
			else odd++;
		}

		long ans = 0;

		long omn, emn;

		if(even > 0 && odd > 0){
			
			if(odd % 2 != 0){
				ans = even;
			}
			else{
			    omn = odd / 2;
    			emn = even;
    			
    			if(omn < emn){
    				ans = omn;
    			}
    			else{
    				ans = emn;
    			}
			}
			
		}
		
		cout << ans << endl;
	}
	return 0;
}