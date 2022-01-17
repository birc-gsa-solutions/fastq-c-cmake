#include "fastq.h"

#include <string.h>

bool next_fastq_rec(FILE *f, struct fastq_rec *rec)
{
    static char buf[MAX_STRING_LEN];

    if (fgets(buf, MAX_STRING_LEN, f) == NULL)
        return false;
    strcpy(rec->name, strtok(buf + 1, "\n"));

    if (fgets(buf, MAX_STRING_LEN, f) == NULL)
        return false;
    strcpy(rec->seq, strtok(buf, "\n"));

    return true;
}