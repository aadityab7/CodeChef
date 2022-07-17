#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int find_traingle_angle(long long greatest_side, long long a, long long b){
	int type_of_angle = 0;
	// 0 = acute
 	
	long long sum = a + b;

	if(greatest_side == sum){
		type_of_angle = 1;
		// 1 = right
	}
	else if(greatest_side > sum){
		type_of_angle = 2;
		// 2 = obtuse
	}

	return type_of_angle;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int type;
	cin >> type;

	int t;
	cin >> t;
	while(t--){
		int x1, y1, x2, y2 ,x3, y3;
		cin >> x1 >> y1 >>  x2 >>  y2 >> x3 >> y3;

		string ans = "Scalene";

		// double D1, D2, D3, DY1, DY2, DY3;
		// D1 = abs(x1 - x2);
		// DY1 = abs(y1 - y2);
		// D2 = abs(x3 - x2);
		// DY2 = abs(y3 - y2);
		// D3 = abs(x1 - x3);
		// DY3 = abs(y1 - y3);

		// long d1 = (pow(D1, 2) + pow(DY1, 2));
		// long d2 = (pow(D2, 2) + pow(DY2, 2));
		// long d3 = (pow(D3, 2) + pow(DY3, 2));

		// if(d1 == d2 || d1 == d3 || d2 == d3){
		// 	ans = "Isosceles";
		// }
        
  //       string angle = "";
		// if(type == 2){
		// 	// double angle1 = DY1 / D1;
		// 	// double angle2 = DY2 / D2;
		// 	// double angle3 = DY3 / D3;

		// 	// // if all angles acute then acute
		// 	// if(angle1 > 90.0 || angle2 > 90.0 || angle3 > 90.0){
		// 	// 	angle = " obtuse";
		// 	// }
		// 	// else if(angle1 == 90.0 || angle2 == 90.0 || angle3 == 90.0){
		// 	// 	angle = " right";
		// 	// }
		// 	// else{
		// 	// 	angle = " acute";
		// 	// }

		// 	if()
		// }

		long long side1 = pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2);

		long long side2 = pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2);

		long long side3 = pow(abs(x3 - x1), 2) + pow(abs(y3 - y1), 2);

		//by default traingle type 

		string triangle_name = "Scalene";

		// if any 2 sides are equal then iso

		if(side1 == side2 || side1 == side3 || side2 == side3){
			triangle_name = "Isosceles";
		}

		//by default angle = ""
		string triangle_angle = "";

		//only find angle when type = 2
		if(type == 2){

			//find the greatest side 

			long long greatest_side = side1;

			if(side2 > greatest_side){
				greatest_side = side2;
			}
			if(side3 > greatest_side){
				greatest_side = side3;
			}


			string right = " right", obtuse = " obtuse", acute = " acute";
            
            int type_of_angle_returned;
			//use pythogras theoram to find if it is a right angle triangle
			if(greatest_side == side1){

				type_of_angle_returned = find_traingle_angle(greatest_side, side2, side3);

			}
			else if(greatest_side == side2){
				
				type_of_angle_returned = find_traingle_angle(greatest_side, side1, side3);
			
			}
			else{
				
				type_of_angle_returned = find_traingle_angle(greatest_side, side2, side1);

			}

			if(type_of_angle_returned == 0){
				triangle_angle = acute;
			}
			else if(type_of_angle_returned == 1){
				triangle_angle = right;
			}
			else{
				triangle_angle = obtuse;
			}

		}

		cout << triangle_name << triangle_angle << " triangle" << "\n";
	}
	return 0;
}