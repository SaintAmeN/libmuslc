/* @LICENSE(MUSLC_MIT) */

#define _GNU_SOURCE
#include <sys/wait.h>
#include <sys/resource.h>
#include <string.h>
#include "internal/syscall.h"

pid_t wait4(pid_t pid, int *status, int options, struct rusage *usage)
{
	return syscall(SYS_wait4, pid, status, options, usage);
}
