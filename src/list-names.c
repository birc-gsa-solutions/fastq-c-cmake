#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: list-names fastq-file\n");
        return 1;
    }

    const char *fastq_fname = argv[1];
    printf("I should be parsing %s now, but someone forgot to implement that.\n",
           fastq_fname);

    return 1;
}
