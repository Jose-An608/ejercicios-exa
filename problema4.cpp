/*Ejercicio 4: Combinatoria:
C5 1 + C7 3 + C9 5 + C11 7 + …
*/

#include <iostream>
using namespace std;


int suma(int x){
	int z, fact1, fact2, fact3;
	int s;
	int k;
	
	z = 5;
	k = 1;
	s = 0;
	
	while (z <= x && k<=9999){
	
	
	fact1 = 1;
	fact2 = 1;
	fact3 = 1;
	
		for (int i = 1; i<=z; i++){
			fact1 = fact1 * i;
		}
		
		for (int i = 1; i<=4; i++){
			fact2 = fact2 * i;
		}
		
		for (int i = 1; i<=k; i++){
			fact3 = fact3 * i;
		}
	
	

	
	s = s + (fact1/(fact2 * fact3));
	z = z+2;
	k = k+2;
	}
	
	return s;

}
int main(){
	int n,s;
	
	cout << "Digite la cantidad de elementos" << endl;
	cin >> n;
	
	s = suma(n);
	
	cout << "La suma es: " << s << endl;
	
	return 0;
}
