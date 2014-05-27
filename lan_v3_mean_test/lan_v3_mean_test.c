/*
 * lan_v3_mean_test.c
 *
 * Created: 5/24/2014 9:27:37 PM
 *  Author: Paul Miller
 */ 

#include "lan.h"
#include "adc.h"

int main(void)
{
	setup();
	for(;;)
	{
		loop();
	}
}