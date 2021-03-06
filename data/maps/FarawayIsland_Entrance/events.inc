FarawayIsland_Entrance_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SAILOR, 0, 13, 39, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, FarawayIsland_Entrance_EventScript_267CA2, 0
	object_event 2, EVENT_OBJ_GFX_SS_TIDAL, 0, 13, 41, 1, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, 0

FarawayIsland_Entrance_MapWarps:
	warp_def 22, 7, 3, 0, MAP_FARAWAY_ISLAND_INTERIOR
	warp_def 23, 7, 3, 1, MAP_FARAWAY_ISLAND_INTERIOR

FarawayIsland_Entrance_MapCoordEvents:
	coord_event 9, 18, 3, 0, 0, FarawayIsland_Entrance_EventScript_267C98
	coord_event 10, 20, 3, 0, 0, FarawayIsland_Entrance_EventScript_267C9D
	coord_event 22, 9, 3, 0, 0, FarawayIsland_Entrance_EventScript_267C98

FarawayIsland_Entrance_MapBGEvents:
	bg_event 3, 32, 0, BG_EVENT_PLAYER_FACING_NORTH, FarawayIsland_Entrance_EventScript_267CF1

FarawayIsland_Entrance_MapEvents::
	map_events FarawayIsland_Entrance_EventObjects, FarawayIsland_Entrance_MapWarps, FarawayIsland_Entrance_MapCoordEvents, FarawayIsland_Entrance_MapBGEvents

