MossdeepCity_PokemonCenter_1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MossdeepCity_PokemonCenter_1F_EventScript_22224E, 0
	object_event 2, EVENT_OBJ_GFX_WOMAN_2, 0, 8, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, MossdeepCity_PokemonCenter_1F_EventScript_22225C, 0
	object_event 3, EVENT_OBJ_GFX_GIRL_1, 0, 3, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MossdeepCity_PokemonCenter_1F_EventScript_222265, 0

MossdeepCity_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 2, MAP_MOSSDEEP_CITY
	warp_def 6, 8, 3, 2, MAP_MOSSDEEP_CITY
	warp_def 1, 6, 4, 0, MAP_MOSSDEEP_CITY_POKEMON_CENTER_2F

MossdeepCity_PokemonCenter_1F_MapEvents::
	map_events MossdeepCity_PokemonCenter_1F_EventObjects, MossdeepCity_PokemonCenter_1F_MapWarps, 0x0, 0x0

