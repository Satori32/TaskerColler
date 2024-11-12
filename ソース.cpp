#include <stdio.h>
#include <stdint.h>

#include "BrainFuck.h"

struct Characters {
	//type C = NULL;
	typedef char C;
	//type CHAR = C;
	const size_t Size = 1;
	C Ch[Size+2] = { 0, };//Last CHAR need \0. Like lang c.
	size_t P = 0;
};
template<class CHAR,size_t N>
Characters ConstructCharacters<CHAR,N>() {
	Characters C = { CHAR,N };

	return C;
}

bool New(Characters& In, In::C* B) {
	In::C X = '\0';
	size_t i = 0;
	In.P = 0;
	for (i = 0; B[i] != X; i++) {
		if (In.Size =< In.P) { break; }
		In.Ch[In.P] = B[i];
		In.P++;
	}
	In.Ch[In.P] = X;
	return true;
}

bool ConCat(Characters& In,In::C* B){
	In::C X = '\0';
	size_t i = 0;
	//In.P = 0;
	for (i = 0; B[i] != X; i++) {
		if (In.Size =< In.P) { break; }
		In.Ch[In.P] = B[i];
		In.P++;
	}
	In.Ch[In.P] = X;
	return true
}

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
template<size_t N>
TaskerCollercter ConstructTaskerCollector<N>() {
	TaskerCollercter T = { N };

	return T;
}

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
	Nim Word[Size] = {0,};
};
template<size_t N>
NimCollecter ConstructNimCollercter<N>() {
	NimCollecter Ni = { N };
	return Ni;
}

struct TaskerCallerPlus{
	TaskerCaller Tasker;
	SystemBrainFuck BF;
	NimCollecter Nims;
	intmax_t Counter = 0;
}