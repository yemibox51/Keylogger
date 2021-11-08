#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	for(int i = 0; i < 5; i++) {
		for(int j = i; j < 5; j++) {
			cout << "#";
		}
		cout << endl;
	}
}