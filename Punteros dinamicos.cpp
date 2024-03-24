#include <iostream>

using namespace std;

int main(){
	
	int fil = 0, col = 0, **pm_notas;
	
	cout<<"ingrese la cantidad de estudiantes: ";
	cin>>fil;
	cout<<"ingrese la cantidad de notas por estudiante: ";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i = 0; i<fil; i++){
		pm_notas[i] = new int [col];
	}
	
	for (int i = 0; i<fil; i++){
		cout<<"___________Estudiante___________"<<i<<endl;
		for (int ii = 0; ii<col; ii++){
			cout<<"Nota: "<<ii<<" : ";
			cin>>*(*(pm_notas + i) + ii);
		}
		cout<<"______________________"<<endl;
	}
	cout<<"-------- Mostrar notas --------"<<endl;
	for (int i = 0; i<fil; i++){
		for (int ii = 0; ii<col; ii++){
			cout<<*(*(pm_notas + i) + ii)<<endl;
		}
	cout<<"__________________________________________"<<endl;
	}
	
	for(int i; i < fil; i++){
		
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	system("pause");
	return 0;
}
