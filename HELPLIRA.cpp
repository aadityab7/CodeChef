#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
#define INT_MAX 147483647;
using namespace std;

int main(){
	int n;
	cin >> n;
	long x1, y1, x2, y2, x3, y3;

	long mn = INT_MAX;
	long mx = 0;
	
	long mnn = 0, mxx = 0;
	
	for(long i = 0; i < n; i++){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		long n1 = y2 - y3;
		long n2 = y3 - y1;
		long n3 = y1 - y2;

		long num = (x1 * n1) + (x2 * n2) + (x3 * n3);
		if(num < 0) num = -num;
		
		if(num >= mx){
		     mx = num;  
		     mxx = i + 1;
		}
		if(num <= mn){
		     mn = num;
		     mnn = i + 1;
		}
	}

	cout << mnn << " " << mxx << endl;
	return 0;
}