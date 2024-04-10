Route29_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route29_EventScript_ItemPotion::
	finditem ITEM_POTION
	end

Route29_Text_RouteMarker::
	.string "Route 29\p"
	.string "New Bark Town to Cherrygrove City$"

Route29_Text_RouteMarkerReverse::
	.string "Route 29\p"
	.string "Cherrygrove City to New Bark Town$"