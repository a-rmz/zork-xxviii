
#include <stdio.h>

using namespace std;

int main() {

  FILE * out = fopen("font_rom.txt", "w");
  FILE * in = fopen("rom.txt", "r");

  int ch;

  // ' ', '"', ',', '.', '?'
  char rom [61] = {' ', '"', ',', '.', '?',
    'A', 'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
    'Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y',
    'z'};

  char c;
  char line[25];
  char jline[25];

  for(int j = 0; /*fgets(jline, sizeof(jline), in)*/ j < 61 ; j++) {
    // printf("%s", jline);
    int actual = rom[j];
    // printf(/*out, */"11'b0000_XXXXXXXX: pixels <= 8'b%s",
    //   actual/128%2, actual/64%2, actual/32%2, actual/16%2, actual/8%2, actual/4%2, actual/2%2, actual%2
    //   jline);
    fgets(line, sizeof(line), in);
    for(int i = 0; i < 16; i++) {
      fgets(line, sizeof(line), in);
      fprintf(out, "11'b%u%u%u%u%u%u%u%u_%u%u%u%u: pixels <= 8'b%s",
        actual/128%2, actual/64%2, actual/32%2, actual/16%2, actual/8%2, actual/4%2, actual/2%2, actual%2,
        i/8%2, i/4%2, i/2%2, i%2,
        line);
      // printf("%s", line);
    }
    // fgets(line, sizeof(line), in);
    fprintf(out, "\n");
    // printf("\n");
  }


  fclose(out);
  fclose(in);

  return 0;
}
