ALUSimulator: ALUSimulator_Main.o RegisterFile_01.o ALUSimulator.o
	cc -o ALUSimulator ALUSimulator_Main.o RegisterFile_01.o ALUSimulator.o

ALUSimulator_Main.o: ALUSimulator_Main.c RegisterFile_01.h ALUSimulator.h
	cc -c ALUSimulator_Main.c

RegisterFile_01.o: RegisterFile_01.c RegisterFile_01.h
	cc -c RegisterFile_01.c

ALUSimulator.o: ALUSimulator.c ALUSimulator.h
	cc -c ALUSimulator.c
		
clean:
	rm -f *.o *~ ALUSimulator
	
