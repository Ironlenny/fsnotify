#include "../src/notify.h"

void test_notify_addWatch () {
  char testPath[] = "/tmp/foo";
    
  notify_addWatch ( testPath, IN_ALL_EVENTS );
  printf ( "Watch added.");
}

int main () {
  test_notify_addWatch();

  return 0;
}
