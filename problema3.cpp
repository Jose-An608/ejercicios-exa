/*Ejercicio-3-examen*/
	
#include <iostream>
using namespace std;

int numeroCapicua(int x){
	int r, t, original=x;
	
	r=0;
	
	while (x > 0){
	
	t = x % 10;
	r = (r*10) + t;
	x = x/10;
}
	if (original == r){
		return true;
	}else{
		return false;
	}
	
}
int main(){
	int n;
	bool ca;
	
	cout << ".::Programa para determinar si un numero es capicua::."<< endl;
	
	cout << "Ingrese un numero: " << endl;
	cin >> n;
	
	ca= numeroCapicua(n);
	
	if (ca == true ){
		cout << "El numero es capicua " << endl;
	}else{
		cout << "El numero no es capicua " << endl;
	}
	
	return 0;
}
