MtPyre_5F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_BLACK_BELT, 0, 3, 7, 3, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, 1, 2, MtPyre_5F_EventScript_231BC9, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 6, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, MtPyre_5F_EventScript_291324, FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE

MtPyre_5F_MapWarps:
	warp_def 2, 1, 3, 0, MAP_MT_PYRE_6F
	warp_def 10, 5, 3, 0, MAP_MT_PYRE_4F
	warp_def 1, 10, 3, 1, MAP_MT_PYRE_6F
	warp_def 12, 10, 3, 2, MAP_MT_PYRE_4F
	warp_def 12, 12, 3, 3, MAP_MT_PYRE_4F

MtPyre_5F_MapEvents::
	map_events MtPyre_5F_EventObjects, MtPyre_5F_MapWarps, 0x0, 0x0

