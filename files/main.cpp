#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int suma;
	int i=120;
	int n;
	for( n = 120 ; n > 0; n--){
		suma=suma+i;
		i=i-1;
		
	}
	std::cout << suma << std::endl;
	std::cout << i;
	system("pause");
	return 0;
}
