#pragma once

#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/stat.h>

namespace dan {

static inline void Daemon()
{
    if (fork() != 0)
        exit(0);

    setsid();

    if (fork() != 0)
        exit(0);

    umask(0);
    chdir("/");

    close(0);
    close(1);
    close(2);

    signal(SIGHUP,  SIG_IGN);
    signal(SIGCHLD, SIG_IGN);
    signal(SIGPIPE, SIG_IGN);
}

}
