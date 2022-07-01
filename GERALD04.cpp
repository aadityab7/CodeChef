#include<iostream>
#include <bits/stdc++.h>
#include <iomanip>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){

		string t1, t2;
		cin >> t1 >> t2;

		int dist;
		cin >> dist;

		int h1, h2, m1, m2;

		h1 = 60 * stoi(t1.substr(0,2));
		h2 = 60 * stoi(t2.substr(0,2));
		m1 = stoi(t1.substr(3,5));
		m2 = stoi(t2.substr(3,5));
		
		

		float diff = (h1 + m1) - (h2 + m2);
		float ans = diff + dist;

		cout << fixed << setprecision(1) << ans << ' ';

		float x = (2 * dist) - diff;

		float ans2 = diff + (x / 2);
	    
	    if(ans2 < diff) ans2 = diff;

	    cout << fixed << setprecision(1) << ans2 << endl;
	}
	return 0;
}