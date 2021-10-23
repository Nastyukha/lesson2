#include <iostream>
#include <cmath>
using namespace std;
main(){
	int x1, y1, x2, y2, x1p, y1p;
	cin >> x1 >> y1 >> x2 >> y2;
	if ((x1 + y1 + x2 + y2) % 2 == 0){
		cout << "same color" << endl;
	}
	else{
		cout << "different color" << endl;
	}
	if (x1 == x2 or y1 == y2 or abs(x2-x1) == abs(y2-y1)){
		cout << "queen threatens the field" << endl;
	}
	else{
		cout << "queen doesn't threatens the field" << endl;
	}
	if ((abs(x2-x1) == 2 and abs(y2-y1) == 1) or (abs(x2-x1) == 1 and abs(y2-y1) == 2)){
		cout << "horse threatens the field" << endl;
	}
	else{
		cout << "horse doesn't threatens the field" << endl;
	}
	if (x1 == x2 or y1 == y2){
		cout << "You can do it" << endl;
	}
	else{
		cout << "You should go to " << x2 << " " << y1 << " first" << endl;
	}
	if (x1 == x2 or y1 == y2 or abs(x2-x1) == abs(y2-y1)){
		cout << "you can do it" << endl;
	}
	else{
		cout << "You should go to " << x2 << " " << y1 << " first" << endl;
	}
	if (abs(x2-x1) == abs(y2-y1)){
		cout << "you can do it" << endl;
	}
	else{
		x1p = x1;
		y1p = y1;
		while (x1p >= 1 and y1p >= 1){
			if (abs(x1p - x2) == abs(y1p - y2)){
				cout << "You should go to" << x1p << " " << y1p << " first" << endl;
				break;
			}
			x1p --;
			y1p --;
		}
		x1p = x1;
		y1p = y1;
		while (x1p <= 8 and y1p <= 8){
			if (abs(x1p - x2) == abs(y1p - y2)){
				cout << "You should go to " << x1p << " " << y1p << " first" << endl;
				break;
			}
			x1p ++;
			y1p ++;
		}
	}
}
