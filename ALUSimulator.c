//*****************************************************************************
//--ALUSimulator.c
//
//		Author: 		Gary J. Minden
//		Organization:	KU/EECS/EECS 645
//		Date:			2017-04-22 (B70422)
//		Version:		1.0
//		Description:	This is the test standin for a simple ALU simulator
//		Notes:
//
//*****************************************************************************
//

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include <stdio.h>

#include "RegisterFile_01.h"
#include "ALUSimulator.h"
#include "MIPSInstructions.h"

extern void ALUSimulator(RegisterFile theRegisterFile, uint32_t OpCode,
		uint32_t Rs, uint32_t Rt, uint32_t Rd, uint32_t ShiftAmt,
		uint32_t FunctionCode, uint32_t ImmediateValue, uint32_t* Status) {

	printf(ANSI_COLOR_YELLOW ">>ALU: Opcode: %d Function Code: %d" ANSI_COLOR_RESET "\n", OpCode, FunctionCode);

	printf(">>ALU: Opcode: %02X; Rs: %02X; Rt: %02X; Rd: %02X;\n", OpCode, Rs,
			Rt, Rd);

	printf(
			">>>>ALU: ShiftAmt: %02X; FunctionCode: %02X; ImmediateValue: %04X;\n",
			ShiftAmt, FunctionCode, ImmediateValue);

	// Determine type instruction
	// If OpCode is 0, its R type instruction else I type instruction
	if (OpCode == 0) {
		//R-Type instruction
		switch (FunctionCode) {
		case 0:
			NOOP();
			break;
		//Note SLL has opcode 0 as well as NOOP.
		case 1:
			SLL();
			break;
		case 2:
			SRL();
			break;
		case 3:
			SRA();
			break;
		case 4:
			SLLV();
			break;
		case 6:
			SRLV();
			break;
		case 16:
			MFHI();
			break;
		case 18:
			MFLO();
			break;
		case 24:
			MULT();
			break;
		case 25:
			MULTU();
			break;
		case 26:
			DIV();
			break;
		case 27:
			DIVU();
			break;
		case 32:
			ADD();
			break;
		case 33:
			ADDU();
			break;
		case 34:
			SUB();
			break;
		case 35:
			SUBU();
			break;
		case 36:
			AND();
			break;
		case 37:
			OR();
			break;
		case 38:
			XOR();
			break;
		case 42:
			SLT();
			break;
		case 43:
			SLTU();
			break;
		default:
			//Wrong instruction.
			printf(ANSI_COLOR_RED_BACK "Error: Wrong instruction." ANSI_COLOR_RESET "\n");
			//return (1);
		}
	} else {
		//I-Type instruction
		switch (OpCode) {
		case 8:
			ADDI();
			break;
		case 9:
			ADDIU();
			break;
		case 10:
			SLTI();
			break;
		case 11:
			SLTIU();
			break;
		default:
			//Wrong instruction.
			printf(ANSI_COLOR_RED_BACK "Error: Wrong instruction." ANSI_COLOR_RESET "\n");
			//return (1);
		}
	}

} //End of ALUSimulator function

