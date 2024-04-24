Route30_MapScripts::
# 2 "data/maps/Route30/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
# 3 "data/maps/Route30/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0


Route30_RouteMarker::
# 7 "data/maps/Route30/scripts.pory"
	msgbox Route30_RouteMarker_Text_0
# 8 "data/maps/Route30/scripts.pory"
	release
	return


Route30_MrPokemonsHouseDirection::
# 12 "data/maps/Route30/scripts.pory"
	msgbox Route30_MrPokemonsHouseDirection_Text_0
# 13 "data/maps/Route30/scripts.pory"
	release
	return


Route30_TrainerTips::
# 17 "data/maps/Route30/scripts.pory"
	msgbox Route30_TrainerTips_Text_0
# 18 "data/maps/Route30/scripts.pory"
	release
	return


Route30_MrPokemonsHouse::
# 22 "data/maps/Route30/scripts.pory"
	msgbox Route30_MrPokemonsHouse_Text_0
# 23 "data/maps/Route30/scripts.pory"
	release
	return


Route30_ItemAntidote::
# 27 "data/maps/Route30/scripts.pory"
	finditem ITEM_ANTIDOTE
	return


Route30_WanderingBoy::
# 31 "data/maps/Route30/scripts.pory"
	msgbox Route30_WanderingBoy_Text_0
# 32 "data/maps/Route30/scripts.pory"
	release
	return


Route30_YoungsterJoey::
# 36 "data/maps/Route30/scripts.pory"
	msgbox Route30_YoungsterJoey_Text_0
# 37 "data/maps/Route30/scripts.pory"
	release
	return


Route30_WanderingGirl::
# 41 "data/maps/Route30/scripts.pory"
	msgbox Route30_WanderingGirl_Text_0
# 42 "data/maps/Route30/scripts.pory"
	release
	return


Route30_ReplaceTrainers::
# 46 "data/maps/Route30/scripts.pory"
	clearflag FLAG_ROUTE30_TRAINERS
	return


Route30_RouteMarker_Text_0:
# 7 "data/maps/Route30/scripts.pory"
	.string "ROUTE 30\n"
	.string "Cherrygrove City to Violet City$"

Route30_MrPokemonsHouseDirection_Text_0:
# 12 "data/maps/Route30/scripts.pory"
	.string "Mr. Pokemon's House straight ahead!$"

Route30_TrainerTips_Text_0:
# 17 "data/maps/Route30/scripts.pory"
	.string "Trainer Tips\n"
	.string "No stealing other people's Pokémon!\l"
	.string "Poké Balls are to be thrown only at wild\l"
	.string "Pokémon!$"

Route30_MrPokemonsHouse_Text_0:
# 22 "data/maps/Route30/scripts.pory"
	.string "Mr. Pokemon's House$"

Route30_WanderingBoy_Text_0:
# 31 "data/maps/Route30/scripts.pory"
	.string "Mr. Pokemon's house? It's a bit farther\n"
	.string "ahead.$"

Route30_YoungsterJoey_Text_0:
# 36 "data/maps/Route30/scripts.pory"
	.string "Go, Rattata! Tackle!\p"
	.string "What? This is a big battle! Leave me\n"
	.string "alone!$"

Route30_WanderingGirl_Text_0:
# 41 "data/maps/Route30/scripts.pory"
	.string "I've never been in a trainer battle\n"
	.string "before... It sounds scary.$"
