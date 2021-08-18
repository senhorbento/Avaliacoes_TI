@echo off
IF EXIST obj\ (
	echo Compilando...
) ELSE (
	echo Criando a pasta Obj e Compilando...
	mkdir obj
)

gcc -c src\checagem.c -Iinclude -o obj\checagem.o
gcc -c src\durante_jogo.c -Iinclude -o obj\durante_jogo.o
gcc -c src\main.c -Iinclude -o obj\main.o
gcc -c src\prejogo.c -Iinclude -o obj\prejogo.o
gcc -c src\uteis.c -Iinclude -o obj\uteis.o

gcc obj\uteis.o obj\prejogo.o obj\durante_jogo.o obj\checagem.o obj\main.o -o JogoDaVelha.exe

IF EXIST JogoDaVelha.exe (
	echo Compilado com sucesso!
) ELSE (
	echo Arquivo nao compilado
)
pause
