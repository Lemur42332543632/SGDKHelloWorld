#include <genesis.h>
#include "resources.h"

int main() {
	VDP_drawText("Hello World!", 4, 4);
	VDP_drawImage(VDP_PLAN_A, &moon, 12, 12);
	while(TRUE) {
		SYS_doVBlankProcess();
	}
	return 0;
}
