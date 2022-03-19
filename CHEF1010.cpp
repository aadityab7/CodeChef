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

		string s;
		cin >> s;
		
		long os = 0, zs = 0;

		for(int i = 0; i < s.size(); i++){
			if(s[i] == '1'){
				os++;
			}
			else {
			    zs++;
			}
		}

// 		long ans = 0;
// 		if(os >= 2 && zs >= 2){
// 			ans = 1;
// 			os -= 2;
// 			zs -= 2;
// 		}

// 		if(os > 0 && zs > 0){
// 			if(os > zs) ans += zs;
// 			else ans += os;
// 		}
    
        int mn;
        if(os < zs) mn = os;
        else mn = zs;
        
		if(mn >= 2){
		    cout << mn - 1 << endl;
		}
		else{
		    cout << 0 << endl;
		}
	}
	return 0;
}