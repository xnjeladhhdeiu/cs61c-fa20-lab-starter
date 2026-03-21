#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
	uint16_t mask = 0;
	uint16_t copy = *reg;
	mask = mask ^ copy;
	mask = mask ^ (copy >> 2);
	mask = mask ^ (copy >> 3);
	mask = mask ^ (copy >> 5);
	mask = mask & 1;
	*reg = (*reg >> 1) | (mask << 15);
}


