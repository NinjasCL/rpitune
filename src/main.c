#include <stdio.h>
#include "player.h"
#include "song.h"

int main(int argc, char *argv[]) {
    // ./tune <SONG> --verbose
    // Example:
    // cat docs/songs/mix1/surfin.txt | xargs ./tune
    char * song = SONG;
    if (argc > 1) {
        song = argv[1];
    }

    if (argc > 2) {
        printf("Playing: %s", song);
    }
    setup();
    play(song);
    return 0;
}