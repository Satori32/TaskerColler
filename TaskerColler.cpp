#include "TaskerColler.h" 

template<class CHAR, size_t N>
Characters ConstructCharacters<CHAR, N>() {
	Characters C = { CHAR,N };

	return C;
}

bool New(Characters& In, In::C* B) {
	In::C X = '\0';
	size_t i = 0;
	In.P = 0;
	for (i = 0; B[i] != X; i++) {
		if (In.Size = < In.P) { break; }
		In.Ch[In.P] = B[i];
		In.P++;
	}
	In.Ch[In.P] = X;
	return true;
}

bool ConCat(Characters& In, In::C* B) {
	In::C X = '\0';
	size_t i = 0;
	//In.P = 0;
	for (i = 0; B[i] != X; i++) {
		if (In.Size = < In.P) { break; }
		In.Ch[In.P] = B[i];
		In.P++;
	}
	In.Ch[In.P] = X;
	return true
}

template<size_t N>
TaskerCollercter ConstructTaskerCollector<N>() {
	TaskerCollercter T = { N };

	return T;
}
template<size_t N>
NimCollecter ConstructNimCollercter<N>() {
	NimCollecter Ni = { N };
	return Ni;
}