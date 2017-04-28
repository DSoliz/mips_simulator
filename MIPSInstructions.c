//*****************************************************************************
//
//	Program:		MIPSInstructions.c
//	Author:			Dilesh Fernando <fernando.dilesh@gmail.com>
//					Cheng-Yeh Lee <chengyeh90@gmail.com>
//					Vuong Nguyen <nptvuong2912@gmail.com>
//					Diego Soliz Castro <zilosgodi@gmail.com>
//	Date:			2017-04-21
//	Description:	Implementation of MIPS Instructions.
//
//*****************************************************************************

#include <stdio.h>
#include <stdlib.h>

#include "MIPSInstructions.h"

/*
 * NOTE: delete all print statements from each function afters testing.
 */

/*
 NOOP -- no operation
 Description:	Performs no operation.
 Operation: 	advance_pc (4);
 Syntax: 	noop
 Encoding: 	0000 0000 0000 0000 0000 0000 0000 0000
 */
extern void NOOP() {
	printf(ANSI_COLOR_GREEN "000000 000000 R NOOP" ANSI_COLOR_RESET "/n");
}

/*
 SLL -- Shift left logical
 Description:	Shifts a register value left by the shift amount listed in the instruction and places the result in a third register. Zeroes are shifted in.
 Operation: 	$d = $t << h; advance_pc (4);
 Syntax: 	sll $d, $t, h
 Encoding: 	0000 00ss ssst tttt dddd dhhh hh00 0000
 */
extern void SLL() {
	printf(ANSI_COLOR_GREEN "000000 000000 R SLL" ANSI_COLOR_RESET "/n");
}

/*
 SRL -- Shift right logical
 Description:	Shifts a register value right by the shift amount (shamt) and places the value in the destination register. Zeroes are shifted in.
 Operation: 	$d = $t >> h; advance_pc (4);
 Syntax: 	srl $d, $t, h
 Encoding: 	0000 00-- ---t tttt dddd dhhh hh00 0010
 */
extern void SRL() {
	printf(ANSI_COLOR_GREEN "000000 000010 R SRL" ANSI_COLOR_RESET "/n");
}

/*
 SRA -- Shift right arithmetic
 Description:	Shifts a register value right by the shift amount (shamt) and places the value in the destination register. The sign bit is shifted in.
 Operation: 	$d = $t >> h; advance_pc (4);
 Syntax: 	sra $d, $t, h
 Encoding: 	0000 00-- ---t tttt dddd dhhh hh00 0011
 */
extern void SRA() {
	printf(ANSI_COLOR_GREEN "000000 000011 R SRA" ANSI_COLOR_RESET "/n");
}

/*
 SLLV -- Shift left logical variable
 Description:	Shifts a register value left by the value in a second register and places the result in a third register. Zeroes are shifted in.
 Operation: 	$d = $t << $s; advance_pc (4);
 Syntax: 	sllv $d, $t, $s
 Encoding: 	0000 00ss ssst tttt dddd d--- --00 0100
 */
extern void SLLV() {
	printf(ANSI_COLOR_GREEN "000000 000100 R SLLV" ANSI_COLOR_RESET "/n");
}

/*
 SRLV -- Shift right logical variable
 Description:	Shifts a register value right by the amount specified in $s and places the value in the destination register. Zeroes are shifted in.
 Operation: 	$d = $t >> $s; advance_pc (4);
 Syntax: 	srlv $d, $t, $s
 Encoding: 	0000 00ss ssst tttt dddd d000 0000 0110
 */
extern void SRLV() {
	printf(ANSI_COLOR_GREEN "000000 000110 R SRLV" ANSI_COLOR_RESET "/n");
}

/*
 MFHI -- Move from HI
 Description:	The contents of register HI are moved to the specified register.
 Operation: 	$d = $HI; advance_pc (4);
 Syntax: 	mfhi $d
 Encoding: 	0000 0000 0000 0000 dddd d000 0001 0000
 */
extern void MFHI() {
	printf(ANSI_COLOR_GREEN "000000 010000 R MFHI" ANSI_COLOR_RESET "/n");
}

/*
 MFLO -- Move from LO
 Description:	The contents of register LO are moved to the specified register.
 Operation: 	$d = $LO; advance_pc (4);
 Syntax: 	mflo $d
 Encoding: 	0000 0000 0000 0000 dddd d000 0001 0010
 */
extern void MFLO() {
	printf(ANSI_COLOR_GREEN "000000 010010 R MFLO" ANSI_COLOR_RESET "/n");
}

/*
 MULT -- Multiply
 Description:	Multiplies $s by $t and stores the result in $LO.
 Operation: 	$LO = $s * $t; advance_pc (4);
 Syntax: 	mult $s, $t
 Encoding: 	0000 00ss ssst tttt 0000 0000 0001 1000
 */
extern void MULT() {
	printf(ANSI_COLOR_GREEN "000000 011000 R MULT" ANSI_COLOR_RESET "/n");
}

/*
 MULTU -- Multiply unsigned
 Description:	Multiplies $s by $t and stores the result in $LO.
 Operation: 	$LO = $s * $t; advance_pc (4);
 Syntax: 	multu $s, $t
 Encoding: 	0000 00ss ssst tttt 0000 0000 0001 1001
 */
extern void MULTU() {
	printf(ANSI_COLOR_GREEN "000000 011001 R MULTU" ANSI_COLOR_RESET "/n");
}

/*
 DIV -- Divide
 Description:	Divides $s by $t and stores the quotient in $LO and the remainder in $HI
 Operation: 	$LO = $s / $t; $HI = $s % $t; advance_pc (4);
 Syntax: 	div $s, $t
 Encoding: 	0000 00ss ssst tttt 0000 0000 0001 1010
 */
extern void DIV() {
	printf(ANSI_COLOR_GREEN "000000 011010 R DIV" ANSI_COLOR_RESET "/n");
}

/*
 DIVU -- Divide unsigned
 Description:	Divides $s by $t and stores the quotient in $LO and the remainder in $HI
 Operation: 	$LO = $s / $t; $HI = $s % $t; advance_pc (4);
 Syntax: 	divu $s, $t
 Encoding: 	0000 00ss ssst tttt 0000 0000 0001 1011
 */
extern void DIVU() {
	printf(ANSI_COLOR_GREEN "000000 011011 R DIVU" ANSI_COLOR_RESET "/n");
}

/*
 ADD – Add (with overflow)
 Description:	Adds two registers and stores the result in a register
 Operation: 	$d = $s + $t; advance_pc (4);
 Syntax: 	add $d, $s, $t
 Encoding: 	0000 00ss ssst tttt dddd d000 0010 0000
 */
extern void ADD() {
	printf(ANSI_COLOR_GREEN "000000 100000 R ADD" ANSI_COLOR_RESET "/n");
}

/*
 ADDU -- Add unsigned (no overflow)
 Description:	Adds two registers and stores the result in a register
 Operation: 	$d = $s + $t; advance_pc (4);
 Syntax: 	addu $d, $s, $t
 Encoding: 	0000 00ss ssst tttt dddd d000 0010 0001
 */
extern void ADDU() {
	printf(ANSI_COLOR_GREEN "000000 100001 R ADDU" ANSI_COLOR_RESET "/n");
}

/*
 SUB -- Subtract
 Description:	Subtracts two registers and stores the result in a register
 Operation: 	$d = $s - $t; advance_pc (4);
 Syntax: 	sub $d, $s, $t
 Encoding: 	0000 00ss ssst tttt dddd d000 0010 0010
 */
extern void SUB() {
	printf(ANSI_COLOR_GREEN "000000 100010 R SUB" ANSI_COLOR_RESET "/n");
}

/*
 SUBU -- Subtract unsigned
 Description:	Subtracts two registers and stores the result in a register
 Operation: 	$d = $s - $t; advance_pc (4);
 Syntax: 	subu $d, $s, $t
 Encoding: 	0000 00ss ssst tttt dddd d000 0010 0011
 */
extern void SUBU() {
	printf(ANSI_COLOR_GREEN "000000 100011 R SUBU" ANSI_COLOR_RESET "/n");
}

/*
 AND -- Bitwise and
 Description:	Bitwise ands two registers and stores the result in a register
 Operation: 	$d = $s & $t; advance_pc (4);
 Syntax: 	and $d, $s, $t
 Encoding: 	0000 00ss ssst tttt dddd d000 0010 0100
 */
extern void AND() {
	printf(ANSI_COLOR_GREEN "000000 100100 R AND" ANSI_COLOR_RESET "/n");
}

/*
 OR -- Bitwise or
 Description:	Bitwise logical ors two registers and stores the result in a register
 Operation: 	$d = $s | $t; advance_pc (4);
 Syntax: 	or $d, $s, $t
 Encoding: 	0000 00ss ssst tttt dddd d000 0010 0101
 */
extern void OR() {
	printf(ANSI_COLOR_GREEN "000000 100101 R OR" ANSI_COLOR_RESET "/n");
}

/*
 XOR -- Bitwise exclusive or
 Description:	Exclusive ors two registers and stores the result in a register
 Operation: 	$d = $s ^ $t; advance_pc (4);
 Syntax: 	xor $d, $s, $t
 Encoding: 	0000 00ss ssst tttt dddd d--- --10 0110
 */
extern void XOR() {
	printf(ANSI_COLOR_GREEN "000000 100110 R XOR" ANSI_COLOR_RESET "/n");
}

/*
 SLT -- Set on less than (signed)
 Description:	If $s is less than $t, $d is set to one. It gets zero otherwise.
 Operation: 	if $s < $t $d = 1; advance_pc (4); else $d = 0; advance_pc (4);
 Syntax: 	slt $d, $s, $t
 Encoding: 	0000 00ss ssst tttt dddd d000 0010 1010
 */
extern void SLT() {
	printf(ANSI_COLOR_GREEN "000000 101010 R SLT" ANSI_COLOR_RESET "/n");
}

/*
 SLTU -- Set on less than unsigned
 Description:	If $s is less than $t, $d is set to one. It gets zero otherwise.
 Operation: 	if $s < $t $d = 1; advance_pc (4); else $d = 0; advance_pc (4);
 Syntax: 	sltu $d, $s, $t
 Encoding: 	0000 00ss ssst tttt dddd d000 0010 1011
 */
extern void SLTU() {
	printf(ANSI_COLOR_GREEN "000000 101011 R SLTU" ANSI_COLOR_RESET "/n");
}

/*
 ADDI -- Add immediate (with overflow)
 Description:	Adds a register and a sign-extended immediate value and stores the result in a register
 Operation: 	$t = $s + imm; advance_pc (4);
 Syntax: 	addi $t, $s, imm
 Encoding: 	0010 00ss ssst tttt iiii iiii iiii iiii
 */
extern void ADDI() {
	printf(ANSI_COLOR_GREEN "001000 xxxxx I ADDI" ANSI_COLOR_RESET "/n");
}

/*
 ADDIU -- Add immediate unsigned (no overflow)
 Description:	Adds a register and a sign-extended immediate value and stores the result in a register
 Operation: 	$t = $s + imm; advance_pc (4);
 Syntax: 	addiu $t, $s, imm
 Encoding: 	0010 01ss ssst tttt iiii iiii iiii iiii
 */
extern void ADDIU() {
	printf(ANSI_COLOR_GREEN "001001 xxxxx I ADDIU" ANSI_COLOR_RESET "/n");
}

/*
 SLTI -- Set on less than immediate (signed)
 Description:	If $s is less than immediate, $t is set to one. It gets zero otherwise.
 Operation: 	if $s < imm $t = 1; advance_pc (4); else $t = 0; advance_pc (4);
 Syntax: 	slti $t, $s, imm
 Encoding: 	0010 10ss ssst tttt iiii iiii iiii iiii
 */
extern void SLTI() {
	printf(ANSI_COLOR_GREEN "001010 xxxxx I SLTI" ANSI_COLOR_RESET "/n");
}

/*
 SLTIU -- Set on less than immediate unsigned
 Description:	If $s is less than the unsigned immediate, $t is set to one. It gets zero otherwise.
 Operation: 	if $s < imm $t = 1; advance_pc (4); else $t = 0; advance_pc (4);
 Syntax: 	sltiu $t, $s, imm
 Encoding: 	0010 11ss ssst tttt iiii iiii iiii iiii
 */
extern void SLTIU() {
	printf(ANSI_COLOR_GREEN "001011 xxxxx I SLTIU" ANSI_COLOR_RESET "/n");
}
