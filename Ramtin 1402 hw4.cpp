#include <iostream>
using namespace std;

main() {
	int x,y,z;
	
	float ave;
	

	cout << "please enter three namber :";
	
	cin >> x >> y >> z;
	
	ave= (float)(x-y)*(x+z)/((x+y+z)*(x+y+z)+1);
	
	cout << "averegae is " << ave;
}