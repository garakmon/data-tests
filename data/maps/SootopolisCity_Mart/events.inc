SootopolisCity_Mart_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, SootopolisCity_Mart_EventScript_226795, 0
	object_event 2, EVENT_OBJ_GFX_FAT_MAN, 0, 5, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, SootopolisCity_Mart_EventScript_2267C2, 0
	object_event 3, EVENT_OBJ_GFX_GENTLEMAN, 0, 9, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, SootopolisCity_Mart_EventScript_2267EC, 0

SootopolisCity_Mart_MapWarps:
	warp_def 3, 7, 0, 1, MAP_SOOTOPOLIS_CITY
	warp_def 4, 7, 0, 1, MAP_SOOTOPOLIS_CITY

SootopolisCity_Mart_MapEvents::
	map_events SootopolisCity_Mart_EventObjects, SootopolisCity_Mart_MapWarps, 0x0, 0x0

