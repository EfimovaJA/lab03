#include "histogram.h"
#include <cassert>

void test_positive()
{
    double min = 0;
    double max = 0;
    find_minmax({1, 2, 3}, min, max);
    assert(min == 1);
    assert(max == 3);
}
void test_negative()
{
    double min = 0;
    double max = -9999;
    find_minmax({-1, -2, -3}, min, max);
    assert(min == -3);
    assert(max == -1);
}

void test_simular()
{
    double min = 0;
    double max = 0;
    find_minmax({3, 3, 3}, min, max);
    assert(min == 3);
    assert(max == 3);
}

void test_one()
{
    double min = 0;
    double max = 0;
    find_minmax({1}, min, max);
    assert(min == 1);
    assert(max == 1);
}

void test_null()
{
    double min = 0;
    double max = 0;
    find_minmax({}, min, max);
    assert(min == 0);
    assert(max == 0);
}
//
void test_no_numbers()
{
	size_t number_count = 0;
	procent ( number_count, {}) ;
	assert (number_count ==0);
}

void test_same ()
{
	size_t number_count = 5;
	procent ( number_count, {4, 4, 4, 4, 4}) ;
	assert (number_count ==5);
}


int main()
{
    test_positive();
    test_negative();
    test_simular();
    test_one();
	test_null();
}
