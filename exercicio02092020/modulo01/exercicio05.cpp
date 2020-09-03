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