Route110_TrickHousePuzzle2_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SCHOOL_KID_M, 0, 13, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 1, Route110_TrickHousePuzzle2_EventScript_26BC75, 0
	object_event 2, EVENT_OBJ_GFX_SCHOOL_KID_M, 0, 10, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 4, Route110_TrickHousePuzzle2_EventScript_26BC8C, 0
	object_event 3, EVENT_OBJ_GFX_GIRL_3, 0, 11, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 2, Route110_TrickHousePuzzle2_EventScript_26BCA3, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 8, 17, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route110_TrickHousePuzzle2_EventScript_291428, FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 3, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route110_TrickHousePuzzle2_EventScript_29141B, FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL

Route110_TrickHousePuzzle2_MapWarps:
	warp_def 0, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 1, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 13, 1, 3, 0, MAP_ROUTE110_TRICK_HOUSE_END

Route110_TrickHousePuzzle2_MapCoordEvents:
	coord_event 11, 12, 3, VAR_TEMP_1, 0, Route110_TrickHousePuzzle2_EventScript_26BBDD
	coord_event 0, 4, 0, VAR_TEMP_2, 0, Route110_TrickHousePuzzle2_EventScript_26BBF0
	coord_event 14, 5, 3, VAR_TEMP_3, 0, Route110_TrickHousePuzzle2_EventScript_26BC03
	coord_event 7, 11, 3, VAR_TEMP_4, 0, Route110_TrickHousePuzzle2_EventScript_26BC16

Route110_TrickHousePuzzle2_MapBGEvents:
	bg_event 14, 14, 0, BG_EVENT_PLAYER_FACING_ANY, Route110_TrickHousePuzzle2_EventScript_26BBC0

Route110_TrickHousePuzzle2_MapEvents::
	map_events Route110_TrickHousePuzzle2_EventObjects, Route110_TrickHousePuzzle2_MapWarps, Route110_TrickHousePuzzle2_MapCoordEvents, Route110_TrickHousePuzzle2_MapBGEvents

