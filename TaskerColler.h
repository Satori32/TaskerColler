#pragma once
#include <stdio.h>
#include <stdint.h>

#include "BrainFuck.h"

struct Characters {
	//type C = NULL;
	typedef char C;
	//type CHAR = C;
	const size_t Size = 1;
	C Ch[Size + 2] = { 0, };//Last CHAR need \0. Like lang c.
	size_t P = 0;
};
struct Tasker {
	Characters CodeName;
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	Type Info;
	SystemBrainFuck BF;
};
struct TaskerCollercter {
	const size_t Size = 1;
	Tasker T[Size] = { 0, };
};
struct TaskerCaller {
	TaskerCollercter List;
	Characters Task;
	intmax_t Counter = 0;
};

struct Nim {
	Characters Name;
	Characters Code;
	Characters Param;
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	Type Effect;

};

struct NimCollecter {
	const size_t Size = 1;
	Nim Word[Size] = { 0, };
};
struct TaskerCallerPlus {
	TaskerCaller Tasker;
	SystemBrainFuck BF;
	NimCollecter Nims;
	intmax_t Counter = 0;
}

template<class CHAR, size_t N> Characters ConstructCharacters<CHAR, N>();
bool New(Characters& In, In::C* B);
bool ConCat(Characters& In, In::C* B);
template<size_t N> TaskerCollercter ConstructTaskerCollector<N>();
template<size_t N> NimCollecter ConstructNimCollercter<N>();