// exercicio 03

#include <iostream>
using namespace std;

int main(	int argc, char** argv)
{
	
	double salMin, hrTrabalhada, imp, valHr, salReceber, salBruto;
	cout << " Calculo de salario" << endl;
	
	cout << "Entre com o salario minimo: " << endl;
	cin >> salMin;
	
	cout << "Entre com as horas trabalhadas: " << endl;
	cin >> hrTrabalhada;
	
	valHr = salMin / 2;
	salBruto = hrTrabalhada*valHr;
	imp = 30/100*salBruto;
	salReceber = salBruto-imp;
	
	cout << "Salario a receber: " << salReceber << endl;
	
	return 0;
}