#include "udp6.h"
  
int main() {
  V6Send("2001:face::6cf2:65e:bd1b:a532", "2001:face::1acf:5eff:fe37:d8a9","d8:eb:97:29:c1:61", 4950, 4950);
  return 0;
}
