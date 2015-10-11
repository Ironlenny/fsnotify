#include "../src/notify.h"

void test_notify_addWatch () {
  char testPath[] = "/tmp/foo";
    
  if (!notify_addWatch ( testPath, IN_ALL_EVENTS )) {
    printf ( "Test failed!" );
  }
  printf ( "Test passed!");
}

int main () {
  test_notify_addWatch();

  return 0;
}
