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
		n--;
		long long x = 0, y = 0, z = 0;
		
        long w = n / 26;
		long long numb = pow(2, w);
		
		int xe = n % 26;

	    if(xe < 2){
			x = numb;
		}
		else if(xe < 10){
			y = numb;
		}
		else{
		    z = numb;
		}

		cout << x << ' ' << y << ' ' << z << endl;
	}
	return 0;
}