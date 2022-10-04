#include "A.h"
#include "B.h"

void B::testA()
{
	a->test();
}

void B::test()
{
	printf("B test\n");
}