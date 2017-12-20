
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <inttypes.h>
#include <time.h>
#include <sys/time.h>

#include "syscalls.h"
#include "values.h"

#define ITERATIONS_PER_SEED 0x100

//#define do_syscall_1(eax, ebx) \
//	do_syscall(eax, ebx, 0, 0, 0, 0)
#define do_syscall_2(eax, ebx, ecx) \
	do_syscall(eax, ebx, ecx, 0, 0, 0)
#define do_syscall_3(eax, ebx, ecx, edx) \
	do_syscall(eax, ebx, ecx, edx, 0, 0)
#define do_syscall_4(eax, ebx, ecx, edx, esi) \
	do_syscall(eax, ebx, ecx, edx, esi, 0)
#define do_syscall_5(eax, ebx, ecx, edx, esi, edi) \
	do_syscall(eax, ebx, ecx, edx, esi, edi)

void do_syscall(uint32_t eax, uint32_t ebx, uint32_t ecx, uint32_t edx, uint32_t esi, uint32_t edi) {

	__asm__ volatile (
		"movl	%0, %%eax;"
		"movl	%1, %%ebx;"
		"movl	%2, %%ecx;"
		"movl	%3, %%edx;"
		"movl	%4, %%esi;"
		"movl	%5, %%edi;"
		"int	$0x80;"
		:
		: "m"(eax), "m"(ebx), "m"(ecx), "m"(edx), "m"(esi), "m"(edi)
		: "%eax", "%ebx", "%ecx", "%edx", "%esi", "%edi"
	);

}

uint32_t ropt() {

	return fuzz_values[rand() % fuzz_values_len + 1];

}

uint32_t rsc(int paramcount) {

	switch(paramcount) {

//		case 1: return syscalls_1[rand() % syscalls_1_len + 1];
		case 2: return syscalls_2[rand() % syscalls_2_len + 1];
		case 3: return syscalls_3[rand() % syscalls_3_len + 1];
		case 4: return syscalls_4[rand() % syscalls_4_len + 1];
		case 5: return syscalls_5[rand() % syscalls_5_len + 1];

	}

}

int main(int argc, char *argv[]) {

	FILE *logfp;
	uint32_t seed;
	int i, counter;
	struct timeval tv;

	if(argc != 2) {

		printf("Usage: %s <logfile>\n", argv[0]);

		return 0;

	}

	logfp = fopen(argv[1], "w+");

	if(!logfp) {

		printf("Failed to open logfile for writting\n");

		return 0;

	}

	gettimeofday(&tv, NULL);
	seed = tv.tv_usec << 16 | getpid();

	printf("Fuzzing with random seed: 0x%08x\n", seed);
	fprintf(logfp, "Fuzzing with random seed: 0x%08x\n", seed);
	fflush(logfp);

	srand(seed);

	for(counter=0; counter<ITERATIONS_PER_SEED; counter++) {

		switch(rand() % 4 + 2) {

//			case 1:
//				do_syscall_1(rsc(1), ropt());
//				break;

			case 2:
				do_syscall_2(rsc(2), ropt(), ropt());
				break;

			case 3:
				do_syscall_3(rsc(3), ropt(), ropt(), ropt());
				break;

			case 4:
				do_syscall_4(rsc(4), ropt(), ropt(), ropt(), ropt());
				break;

			case 5:
				do_syscall_5(rsc(5), ropt(), ropt(), ropt(), ropt(), ropt());
				break;

		}

	}

}

