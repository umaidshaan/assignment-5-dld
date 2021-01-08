#include <stdio.h>

int main(void) {
  unsigned char A = 0x01, B = 0x01, C = 0x00, D = 0x00;
  unsigned char e, one = 0x01;

  e = (A & (~B) & (~C) & (~D)) | (A & B & (~C) & (~D)) | ((~A) & (~B) & C & (~D)) | (A & (~B) & C & (~D)) | (A & B & C & (~D)) | (A & (~B) & (~C) & D);

  printf("e = %x\n", e & one);
  return 0;
}
