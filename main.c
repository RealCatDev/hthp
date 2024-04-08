#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 3) {
    fprintf(stderr, "Usage: %s <input> <output>\n", argv[0]);
    return 1;
  }

  FILE *fIn = NULL, *fOut = NULL;
  if (!(fIn = fopen(argv[1], "rb"))) {
    fprintf(stderr, "[ERROR] Failed to open file %s\n", argv[1]);
    return 1;
  }

  if (!(fOut = fopen(argv[2], "wb"))) {
    fprintf(stderr, "[ERROR] Failed to open file %s\n", argv[1]);
    fclose(fIn);
    return 1;
  }

  fseek(fIn, 0, SEEK_END);
  long size = ftell(fIn);
  fseek(fIn, 0, SEEK_SET);

  char *buf = malloc(size);
  fread(buf, size, 1, fIn);

  fclose(fIn);

  fwrite(buf, size, 1, fOut);

  free(buf);
  fclose(fOut);

  return 0;
}