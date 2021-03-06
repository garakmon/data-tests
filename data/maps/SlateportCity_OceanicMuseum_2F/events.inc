SlateportCity_OceanicMuseum_2F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SCIENTIST_1, 0, 13, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_OceanicMuseum_2F_EventScript_20BB00, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
	object_event 2, EVENT_OBJ_GFX_ARCHIE, 0, 6, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
	object_event 3, EVENT_OBJ_GFX_AQUA_MEMBER_M, 0, 6, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1
	object_event 4, EVENT_OBJ_GFX_AQUA_MEMBER_M, 0, 6, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2
	object_event 5, EVENT_OBJ_GFX_OLD_MAN, 0, 12, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, SlateportCity_OceanicMuseum_2F_EventScript_20BD64, FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
	object_event 6, EVENT_OBJ_GFX_POKEFAN_F, 0, 9, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, SlateportCity_OceanicMuseum_2F_EventScript_20BD6D, FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
	object_event 7, EVENT_OBJ_GFX_NINJA_BOY, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, SlateportCity_OceanicMuseum_2F_EventScript_20BD76, FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION

SlateportCity_OceanicMuseum_2F_MapWarps:
	warp_def 6, 1, 0, 2, MAP_SLATEPORT_CITY_OCEANIC_MUSEUM_1F

SlateportCity_OceanicMuseum_2F_MapBGEvents:
	bg_event 18, 4, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD0A
	bg_event 18, 7, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD13
	bg_event 4, 3, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD52
	bg_event 4, 4, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD52
	bg_event 3, 3, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD49
	bg_event 2, 3, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD49
	bg_event 3, 4, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD49
	bg_event 3, 6, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD40
	bg_event 4, 6, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD40
	bg_event 13, 7, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD5B
	bg_event 14, 7, 3, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD5B
	bg_event 18, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD37
	bg_event 19, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD37
	bg_event 15, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD2E
	bg_event 16, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD2E
	bg_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD25
	bg_event 9, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD25
	bg_event 12, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD1C
	bg_event 13, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD1C
	bg_event 3, 7, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD40
	bg_event 4, 7, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_2F_EventScript_20BD40

SlateportCity_OceanicMuseum_2F_MapEvents::
	map_events SlateportCity_OceanicMuseum_2F_EventObjects, SlateportCity_OceanicMuseum_2F_MapWarps, 0x0, SlateportCity_OceanicMuseum_2F_MapBGEvents

