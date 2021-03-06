BattleFrontier_BattlePalaceLobby_EventObjects:
	object_event 1, EVENT_OBJ_GFX_EXPERT_M, 0, 5, 6, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24D944, 0
	object_event 2, EVENT_OBJ_GFX_BLACK_BELT, 0, 11, 8, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC82, 0
	object_event 3, EVENT_OBJ_GFX_MANIAC, 0, 24, 5, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC9D, 0
	object_event 4, EVENT_OBJ_GFX_MAN_3, 0, 18, 10, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC8B, 0
	object_event 5, EVENT_OBJ_GFX_BEAUTY, 0, 2, 10, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC94, 0
	object_event 6, EVENT_OBJ_GFX_EXPERT_M, 0, 19, 6, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24D956, 0

BattleFrontier_BattlePalaceLobby_MapWarps:
	warp_def 12, 11, 0, 2, MAP_BATTLE_FRONTIER_OUTSIDE_EAST
	warp_def 13, 11, 0, 2, MAP_BATTLE_FRONTIER_OUTSIDE_EAST
	warp_def 5, 4, 3, 0, MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR

BattleFrontier_BattlePalaceLobby_MapBGEvents:
	bg_event 2, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_BattlePalaceLobby_EventScript_24DC50
	bg_event 16, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_BattlePalaceLobby_EventScript_24DC69
	bg_event 10, 4, 0, BG_EVENT_PLAYER_FACING_ANY, BattleFrontier_BattlePalaceLobby_EventScript_24DCA6

BattleFrontier_BattlePalaceLobby_MapEvents::
	map_events BattleFrontier_BattlePalaceLobby_EventObjects, BattleFrontier_BattlePalaceLobby_MapWarps, 0x0, BattleFrontier_BattlePalaceLobby_MapBGEvents

