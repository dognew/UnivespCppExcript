#include <iostream>
// #include <stdlib.h> * I changed to the library below
#include <stdio.h>

int main(){
	std::cout << "Seja bem-vindo\n";
	// system("pause"); * This command doesn't work on Linux so I adapted it with the commands below.
	std::cout << "Pressione ENTER para encerrar\n";
	getchar();
	return 0;
}
