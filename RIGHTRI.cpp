#include<iostream>
// #include <bits/stdc++.h>;
// #include<cmath>
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long n;
	cin >> n;
	long ans = 0;
	for(long i = 0; i < n; i++){
	    
	    long x1, y1, x2, y2, x3, y3;

	    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	    float s1 = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	    float s2 = ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	    float s3 = ((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	    
        if(s1 == s2 + s3 || s2 == s1 + s3 || s3 == s2 + s1){
            ans++;
        }

	}
	
	cout << ans << endl;
	return 0;
}