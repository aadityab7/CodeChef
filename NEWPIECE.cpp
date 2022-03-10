#include<iostream>
//#include <string>
//#include <vector>
//max val of long 9223372036854775807 ;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, x, y;
		cin >> a >> b >> x >> y;

		int count;

		if(a == x && b == y){
			count = 0;
		}
		else if((a + b) % 2 == (x + y) % 2){
			count = 2;
		}
		else{
			count = 1;
		}

		cout << count << endl;
	}
	return 0;
}
