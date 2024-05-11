#include <stdio.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

#include "humidityDriver.h"

void SetUp(void)
{
    srand(time(NULL));
}

void tearDown(void)
{
    // Do nothing
}
/*
void test_humidityDriver_initDriver(void)
{
    humidityDriver_initDriver(0);
}

void test_humidityDriver_test_getVoltage(void)
{
    int r = (rand() % (50 - 0 + 1));
    return ((double)r + 0.5) / 10.0;
}
*/
int main(void)
{
    SetUp();
    tearDown();
    return 0;
}