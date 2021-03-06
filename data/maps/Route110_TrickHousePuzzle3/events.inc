Route110_TrickHousePuzzle3_EventObjects:
	object_event 1, EVENT_OBJ_GFX_CAMPER, 0, 7, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 2, Route110_TrickHousePuzzle3_EventScript_26C5C4, 0
	object_event 2, EVENT_OBJ_GFX_PICNICKER, 0, 4, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 1, Route110_TrickHousePuzzle3_EventScript_26C5DB, 0
	object_event 3, EVENT_OBJ_GFX_HIKER, 0, 10, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, Route110_TrickHousePuzzle3_EventScript_26C5F2, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 1, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route110_TrickHousePuzzle3_EventScript_291442, FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 4, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route110_TrickHousePuzzle3_EventScript_291435, FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL
	object_event 6, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 1, 20, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route110_TrickHousePuzzle3_EventScript_2907A6, FLAG_TEMP_15
	object_event 7, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 2, 21, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route110_TrickHousePuzzle3_EventScript_2907A6, FLAG_TEMP_16

Route110_TrickHousePuzzle3_MapWarps:
	warp_def 0, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 1, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 13, 1, 3, 0, MAP_ROUTE110_TRICK_HOUSE_END

Route110_TrickHousePuzzle3_MapCoordEvents:
	coord_event 4, 14, 3, VAR_TEMP_1, 0, Route110_TrickHousePuzzle3_EventScript_26C4CD
	coord_event 3, 11, 3, VAR_TEMP_2, 0, Route110_TrickHousePuzzle3_EventScript_26C4D9
	coord_event 12, 5, 3, VAR_TEMP_3, 0, Route110_TrickHousePuzzle3_EventScript_26C4E5
	coord_event 8, 2, 3, VAR_TEMP_4, 0, Route110_TrickHousePuzzle3_EventScript_26C4F1

Route110_TrickHousePuzzle3_MapBGEvents:
	bg_event 0, 14, 0, BG_EVENT_PLAYER_FACING_ANY, Route110_TrickHousePuzzle3_EventScript_26C5A7

Route110_TrickHousePuzzle3_MapEvents::
	map_events Route110_TrickHousePuzzle3_EventObjects, Route110_TrickHousePuzzle3_MapWarps, Route110_TrickHousePuzzle3_MapCoordEvents, Route110_TrickHousePuzzle3_MapBGEvents

