create database exercicio02102020;

use  exercicio02102020;

-- a) mostrar a media de pagamentos
select count(*) as codigo_func avg(salario) as (Salario Medio)
as (salario maximo) from funcionarios;

-- B) mostrar nomes e funcões dos funcionarios e departamento

select fn.nome funcionario, f.nome funcao, d.nome  from funcionario fn, funcao f, departamento d
f.codigo_Depto = d.codigo_Depto
GROUP BY(nome);
 
-- C) Mostrar nome , endereço rg e cpf trabalham no ti
 
 select f.nome , e.nome , c.numero cpf, r.numero  from funcionario f, endereco e, cpf c, rg r
 f.codigo_Depto = d.codigo_Depto
 WHERE nome = 'TI';   
 
 -- D) mostrar nomes e salarios do funcionarios nascera em 01/01/1980 a 31/12/1990

 SELECT primeiro_Nome, segundo_Nome, ultimo_Nome, salario FROM funcionarios 
 WHERE data_Nasc > '19800101' and data_Nasc < '19901231';

-- Utilize a modelagem (Figura 2) e crie as estruturas SQL para as questões:

-- a) Mostre os nomes dos países e seus continentes.

 select nome, continent from country;
 
 -- b) Mostre os nomes dos países, região e a população dos países do continente ‘Europe’.

 select  nome, Region, population from country  where  continent = "Europeu";

 -- c) Mostre a expectativa de vida das pessoas do continente ‘Asia'.
 select LifeExpectancy FROM country
 where Continent = 'Asia';  

-- d) Crie uma view que mostre os nomes dos países, seu presidente (HeadOfState), tipos de governo (GovernmentForm) 
--    e a população dos países do continente ‘South America’ e com população maior que 2000000.
      
      create view vw_PaisesSouthAm as
      select Name, HeadOfState, GovernmentForm, Population from country 
      where Continent = 'South America' 
      and Population > '2000000';

-- e) Crie uma view que mostre os nomes dos países, tamanho da sua área (surfaceArea) e seu idioma. 
--    Exibir somente os países com idioma ‘English’ como oficial. Ordenar pelo tamanho da área (da menor para maior). Mostre também como usar a View.
      
      create view vw_PaisesEnglish as
      SELECT c.Name, c.SurfaceArea, cl.Language FROM country c INNER JOIN countrylanguage cl ON 
      c.Code = cl.CountryCode
	  WHERE Language = 'English'
      AND   IsOfficial = 'T'
      ORDER BY SurfaceArea;

  







 
 
 
 
 
 

