#pragma once
#include <stdio.h>
#include <stdint.h>

//>,<.+,-,'.',',',[,]  and other.

struct BCode {
	//type C = NULL;
	typedef unsigned char C;
	//type Cpde;

	const size_t Size = 1;
	C/*ode*/ Text[Size] = { 0, };
	size_t CodePointer = 0;
	//size_t MemoryPointer = 0;
	size_t ProgramCounter = 0;
	Buffer Nim;//if you need.
};

struct Buffer {
	//type W = NULL;
	typedef short W;
	//typr Word = short;
	const size_t Size = 1;
	W/*ord*/ Memoy[Size] = { 0, };
	size_t Pointer = 0;
};

struct SystemBrainFuck {
	BCode Text;
	//BCode Mirror;
	Buffer Chash;
	Buffer Memry;
	Buffer Strage;
	Buffer Out;
	Buffer In;
	Buffer Temporaly;
};

template<class T, size_t N> BCode ConstructBCode<T, N>();
bool Free(BCode& In);

template<class T, size_t N> Buffer ConstructBuffer<T, N>();
bool Free(Buffer& In);

