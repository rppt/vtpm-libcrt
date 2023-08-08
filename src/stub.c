/* SPDX-License-Identifier: MIT */

#include <stdio.h>
#include <CrtLibSupport.h>

#define NOT_IMPLEMENTED printf("BUG: %s not implemented\n", __func__)

void setbuf(FILE *stream, char *buf)
{
    NOT_IMPLEMENTED;
}

// dirent.h

DIR *opendir(const char *name)
{
    NOT_IMPLEMENTED;
    return NULL;
}

int closedir(DIR *name)
{
    NOT_IMPLEMENTED;
    return -1;
}

struct dirent *readdir(DIR *name)
{
    NOT_IMPLEMENTED;
    return NULL;
}

// sys/stat.h

int stat(const char *__restrict path, struct stat *restrict buf)
{
    NOT_IMPLEMENTED;
    return -1;
}
