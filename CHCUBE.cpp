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
		int arr[6] = {};
		string s;

		for(int i = 0; i < 6; i++){
			cin >> s;
			int num ;
			if(s == "black") num = 1;
			else if(s == "blue") num = 2;
			else if(s == "red") num = 3;
			else if(s == "green") num = 4;
			else if(s == "yellow") num = 5;
			else num = 6;
			
			arr[i] = num;
		}
        
        
        string ans = "NO";

        int a[8][3] = {
        	{0,2,4},
        	{0,3,4},
        	{0,2,5},
        	{0,3,5},
    		{1,2,4},
        	{1,3,4},
        	{1,2,5},
        	{1,3,5},
        };
        
        for(int i = 0; i < 8; i++){
        	if(arr[a[i][0]] == arr[a[i][1]] && arr[a[i][0]] == arr[a[i][2]] && arr[a[i][1]] == arr[a[i][2]]){
        		ans = "YES";
        	}
        }

		cout << ans << endl;
	}
	return 0;
}