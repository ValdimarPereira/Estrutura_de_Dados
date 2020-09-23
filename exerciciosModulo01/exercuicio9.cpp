#include<iostream>

using namespace std;

int main()
{
 int i;
 int num_aluno, maior_aluno, menor_aluno;
 float alt_aluno, maior_alt, menor_alt;

num_aluno = 0;
menor_aluno = 0;
maior_aluno = 0;
alt_aluno = 0;
maior_alt = 0;
menor_alt = 0;
i = 0;

 
 cout<<"Entre com o numero do aluno: ";
 cin>> num_aluno;

 cout<<"Entre com altura do aluno: ";
 cin>> alt_aluno;

 
 menor_aluno = num_aluno;
 maior_aluno = num_aluno;
 maior_alt = alt_aluno;
 menor_alt = alt_aluno;
 
 
 for(i=1; i < 10; i++)
 {
 cout<<"Entre com o numero do aluno: ";
 cin>>num_aluno;
 
 cout<<"Entre com altura do aluno: ";
 cin>>alt_aluno;

 if(alt_aluno > maior_alt)
    maior_alt = alt_aluno,
    maior_aluno = num_aluno;
 else
 if(alt_aluno < menor_alt)
    menor_alt = alt_aluno,
    menor_aluno = num_aluno;
 }

 cout<<endl;
  
 cout<<"O numero do aluno mais baixo eh: " <<menor_aluno <<endl;
 cout<<"Com a altura de: " <<menor_alt <<endl;
 cout<<endl;
 cout<<"O numero do aluno mais alto eh: " <<maior_aluno <<endl; 
 cout<<"Com a altura de: " <<maior_alt <<endl;


return 0;
} 
