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
		int a, b, c;
		cin >> a >> b >> c;

		int mx = 0;
		if(a > mx) mx = a;
		if(b > mx) mx = b;
		if(c > mx) mx = c;

		cout << mx << endl;
	}
	return 0;
}
