//*****************************************************************************
//
//	Program:		ALUSimulator.c
//	Author:			Dilesh Fernando <fernando.dilesh@gmail.com>
//	Date:			2017-04-21
//	Description:	A program to simulate ALU in MIPS.
//
//*****************************************************************************

#include <stdio.h>
#include <stdlib.h>

#include "RegisterFile_01.h"

void ALUSimulator(RegisterFile theRegisterFile, uint32_t OpCode, uint32_t Rs,
		uint32_t Rt, uint32_t Rd, uint32_t ShiftAmt, uint32_t FunctionCode,
		uint32_t ImmediateValue, uint32_t* Status) {

	// Determine type instruction
	if (OpCode == 0) {
		//R-Type instruction
		switch (FunctionCode) {
		case 0:
			//Call function
			break;
		case 0:
			//Call function
			break;
		case 0:
			//Call function
			break;
		case 0:
			//Call function
			break;
		default:
			//Wrong instruction.
			printf("Error: Wrong instruction.\n");
			return (1);
		}
	} else {
		//I-Type instruction
		switch (FunctionCode) {
		case 0:
			//Call function
			break;
		case 0:
			//Call function
			break;
		case 0:
			//Call function
			break;
		case 0:
			//Call function
			break;
		default:
			//Wrong instruction.
			printf("Error: Wrong instruction.\n");
			return (1);
		}
	}
	/**
	 * Main program that simulate ALU
	 */
	int main(int argc, char* argv[]) {
		/*
		 (1) initialize the contents of the RegisterFile.

		 Register Number		Conventional Name		Usage
		 $0					$zero					Hard-wired to 0
		 $1					$at						Reserved for pseudo-instructions
		 $2 - $3				$v0, $v1				Return values from functions
		 $4 - $7				$a0 - $a3				Arguments to functions - not preserved by subprograms
		 $8 - $15			$t0 - $t7				Temporary data, not preserved by subprograms
		 $16 - $23			$s0 - $s7				Saved registers, preserved by subprograms
		 $24 - $25			$t8 - $t9				More temporary registers, not preserved by subprograms
		 $26 - $27			$k0 - $k1				Reserved for kernel. Do not use.
		 $28					$gp						Global Area Pointer (base of global data segment)
		 $29					$sp						Stack Pointer
		 $30					$fp						Frame Pointer
		 $31					$ra						Return Address

		 $f0 - $f3	-	Floating point return values
		 $f4 - $f10	-	Temporary registers, not preserved by subprograms
		 $f12 - $f14	-	First two arguments to subprograms, not preserved by subprograms
		 $f16 - $f18	-	More temporary registers, not preserved by subprograms
		 $f20 - $f31	-	Saved registers, preserved by subprograms
		 */

		RegisterFile theRegisterFile;
		uint32_t instruction;

		//(2) load a list of instructions from a file.
		char * filename; // Name of command line input filename
		FILE *ptr_file;

		// Open file in read mode
		ptr_file = fopen(filename, "rb");

		// Check the file is valid
		if (!ptr_file) {
			printf("Error: Unable to Open File!\n");
			return (1);
		}

		// Set file cursor to the beginning of the file
		fseek(ptr_file, 0, SEEK_SET);

		//(2.1)Bit shift the instruction to get opcode, rs, rs, rtd, etc...

		uint32_t OpCode;
		uint32_t Rs;
		uint32_t Rt;
		uint32_t Rd;
		uint32_t ShiftAmt;
		uint32_t FunctionCode;
		uint32_t ImmediateValue;
		uint32_t * Status;

		// Main loop, read data from file and insert to cache
		while (fread(&instruction, sizeof(int), 1, ptr_file) == 1) {

			//(2.1)Bit shift the instruction to get opcode, rs, rs, rtd, etc...
			OpCode = instruction >> 26;

			if (OpCode == 0) {
				//R type instruction
				//Set remaining values by bit shifting R type address
				uint32_t Rs = instruction >> 26;
				uint32_t Rt = instruction >> 26;
				uint32_t Rd = instruction >> 26;
				uint32_t ShiftAmt = instruction >> 26;
				uint32_t FunctionCode = instruction >> 26;
				uint32_t ImmediateValue = instruction >> 26;
				uint32_t * Status = instruction >> 26;
			} else {
				//I type instruction
				////Set remaining values by bit shifting I type address
				uint32_t Rs = instruction >> 26;
				uint32_t Rt = instruction >> 26;
				uint32_t Rd = instruction >> 26;
				uint32_t ShiftAmt = instruction >> 26;
				uint32_t FunctionCode = instruction >> 26;
				uint32_t ImmediateValue = instruction >> 26;
				uint32_t * Status = instruction >> 26;
			}

			//(3) for each instruction call your ALUSimulator.
		ALUSimulator( RegisterFile theRegisterFile,
				uint32_t OpCode,
				uint32_t Rs, uint32_t Rt, uint32_t Rd,
				uint32_t ShiftAmt,
				uint32_t FunctionCode,
				uint32_t ImmediateValue,
				uint32_t* Status );

	} //End of while

	//(4) dump the contents of the Register.
	RegisterFile_Dump( RegisterFile theRegisterFile );

	return (0);
} //End of main.
