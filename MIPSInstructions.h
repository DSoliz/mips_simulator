//*****************************************************************************
//
//	Program:		MIPSInstructions.h
//	Author:			Dilesh Fernando <fernando.dilesh@gmail.com>
//	Date:			2017-04-21
//	Description:	A program to simulate MIPS Instructions.
//
//*****************************************************************************

#include <stdint.h>

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

#endif __MIPSInstructions_H_
