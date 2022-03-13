#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int n;
	cin >> n;

	string a;
	cin >> a;

	std::vector<int> ans;
	ans.assign(26,0);

	for(int i = 0; i < a.size(); i++){
		ans[a[i] - 97]++;
	}

	vector <int> temp;
	for(int i = 1; i < n; i++){
		temp.assign(26,0);
		string t;
		cin >> t;

		for(int j = 0; j < t.size(); j++){
			temp[t[j] - 97]++;
		}

		for(int k = 0; k < 26; k++){
			if(ans[k] > temp[k]){
				ans[k] = temp[k];
			}
		}
	}

	string fin = "";
	for(int i = 0; i < 26; i++){
		for(int j = 1; j <= ans[i]; j++){
			char c = i + 97;
			fin += c;
		}
	}
    
    if(fin == ""){
        cout << "no such string" << endl;
    }
    else{
        cout << fin << endl;
    }
	
	return 0;
}
