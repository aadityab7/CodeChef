#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int n , m;
	cin >> n >> m;

	string names[n];
	string ext[n];

	string s;
	for(int i = 0; i < n; i++){
		cin >> ext[i];
		cin >> names[i];
	}
    
    string tar;
    string ans;
	for(int i = 0; i < m; i++){
		cin >> s;
		ans = "unknown";
		for(int j = s.size(); j >= 0; j--){
		    if(s[j] == '.'){
		        tar = s.substr(j + 1, s.size() - (j + 1));
		        for(int k = 0; k < n; k++){
		            if (tar == ext[k]){
		                ans = names[k];
		                break;
		            }
		        }
		        break;
		    }
		}
		
		cout << ans << endl;
	}

	return 0;
}