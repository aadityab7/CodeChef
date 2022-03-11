#include<iostream>
//#include <string>
//#include <vector>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k; 
		long s;
		cin >> n >> k >> s;

		long sum = 0;
		for(int i = 0; i < n; i++){
			sum += (i * 2) + 1;
		}
		
		long x;

		x = (s - sum) / (k - 1);

		cout << x << endl;
	}
	return 0;
}
