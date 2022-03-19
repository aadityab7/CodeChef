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
		long x, y;
		cin >> x >> y;

		long ans = 0;
		
		string s = "";
        long bits = 0;
        long num = x;
        while(num != 0){
            if(num % 2 == 0){
                s += '0';
            }
            else{
                s += '1';
                bits++;
            }
            num = num / 2;
        }
        
        int i = 0;
        while(bits > 1){
            if(s[i] == '1'){
                bits--;
            }
            x = x / 2;
            ans++;
            i++;
        }
        
	    while(x != y){
	        if(x > y){
	            x = x / 2;
	            ans++;
	        }
	        else{
	            x = x * 2;
	            ans++;
	        }
	    }
		
		cout << ans << endl;
	}
	return 0;
}