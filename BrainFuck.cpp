#include"BrainFuck.h"

template<class T, size_t N>
BCode ConstructBCode<T, N>() {
	BCode B = { T,N };
	return B:
}
bool Free(BCode& In) {
	Free(In);
	return true;
}
template<class T, size_t N>
Buffer ConstructBuffer<T, N>() {
	Buffer B = { T,N };

	return B;
}
bool Free(Buffer& In) {
	Free(In);

	return true;
}
