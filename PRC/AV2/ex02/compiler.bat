@echo off
IF EXIST obj\ (
	echo Compilando...
) ELSE (
	echo Criando a pasta Obj e Compilando...
	mkdir obj
)

gcc -c src\arquivo.c -Iinclude -o obj\arquivo.o
gcc -c src\finds.c -Iinclude -o obj\finds.o
gcc -c src\main.c -Iinclude -o obj\main.o
gcc -c src\menus.c -Iinclude -o obj\menus.o
gcc -c src\operacoes.c -Iinclude -o obj\operacoes.o
gcc -c src\substituicao.c -Iinclude -o obj\substituicao.o
gcc -c src\uteis.c -Iinclude -o obj\uteis.o


gcc obj\arquivo.o obj\finds.o obj\menus.o obj\operacoes.o obj\substituicao.o obj\uteis.o obj\main.o -o LojaDeBrinquedos.exe

IF EXIST LojaDeBrinquedos.exe (
	echo Compilado com sucesso!
) ELSE (
	echo Arquivo não compilado
)
pause
