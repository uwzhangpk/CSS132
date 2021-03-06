#include <assert.h>
#include <stdlib.h>

int prefix(char * pre, char * str) {
  if (!pre || !str) return 0;
  int i;
  for (i = 0; pre[i]; i++)
    if (pre[i] != str[i])
      return 0;
  return 1;
}

int main() {
  assert (prefix("Milk", "Milkyway"));
  assert (!prefix("milk", "Milkyway"));
  assert (!prefix("ilk", "Milkyway"));
  assert (!prefix(NULL, "Milkyway"));
  assert (!prefix("Milkyway", NULL));
  return 0;
}
