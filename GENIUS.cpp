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
		long n, x;
		cin >> n >> x;
		
		long a, b, c, num;
		int f = 0;
		
		if(x % 3 == 0){
		    a = x / 3;
		    b = 0;
		}
		else{
		    a = (x / 3) + 1;
		    b = 1;
		}
		
		while(a + b <= n){
		    num = (3 * a) - b;
		    
		    if(num == x){
		        f = 1;
		        break;
		    }
		    
		    b++;
		}
		
		if(f){
		    cout << "YES" << endl;
		    c = n - (a + b);
		    cout << a << " " << b << " " << c << endl;
		}
		else{
		    cout << "NO" << endl;
		}
	}
	return 0;
}
