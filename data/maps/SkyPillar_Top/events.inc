SkyPillar_Top_EventObjects:
	object_event 1, EVENT_OBJ_GFX_RAYQUAZA_2, 0, 14, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, 0x0, FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_2
	object_event 2, EVENT_OBJ_GFX_RAYQUAZA_1, 0, 14, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, SkyPillar_Top_EventScript_239722, FLAG_RAYQUAZA_ON_SKY_TOWER_SUMMIT

SkyPillar_Top_MapWarps:
	warp_def 16, 14, 3, 1, MAP_SKY_PILLAR_5F

SkyPillar_Top_MapCoordEvents:
	coord_event 14, 9, 3, VAR_0x40D7, 0, SkyPillar_Top_EventScript_23979A

SkyPillar_Top_MapEvents::
	map_events SkyPillar_Top_EventObjects, SkyPillar_Top_MapWarps, SkyPillar_Top_MapCoordEvents, 0x0

