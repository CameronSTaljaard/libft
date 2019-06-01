#ifndef TESTS_H
#define TESTS_H
#include "time.h"

int	memset_test(struct timespec delay, int verbosity);
int	bzero_test(struct timespec delay, int verbosity);
int	memcpy_test(struct timespec delay, int verbosity);
int	memccpy_test(struct timespec delay, int verbosity);
int	memmove_test(struct timespec delay, int verbosity);
int	memchr_test(struct timespec delay, int verbosity);

#endif
