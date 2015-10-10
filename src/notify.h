#include <inotifytools/inotify.h>
#include <inotifytools/inotifytools.h>
#include <stdio.h>
#include <string.h>

void notify_initialize();

int notify_addWatch(char const * path, int notify_events);

int notify_removeWatch();

char const * notify_getHistory();

void notify_liveWatch();
