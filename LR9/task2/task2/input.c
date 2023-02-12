#include "input.h"

void file_init(FILE** file, int argc, char** argv)
{
    fopen_s(file, argv[1], "wb+");

    for (int i = 2; i < argc; i++)
    {
        fwrite(argv[i], strlen(argv[i]), 1, *file);
        fwrite(" ", 1, 1, *file);
    }
}
