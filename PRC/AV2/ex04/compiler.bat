@echo off
IF EXIST obj\ (
	echo Compilando...
) ELSE (
	echo Criando a pasta Obj e Compilando...
	mkdir obj
)

gcc -c src\manipulacao.c -Iinclude -o obj\manipulacao.o
gcc -c src\operacoes.c -Iinclude -o obj\operacoes.o
gcc -c src\uteis.c -Iinclude -o obj\uteis.o
gcc -c src\main.c -Iinclude -o obj\main.o

gcc obj\manipulacao.o obj\operacoes.o obj\uteis.o obj\main.o -o Conjuntos.exe

IF EXIST Conjuntos.exe (
	echo Compilado com sucesso!
) ELSE (
	echo Arquivo não compilado
)
pause