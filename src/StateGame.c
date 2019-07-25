#include "Banks/SetBank2.h"

#include "..\res\src\tiles.h"
#include "..\res\src\map.h"

#include "ZGBMain.h"
#include "Scroll.h"
#include "SpriteManager.h"

void Start_StateGame() {
	UINT8 i;

	SPRITES_8x16;
	for(i = 0; i != N_SPRITE_TYPES; ++ i) {
		SpriteManagerLoad(i);
	}
	SHOW_SPRITES;

	scroll_target = SpriteManagerAdd(SpritePlayer, 50, 50);

	InitScrollTiles(0, &tiles, bank_tiles);
	InitScroll(mapWidth, mapHeight, map, 0, 0, 3);
	SHOW_BKG;
}

void Update_StateGame() {
}