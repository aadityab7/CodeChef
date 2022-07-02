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
		int x;
		cin >> x;

		int i = 0;

		if(n % 2 == 0){
			i = 1;
		}

		while(i <= n / 2){	
		    if(i > 0)
			cout << x + i << ' ' << x - i << ' ';
            else
            cout << x << ' ';
			i++;
		}

		cout << endl;
	}
	return 0;
}