#include "B.h"
#include "A.h"


void A::testB()
{
	b->test();
}

void A::test()
{
	printf("A test\n");
}