#ifndef FASTQ_H
#define FASTQ_H

#include <stdbool.h>
#include <stdio.h>

// This is a bit ugly, but it also saves a little time to fix
// the strings so I don't have to alloc and dealloc more than
// necessary
#define MAX_STRING_LEN 1000
struct fastq_rec
{
    char name[MAX_STRING_LEN];
    char seq[MAX_STRING_LEN];
};

bool next_fastq_rec(FILE *f, struct fastq_rec *rec);

#endif // FASTQ_H
