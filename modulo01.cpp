// exercicio 01

#include <iostream>//diretivas entrada e saida

using namespace std;

#define peso.

int main()
{
	
	float peso, altura, imc;

	cout << "Digite com seu peso; ";
	cin >> peso;
	
	cout << "Digite sua altura: ";
	cin >> altura;
	
	imc = peso/altura^2;
	
	if(imc < 20)
	{
		
		cout << " Abaixo do peso " << endl;

	}
			
	if(20 >= || imc< 25)
	{
		
		cout << "Peso ideal " << endl;
	}	
	
	if(imc >= 25)
	{
		
	
		cout << "Acima do Peso " endl;
	}
	
	return 0;
		
	}
	
	
// exercicio 2

# include <iostream>

using namespace std;

int main()
{
	int idade;
	cout << " digite sua idade:";
	cin >> idade
	
	if (idade >= 5 & idade <= 7)
	{	
		cout << "Categoria infantil A " endl;
		
	}
	if(idade >= 7 & idade <= 10)
	{
		
		cout << "Categoria infantil B " endl;
	}
	if(idade >= 10 & idade <= 13)
	{
		cout << " categoria juvenil A " endl;
	}
	if (idade >= 13 & idade <= 17)
	{
			cout << "categoria juvenil B " endl;
	}	
	if(idade >17)
	{
		cout << " Maior que 17 anos: ";
		
	}
	return 0;  
	
}

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

// exercicio 04

#include <iostream>

using namespace std;

int main(	int argc, char** argv)
{
	
	float  novoSal, reajuste, salario;
	
	cout << "Entre com o salario: " << endl;
	cin >> salario;
	
	if(salario <= 1000){
		novoSal = salario*0.15 + salario;
		cout << "Seu novo salario: " << novoSal << endl;
	}
	
	if(salario >= 1000 & salario < 1500){
		novoSal = salario * 0.10 + salario;
		cout << "Seu novo salario: " << novoSal << endl;
	}
	
	if(salario > 1500){
		novoSal = salario * 0.05 + salario;
		cout << "Seu novo salario: " << novoSal << endl;
	}
	
	return 0;
}

// exercicio05
#include <iostream>
using namespace std;

int main()
{
	float Pagamento , valor, Desconto, Acrescimo, Dividir1, Dividir2;
	int op;
	cout<<"Digite o valor da compra"<<endl;
	cin>>valor;
	cout<<"Digite a forma de pagamento"<<endl;
	cout<<"1 - a vista  em dinheiro"<<endl;
	cout<<"2 - a vista com cartao"<<endl;
	cout<<"3 - em 2 vezes"<<endl;
	cout<<"4 - em 3 vezes"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			Desconto = 10/100*valor;
			Pagamento = valor - Desc;
			cout << "Voce Pagara com dinheiro: " << Pag << "com 10% de desconto " << endl;
			break;
		case 2:	
			Desconto = 5/100*valor;
			Pagamento = valor - Desc;
			cout << "Voce Pagara no cartão:" << Pag << "com 5% de desconto" << endl;	
			break;
		case 3:
			Dividir1=valor/2;
			cout << "Voce Pagara 2 parcelas de: " << Dv1 << endl;	
			break;			
		case 4:
			Acrescimo = 10/100*valor;
			Pag = valor + Acrescimo;
			Dividir2 = Pagamento / 3;
			cout<<"Você Pagara com dinheiro: " << Dividirv2 << "com 10% de Acrescimo" << endl;
				
	}
	
	
	return 0;
}	