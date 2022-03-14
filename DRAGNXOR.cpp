#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
#include <cmath>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, a, b;
		cin >> n >> a >> b;

		long count = 0;
		
		long i = n - 1;
		while(a > 0){
			if(a / pow(2, i) >= 1){
				count ++;
				a = a - pow(2 , i);
			}
            
            i--;
		}
        


		i = n - 1;
		while(b > 0){
			if(b / pow(2, i) >= 1){
				count ++;
				b = b - pow(2 , i);
			}
            
            i--;
		}
    
      
		long ans = count;
	   
		if(ans > n){
			ans = n - (ans - n);
		}

		long fin = 0;
	
		for(int i = 0; i < ans; i++){
			fin += pow(2, n - 1 - i);
		}

		cout << fin << endl;
	}
	return 0;
}
