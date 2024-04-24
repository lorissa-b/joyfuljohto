Route30_MapScripts::
# 2 "data/maps/Route30/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
# 3 "data/maps/Route30/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
# 4 "data/maps/Route30/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Route30/scripts.pory"
	map_script_2 VAR_NEW_BARK_INTRO_STATE, 3, Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 6 "data/maps/Route30/scripts.pory"
	pokenavcall Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 7 "data/maps/Route30/scripts.pory"
	setvar VAR_NEW_BARK_INTRO_STATE, 4
	return


Route30_RouteMarker::
# 13 "data/maps/Route30/scripts.pory"
	msgbox Route30_RouteMarker_Text_0
# 14 "data/maps/Route30/scripts.pory"
	release
	return


Route30_MrPokemonsHouseDirection::
# 18 "data/maps/Route30/scripts.pory"
	msgbox Route30_MrPokemonsHouseDirection_Text_0
# 19 "data/maps/Route30/scripts.pory"
	release
	return


Route30_TrainerTips::
# 23 "data/maps/Route30/scripts.pory"
	msgbox Route30_TrainerTips_Text_0
# 24 "data/maps/Route30/scripts.pory"
	release
	return


Route30_MrPokemonsHouse::
# 28 "data/maps/Route30/scripts.pory"
	msgbox Route30_MrPokemonsHouse_Text_0
# 29 "data/maps/Route30/scripts.pory"
	release
	return


Route30_ItemAntidote::
# 33 "data/maps/Route30/scripts.pory"
	finditem ITEM_ANTIDOTE
	return


Route30_WanderingBoy::
# 37 "data/maps/Route30/scripts.pory"
	msgbox Route30_WanderingBoy_Text_0
# 38 "data/maps/Route30/scripts.pory"
	release
	return


Route30_YoungsterJoey::
# 42 "data/maps/Route30/scripts.pory"
	msgbox Route30_YoungsterJoey_Text_0
# 43 "data/maps/Route30/scripts.pory"
	release
	return


Route30_WanderingGirl::
# 47 "data/maps/Route30/scripts.pory"
	msgbox Route30_WanderingGirl_Text_0
# 48 "data/maps/Route30/scripts.pory"
	release
	return


Route30_ReplaceTrainers::
# 52 "data/maps/Route30/scripts.pory"
	clearflag FLAG_ROUTE30_TRAINERS
	return


Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 6 "data/maps/Route30/scripts.pory"
	.string "H-hello? {PLAYER}? It's a disaster!\n"
	.string "Uh, um, it's just terrible! What should I\l"
	.string "do? It... Oh, no... Please get back here\l"
	.string "now!$"

Route30_RouteMarker_Text_0:
# 13 "data/maps/Route30/scripts.pory"
	.string "ROUTE 30\n"
	.string "Cherrygrove City to Violet City$"

Route30_MrPokemonsHouseDirection_Text_0:
# 18 "data/maps/Route30/scripts.pory"
	.string "Mr. Pokemon's House straight ahead!$"

Route30_TrainerTips_Text_0:
# 23 "data/maps/Route30/scripts.pory"
	.string "Trainer Tips\n"
	.string "No stealing other people's Pokémon!\l"
	.string "Poké Balls are to be thrown only at wild\l"
	.string "Pokémon!$"

Route30_MrPokemonsHouse_Text_0:
# 28 "data/maps/Route30/scripts.pory"
	.string "Mr. Pokemon's House$"

Route30_WanderingBoy_Text_0:
# 37 "data/maps/Route30/scripts.pory"
	.string "Mr. Pokemon's house? It's a bit farther\n"
	.string "ahead.$"

Route30_YoungsterJoey_Text_0:
# 42 "data/maps/Route30/scripts.pory"
	.string "Go, Rattata! Tackle!\p"
	.string "What? This is a big battle! Leave me\n"
	.string "alone!$"

Route30_WanderingGirl_Text_0:
# 47 "data/maps/Route30/scripts.pory"
	.string "I've never been in a trainer battle\n"
	.string "before... It sounds scary.$"
