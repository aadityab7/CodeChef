#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;

		long x, y, z;

		long i = a.size() - 1;
		long j = b.size() - 1;
		string ans = "";
		while(i >= 0 && j >= 0){
			x = a[i] - 48;
			y = b[j] - 48;
			z = x + y;
			ans += to_string(z % 10);
			i--;
			j--;
		}

		while(i >= 0){
			ans += a[i];
			i--;
		}

		while(j >= 0){
			ans += b[j];
			j--;
		}

		string fin = "";
        int k = ans.size() - 1;
        while(k > 0 && ans[k] == '0'){
            k--;
        }
        
		while(k >= 0){
			fin += ans[k];
			k--;
		}
		
		cout << fin << endl;
	}
	return 0;
}