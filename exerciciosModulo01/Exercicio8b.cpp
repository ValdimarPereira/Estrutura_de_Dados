#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	float votonulo=0, votoBranco=0, votoValido=0,total_votos;
	float pValido, pBranco, pNulo;
	float candidato1=1, candidato2=1, nulo=1, branco=1;
	char op;
	
	do{
	
	cout << "****URNA ELETRONICA****" << endl;
	cout << "" << endl;
	cout << "Escolha uma das opcoes abaixo" << endl;
	cout << "[0]""-Acompanhamento dos candidatos" << endl;
	cout << "[1]""-João Paulo" << endl;
	cout << "[2]""-Sebatião Fernades" << endl;
	cout << "[3]""-Voto nulo" << endl;
	cout << "[4]""-Voto em branco" << endl;
	cout << "[5]""-Percentual" << endl;
	cout << "[6]""-Encerrar" << endl;
	cout << "[]""-total de votos" << endl;
	cin >> op;
	cout << "" << endl;

	
	
		switch(op)
		{
			case '7':
			cout<< "total_votos"= (votoBranco + votovalido + votoNulo)*100<< endl;
			cout<< "pValido" = (votoValido/total_voto)*100 << endl;
			cout<< "pBranco" = (votoBranco?total_voto)*100<< endl;
			cout<< "pNulo" = (vtotoNulo/Toatal_votos)*100<< endl;

			
			case '1':
			cout << "Seu voto vai para o candidato: ""João Paulo" << endl;
			cout << "Total de votos para o candidato: " << candidato1++ << endl;
			break;
	
			case '2':
			cout << "Seu voto vai para o candidato: ""Sebastião Fernandes" << endl;
			cout << "Total de votos para o candidato: " << candidato2++ << endl;
			break;
	
			case '3':
			cout << "Seu voto e nulo" << endl;
			cout << "Total de votos nulos: " << nulo++ << endl;
			break;
	
			case '4':
			cout << "Seu voto e branco" << endl;
			cout << "Total de votos em branco: " << branco++ << endl;
			break;
		
			case'5';
			cout << "percentual de votos validos" << pValido << endl;
			cout << "percentual de votos brancos" << pBranco << endl;
			cout << "percentual de votos nulos" << pNulo << endl;

			case '6':
			cout <<"Operacao finalizada!" << endl;
			break;
	
			default:
			cout <<"Opcao invalida" << endl;
			break;
			
		
		
		}
	system("pause");
	system("cls");
			
	}while(op!=5);
return 0;
}