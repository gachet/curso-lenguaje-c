#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <limits.h>
#include <signal.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <ctype.h>

#define PUBLIC  "/tmp/UPCASE2_PIPE"
#define HALF_PIPE_BUF (PIPE_BUF/2)

typedef struct _message {
    char raw_text_fifo[HALF_PIPE_BUF];
    char converted_text_fifo[HALF_PIPE_BUF];      
} message;
