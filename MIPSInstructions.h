//*****************************************************************************
//
//	Program:		MIPSInstructions.h
//	Author:			Dilesh Fernando <fernando.dilesh@gmail.com>
//					Cheng-Yeh Lee <chengyeh90@gmail.com>
//					Vuong Nguyen <nptvuong2912@gmail.com>
//					Diego Soliz Castro <zilosgodi@gmail.com>
//	Date:			2017-04-21
//	Description:	A program to simulate MIPS Instructions.
//
//*****************************************************************************

#include <stdint.h>

#define ANSI_COLOR_RED_BACK "\x1b[41m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#ifndef __MIPSInstructions_H_
#define __MIPSInstructions_H_

extern void NOOP();

extern void SLL();

extern void SRL();

extern void SRA();

extern void SLLV();

extern void SRLV();

extern void MFHI();

extern void MFLO();

extern void MULT();

extern void MULTU();

extern void DIV();

extern void DIVU();

extern void ADD();

extern void ADDU();

extern void SUB();

extern void SUBU();

extern void AND();

extern void OR();

extern void XOR();

extern void SLT();

extern void SLTU();

extern void ADDI();

extern void ADDIU();

extern void SLTI();

extern void SLTIU();

#endif  // __MIPSInstructions_H_
