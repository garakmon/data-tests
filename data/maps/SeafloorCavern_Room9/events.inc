SeafloorCavern_Room9_EventObjects:
	object_event 1, EVENT_OBJ_GFX_KYOGRE_1, 0, 17, 38, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_1
	object_event 2, EVENT_OBJ_GFX_ARCHIE, 0, 9, 42, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	object_event 3, EVENT_OBJ_GFX_MAXIE, 0, 9, 42, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	object_event 4, EVENT_OBJ_GFX_MAGMA_MEMBER_M, 0, 8, 41, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	object_event 5, EVENT_OBJ_GFX_MAGMA_MEMBER_F, 0, 8, 42, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 14, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, SeafloorCavern_Room9_EventScript_291401, FLAG_ITEM_SEAFLOOR_CAVERN_ROOM_9_TM_26
	object_event 7, EVENT_OBJ_GFX_KYOGRE_2, 0, 17, 38, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, 0x0, FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_2

SeafloorCavern_Room9_MapWarps:
	warp_def 5, 4, 3, 0, MAP_SEAFLOOR_CAVERN_ROOM8

SeafloorCavern_Room9_MapCoordEvents:
	coord_event 17, 42, 3, VAR_0x40A2, 0, SeafloorCavern_Room9_EventScript_234DC9

SeafloorCavern_Room9_MapEvents::
	map_events SeafloorCavern_Room9_EventObjects, SeafloorCavern_Room9_MapWarps, SeafloorCavern_Room9_MapCoordEvents, 0x0
