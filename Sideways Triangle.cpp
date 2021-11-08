#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	// 1.)
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j <= i; j++) {
			cout << "#";
		}
		
		cout << endl;
	}
	
	// 2.) 
	for(int i = 3; i >= 0; i--) {
		for(int j = 0; j < i; j++) {
			cout << "#";
		}
		
		cout << endl;
	}
	
	cout << endl;
	// Combination:
	
}

/* 
#
##
###
####
###
##
#

Reduction:
1.)
#
##
###
####

2.)
####
###
##
#
*/
