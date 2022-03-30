ob = ..\obj

a.exe: buildBoard.o displayBoard.o isSafe.o main.o numUnassigned.o solveBoard.o
	gcc $(ob)\buildBoard.o $(ob)\displayBoard.o $(ob)\isSafe.o $(ob)\main.o $(ob)\numUnassigned.o $(ob)\solveBoard.o -o ..\a.exe

buildBoard.o: buildBoard.c header.h
	gcc -c buildBoard.c -o $(ob)\buildBoard.o

displayBoard.o: displayBoard.c header.h
	gcc -c displayBoard.c -o $(ob)\displayBoard.o

isSafe.o: isSafe.c header.h
	gcc -c isSafe.c -o $(ob)\isSafe.o

main.o: main.c header.h
	gcc -c main.c -o $(ob)\main.o


numUnassigned.o: numUnassigned.c header.h
	gcc -c numUnassigned.c -o $(ob)\numUnassigned.o


solveBoard.o: solveBoard.c header.h
	gcc -c solveBoard.c -o $(ob)\solveBoard.o
