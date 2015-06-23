#include "types.h"
#include "mega.h"
#include "battle.h"

void play_sound(u16 sound_id);

void trigger_mega_evolution() {
	if (!can_mega_evolve(&bdata[*b_current_bank])) {
		return;
	}

	if (megadata->trigger[*b_current_bank]) {
		// Turn off
		play_sound(3);
		megadata->trigger[*b_current_bank] = 0;
	} else {
		// Turn on
		play_sound(2);
		megadata->trigger[*b_current_bank] = 1;
	}
}
