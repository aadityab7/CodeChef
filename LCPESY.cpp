#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		getline(cin, a);
		while(a.length() == 0)
		    getline(cin, a);
		    
		getline(cin, b);
        while(b.length() == 0)
            getline(cin, b);
        
// 		vector <int> da, db;
// 		da.assign(10,0);
// 		db.assign(10,0);

        int da[10] = {};
        int db[10] = {};
// 		std::vector<int> aa, aA, ba, bA;
// 		aa.assign(26,0);
// 		aA.assign(26,0);
// 		ba.assign(26,0);
// 		bA.assign(26,0);

        int aa[26] = {}, aA[26] = {}, ba[26] = {}, bA[26] = {};
		

		for(int i = 0; i < a.size(); i++){
		    char ch = a[i];
			if(ch >= 'a' && ch <= 'z'){
				aa[a[i] - 97]++;
			}
			else if(ch >= 'A' && ch <= 'Z'){
				aA[ch - 65]++;
			}
			else{
				da[ch - 48]++;
			}
		}

		for(int i = 0; i < b.size(); i++){
		    char ch = b[i];
			if(ch >= 'a' && ch <= 'z'){
				ba[ch - 97]++;
			}
			else if(ch >= 'A' && ch <= 'Z'){
				bA[ch - 65]++;
			}
			else{
				db[ch - 48]++;
			}
		}

		int ans = 0;
		for(int i = 0; i < 26; i++){
			if(aa[i] < ba[i]){
				ans += aa[i];
			}
			else{
				ans += ba[i];
			}

			if(aA[i] < bA[i]){
				ans += aA[i];
			}
			else{
				ans += bA[i];
			}

			
		}
		
		for(int i = 0; i < 10; i++){
		    if(da[i] < db[i]){
				ans += da[i];
			}
			else{
				ans += db[i];
			}
		}

		cout << ans << endl;
	}
	return 0;
}
