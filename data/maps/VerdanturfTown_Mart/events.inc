VerdanturfTown_Mart_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, VerdanturfTown_Mart_EventScript_202587, 0
	object_event 2, EVENT_OBJ_GFX_BOY_2, 0, 5, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, VerdanturfTown_Mart_EventScript_2025BA, 0
	object_event 3, EVENT_OBJ_GFX_EXPERT_F, 0, 8, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, VerdanturfTown_Mart_EventScript_2025C3, 0
	object_event 4, EVENT_OBJ_GFX_LASS, 0, 3, 2, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 0, 0, VerdanturfTown_Mart_EventScript_2025CC, 0

VerdanturfTown_Mart_MapWarps:
	warp_def 3, 7, 0, 1, MAP_VERDANTURF_TOWN
	warp_def 4, 7, 0, 1, MAP_VERDANTURF_TOWN

VerdanturfTown_Mart_MapEvents::
	map_events VerdanturfTown_Mart_EventObjects, VerdanturfTown_Mart_MapWarps, 0x0, 0x0

