#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "b64.h"

int verify(char *flag) {
  if(strlen(flag) != 52) return 0;
  if(flag[13] != 87) return 0;
  if(flag[12] != 100) return 0;
  if(flag[41] != 51) return 0;
  if(flag[11] != 48) return 0;
  if(flag[40] != 98) return 0;
  if(flag[27] != 108) return 0;
  if(flag[48] != 98) return 0;
  if(flag[22] != 108) return 0;
  if(flag[36] != 98) return 0;
  if(flag[2] != 120) return 0;
  if(flag[9] != 51) return 0;
  if(flag[10] != 74) return 0;
  if(flag[7] != 116) return 0;
  if(flag[37] != 87) return 0;
  if(flag[30] != 78) return 0;
  if(flag[49] != 110) return 0;
  if(flag[45] != 71) return 0;
  if(flag[14] != 70) return 0;
  if(flag[32] != 89) return 0;
  if(flag[38] != 86) return 0;
  if(flag[43] != 104) return 0;
  if(flag[19] != 109) return 0;
  if(flag[28] != 98) return 0;
  if(flag[33] != 50) return 0;
  if(flag[0] != 90) return 0;
  if(flag[50] != 78) return 0;
  if(flag[4] != 90) return 0;
  if(flag[8] != 98) return 0;
  if(flag[24] != 97) return 0;
  if(flag[26] != 86) return 0;
  if(flag[18] != 57) return 0;
  if(flag[5] != 51) return 0;
  if(flag[17] != 86) return 0;
  if(flag[44] != 100) return 0;
  if(flag[47] != 118) return 0;
  if(flag[6] != 116) return 0;
  if(flag[15] != 121) return 0;
  if(flag[34] != 57) return 0;
  if(flag[35] != 116) return 0;
  if(flag[29] != 72) return 0;
  if(flag[39] != 116) return 0;
  if(flag[51] != 57) return 0;
  if(flag[20] != 98) return 0;
  if(flag[31] != 102) return 0;
  if(flag[46] != 108) return 0;
  if(flag[25] != 71) return 0;
  if(flag[23] != 51) return 0;
  if(flag[3] != 104) return 0;
  if(flag[21] != 72) return 0;
  if(flag[1] != 109) return 0;
  if(flag[42] != 74) return 0;
  if(flag[16] != 101) return 0;
  return 1;
}

int main(int argc, char **argv) {
  if(argc != 2) {
    printf("Password required\n");
    return 1;
  }
  char *pass = argv[1];
  char *encoded_pass = b64_encode(pass, strlen(pass));

  if(verify(encoded_pass)) {
    printf("Password correct\n");
    return 0;
  } else {
    printf("Password incorrect\n");
    return 1;
  }
}
