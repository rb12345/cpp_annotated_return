#include <cstdlib>
#include <cstdio>

template <class T, class U>
struct AnnotatedReturn {
	T errorCode;
	U returnValue;
};

AnnotatedReturn<int, float> foo() {
	struct AnnotatedReturn<int, float> x;
	x.errorCode = 0;
	x.returnValue = 3.14159;
	return x;
}

int main(int argc, char* argv[]) {
	AnnotatedReturn<int,float> x = foo();
	printf("%.2f\n", x.returnValue);
	return 0;
}
