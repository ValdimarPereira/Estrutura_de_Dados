
-- criando banco de dado

create database exercicio_inner_join;

-- colocando banco de dados paara usa

use exercicio_inner_join;

-- criando tabelas banco de dados

create table cliente(
cpf integer not null,
nome varchar(60) not null,
dtNasc date not null,
primary key (cpf));

create table modelo(
codMod integer not null,
desc_2 varchar(40) not null,
primary key (codMod));

create table patio(
num integer not null,
ender varchar(40) not null,
capacidade integer not null,
primary key(num));

create table veiculo(
placa varchar(8) not null,
modelo_codMod integer not null,
cliente_cpf integer not null,
cor varchar(20) not null,
primary key (placa),
foreign key (modelo_codMod) references modelo(codMod),
foreign key (cliente_cpf) references cliente(cpf));

create table estaciona(
cod integer not null,
patio_num varchar(8) not null,
veiculo_placa varchar(8) not null,
dtEntrada varchar(10) not null,
dtsaida varchar(10) not null,
hsEntrada varchar(10) not null,
hsSaida varchar(10) not null,
primary key(cod),
foreign key(patio_num) references patio(num),
foreign key(veiculo_placa) references veiculo(placa));


-- exibindo placa e nome donods do veiculo

select v.placa, c.nome from veiculo v inner join cliente c on v.cliente_cpf = c.cpf

-- exibindo clientes que possui veiculo "jjj-2020"

select c.cpf, c.mnome from veiculo v inner join cliente c on v.cliente_cpf = c.cpf
where v.placa = 'jjj-2020';

-- exibir placa e cor do veiculo estaciona codigo 01

select v.placa, v.cor from veiculo v, inner join estaciona e
on e.veiculo_placa = v.placa
where e.cod = 1;

-- definindo data de entrada e saida de veiculo

select p.ender, e.dtEntrada, e.dtSaida from patio p, estaciona e,
on p.num = e.patio_num where e.veiculo_placa = 'JEG-1010';

-- quantidade de vezes estacionou veiculo verde

select count(e.cod) as quantidade from veiculo v inner join 
estaciona e on v.placa = e.veiculo_placa where v.cor = 'verde';

-- clientes que possui modelo 01

select c.nome from veiculo v, cliente c 
on c.cpf = v.clientes_cpf where v.modelo_codMod = 1;

-- listando horarios de entrada e saida veiculos verde

select v.placa, e.hsEntrada, e.hsSaida from veiculo v inner join estaciona e
on v.placa = e.veiculo_placa where v.cor = 'verde';

-- listando estacionamento veiculo placa "jj-2020"

select  e.cod, e.dtEntrada, e.dtSaida, e.hsEntrada, e.hsSaida from veiculo v, estaciona e
on v.placa = e.veiculo_placa
where v.placa ='JJJ-2020';

-- Clientes codigo de estacionamento numero 2

select c.nome from cliente c inner join veiculo c on 
c.cpf = v.cliente_cpf and estaciona e
on v.placa = e.veiculo_placa
where e.cod = 2;

-- exibindo cpf cliente codigo 3

select c.cpf from cliente c, veiculo v 
on c.cpf = v.cliente_cpf and
 v.placa = v.veiculo_placa where 
 e.cod = 3;
 
 -- descrição do modelo e codigo estacionamento 2
 
 select m.descricao from modelo m , veiculo v,on
 m.codMod = v.modelo_codMod and
 v.placa = e.veiculo_placa 
 where e.cod = 2;
 
 -- exibir placa , nome e descriçao de todos os veiculos
 
 select v.placa, c.nome, m.descricao from veiculo v, cliente c on
 m.codMod = .modelo_codMod end
 c.cpf = v.cliente_cpf;
 













