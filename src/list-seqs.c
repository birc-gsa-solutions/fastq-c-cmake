#include <stdio.h>

#include "fastq.h"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: list-seqs fastq-file\n");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (!f)
    {
        fprintf(stderr, "Couldn't open %s\n", argv[1]);
        perror("Error:");
        return 1;
    }

    struct fastq_rec rec;
    while (next_fastq_rec(f, &rec))
    {
        printf("%s\n", rec.seq);
    }

    fclose(f);

    return 0;
}
