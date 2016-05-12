
#include <stdio.h>

using namespace std;

int main() {

  FILE * in;
  FILE * out = fopen("addr.txt", "w");

  char filename[6];
  char bits[16];
  int letter;

  for(int k = 65; k < 91; k++) {
    letter = k;
    snprintf(filename, 6, "%c.txt", k);
    in = fopen(filename, "r");

    for(int i = 1; i <= 31; i++) {
      // printf("\n11'b%u%u%u%u%u%u%u_%u%u%u%u: pixels <= ",
      //   letter/64%2, letter/32%2, letter/16%2, letter/8%2, letter/4%2, letter/2%2, letter%2,
      //   i/8%2, i/4%2, i/2%2, i%2);

      // fgets(bits, sizeof(bits), in);
      // fgetc(in);
      bits = fgetline(in, 16);
      printf("%s;\n", bits);

      // printf(";");
      // fgetc(in);
    }

    fclose(in);
  }

  fclose(out);

  return 0;
}
