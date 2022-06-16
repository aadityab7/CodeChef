#include<iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int p, s;
		cin >> p >> s;

		float x, y;
		
		double x1 = (p + sqrt(pow(p,2) - (24 * s))) / 12;
		double x2 = (p - sqrt(pow(p,2) - (24 * s))) / 12;

		double y1 = (p - (8 * x1)) / 4;
		double y2 = (p - (8 * x2)) / 4;

		double v1 = x1 * x1 * y1;
		double v2 = x2 * x2 * y2;

		double ans = v2;
		if(v1 > v2){
			ans = v1;
		}

		cout << fixed << setprecision(2) << ans << endl;
	}
	return 0;
}