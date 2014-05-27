/*
 * calculations.c
 *	Taking averages, running averages, means, filling arrays, etc.
 * Created: 5/25/2014 9:30:54 PM
 *  Author: Paul Miller
 */ 

#include "lan.h"
#include "adc.h"

// 'samples' should be the array name, and not any single element
// this passes the address of the first element of the array to the function
// which means it updates the variable by reference, not value
void fill_mean_array_vbatt(unsigned int samples, unsigned int arraysize)
{
	unsigned int i;
	for(i = 0, i <= arraysize - 1; i++)
	samples[i] = adc_read_vbatt();
}

void fill_mean_array_ibatt(unsigned int samples, unsigned int arraysize)
{
	unsigned int i;
	for(i = 0, i <= arraysize - 1; i++)
	samples[i] = adc_read_ibatt();
}

