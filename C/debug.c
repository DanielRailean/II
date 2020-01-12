#include <stdlib.h> // pentru a evita erorrile cu caloc
int multiply( int a , int b){
	int c = a*b;
	return c;
}
int main( int argc, char **argv){
	char *bug =0;
	// char *bug = calloc(3, sizeof(char)); 
	bug[2] = multiply(3,1); // segmentation fault error, deoarece fara  randul [8] adresa de memorie este de tip void
	// pentru a rezolva problchar *bug = malloc(3*sizeof(char)); ema trebuie de inlocuit "char *bug = 0" cu "char *bug = calloc(3 , sizeof(char))" , aceasta instructiune va 
	// aloca memorie necesara pentru 3 variabile de tip char, si va initializa zona cu 0;
	return 0;
}