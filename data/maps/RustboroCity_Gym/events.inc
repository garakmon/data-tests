RustboroCity_Gym_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ROXANNE, 0, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_Gym_EventScript_212F31, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, 0, 5, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 2, RustboroCity_Gym_EventScript_212FE3, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, 0, 3, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 3, RustboroCity_Gym_EventScript_212FFA, 0
	object_event 4, EVENT_OBJ_GFX_MAN_2, 0, 3, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_Gym_EventScript_213028, 0
	object_event 5, EVENT_OBJ_GFX_HIKER, 0, 1, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 1, 3, RustboroCity_Gym_EventScript_213011, 0

RustboroCity_Gym_MapWarps:
	warp_def 5, 19, 0, 0, MAP_RUSTBORO_CITY
	warp_def 6, 19, 0, 0, MAP_RUSTBORO_CITY

RustboroCity_Gym_MapBGEvents:
	bg_event 2, 18, 0, BG_EVENT_PLAYER_FACING_NORTH, RustboroCity_Gym_EventScript_213047
	bg_event 8, 18, 0, BG_EVENT_PLAYER_FACING_NORTH, RustboroCity_Gym_EventScript_213057

RustboroCity_Gym_MapEvents::
	map_events RustboroCity_Gym_EventObjects, RustboroCity_Gym_MapWarps, 0x0, RustboroCity_Gym_MapBGEvents

