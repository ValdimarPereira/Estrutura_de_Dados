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