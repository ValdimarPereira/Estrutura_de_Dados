#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <list>
using namespace std;

int main(int argc, char** argv)
{
	
	int id;
	char op;
	list(int) quantidade;
	int calculo;

	
	do{
		
		cout <<"Idade: ";
		cin >> id;
		cout <<"---Qual a opinião sobre o filme?--- " << endl;
		cout <<"[1]""-Ótimo" << endl;
		cout <<"[2]""-Bom" << endl;
		cout <<"[3]""-Regular" << endl;
		cout <<"[4]""-Ruim" << endl;
		cout <<"[5]""-Resultado das pesquisas" << endl;
		cin >> op;
		cout <<"" << endl;
		
		switch(op)
		{
		case '5':
			cout <<"Quantidade de psssoas que responderam a pesquisa: " << quantidade.size() << endl;
			cout <<"Média da idade das pessoas: " << calculo << endl;
			cout <<"Porcentagem das respostas: " << endl;
			break;
		
		case '1':
			quantidade.push_front(id);
			calculo= id/quantidade();
			break;
		
		case '2':
			quantidade.push_front(id);
			calculo = id/quantidade.size();
			break;
		
		case '3':
			quantidade.push_front(id);
			calculo = id/quantidade.size();
			break;
		
		case '4':
			quantidade.push_front(id);
			calculo = id/quantidade.size();
			break;
		
		default:
			break;
		}

		system("pause");
		system("cls");
	}while(op!=4);

	
	return 0;
}