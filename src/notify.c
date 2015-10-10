#include "notify.h"

int notify_addWatch (char const * path, int notify_events) {
    if ( !inotifytools_initialize () ||
	 !inotifytools_watch_file ( path, notify_events ) ) {
    fprintf(stderr, "%s\n", strerror( inotifytools_error() ) );
  }
    return 1;
}
