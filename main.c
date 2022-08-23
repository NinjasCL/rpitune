#include "player.h"
#include "song.h"

int main(int argc, char * argv []) {
    // ./music --verbose
    if (argc > 1) {
        printf("Playing: %s", SONG);
    }
    setup();
    play(SONG);
    return 0;
}