#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>

#define FUZZ_BUFFER_SIZE 0x10000
#define FUZZ_BUFFER_BYTE 0xcc

uint8_t *fuzz_buffer;

uint32_t fuzz_values[] = {
	0,
	-1,
	INT_MAX,
	INT_MIN,
	UINT_MAX,
	0 // fuzz_buffer
};
int fuzz_values_len = 6;

void __attribute__((constructor)) init_fuzz_buffer() {

	int i;

	fuzz_buffer = malloc(FUZZ_BUFFER_SIZE);

	if(!fuzz_buffer)
		exit(-1);

	for(i=0; i<FUZZ_BUFFER_SIZE; i++) {

		fuzz_buffer[i] = FUZZ_BUFFER_BYTE;

	}

	fuzz_values[5] = (uint32_t)fuzz_buffer;

}