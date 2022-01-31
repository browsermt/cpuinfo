#pragma once

#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>

#define cpuinfo_log_debug(...)
#define cpuinfo_log_warning(...)
#define cpuinfo_log_info(...)
#define cpuinfo_log_error(...)
#define cpuinfo_log_fatal(message, ...) \
  fprintf(stderr, "%s\n", message); \
  abort();
