SlateportCity_Mart_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, SlateportCity_Mart_EventScript_20DC49, 0
	object_event 2, EVENT_OBJ_GFX_BLACK_BELT, 0, 4, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, SlateportCity_Mart_EventScript_20DC76, 0
	object_event 3, EVENT_OBJ_GFX_MAN_3, 0, 5, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, SlateportCity_Mart_EventScript_20DC7F, 0

SlateportCity_Mart_MapWarps:
	warp_def 3, 7, 0, 1, MAP_SLATEPORT_CITY
	warp_def 4, 7, 0, 1, MAP_SLATEPORT_CITY

SlateportCity_Mart_MapEvents::
	map_events SlateportCity_Mart_EventObjects, SlateportCity_Mart_MapWarps, 0x0, 0x0

