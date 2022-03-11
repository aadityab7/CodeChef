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
		long n;
		cin >> n;

		long count = 1;

		if(n % 2 == 0){
			count = n / 2;
		}
		else{
			count = (n / 2) + 1;
		}

		cout << count << endl;
	}
	return 0;
}
