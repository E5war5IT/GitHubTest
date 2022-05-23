#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	srand(98);
	
	for(int x = 1; x <= 10; x++){
		int num = (rand() % 10);
		cout << x << ": " << num << "\n";
	}
	
	
	return 0;
}
 
