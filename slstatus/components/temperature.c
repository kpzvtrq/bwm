#include <stdio.h>
#include <sys/types.h>
#include <sys/sysctl.h>
#include "../util.h"

const char *
temp(const char *zone)
{
	int temp_int;
	size_t len = sizeof(temp_int);
	const char *name = zone ? zone : "dev.cpu.0.temperature";

	if (sysctlbyname(name, &temp_int, &len, NULL, 0) < 0) {
		return NULL;
	}

	return bprintf("%d", (temp_int - 2731) / 10);
}
