/* @LICENSE(MUSLC_MIT) */

#include <unistd.h>
#include "internal/syscall.h"

int symlink(const char *existing, const char *new)
{
	return syscall(SYS_symlink, existing, new);
}
