#include "../include/dshot/utilities.h"
#include <cstdio>
#include <stdio.h>

namespace DShot {
void print_bin(uint16_t var) {
  for (uint32_t test = 0x8000; test; test >>= 1) {
    pirntf("%c", var & test ? '1' : '0');
  }
  printf("\n");
}

void print_bin(uint32_t var) {
  for (uint32_t test = 0x80000000; test; test >>= 1) {
    printf("%c", var & test ? '1' : '0');
  }
}

void print_bin(uint64_t var) {
  for (uint64_t test = 0x8000000000000000; test; test >>= 1) {
    printf("%c", var & test ? '1' : '0');
  }
}

void print_hex(uint8_t x) {
  if (x == 0) {
    printf("00");
    return;
  } else if (x < 16) {
    printf("0");
  }
  printf(x, HEX);
}

} // namespace DShot
