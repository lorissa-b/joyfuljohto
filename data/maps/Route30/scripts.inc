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
	map_script_2 VAR_NEW_BARK_INTRO_STATE, 2, Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 6 "data/maps/Route30/scripts.pory"
	lockall
# 7 "data/maps/Route30/scripts.pory"
	pokenavcall Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 8 "data/maps/Route30/scripts.pory"
	setvar VAR_NEW_BARK_INTRO_STATE, 3
# 9 "data/maps/Route30/scripts.pory"
	clearflag FLAG_POLICE_IN_NEWBARK
# 10 "data/maps/Route30/scripts.pory"
	clearflag FLAG_CHERRYGROVE_RIVAL
# 11 "data/maps/Route30/scripts.pory"
	releaseall
	return


Route30_RouteMarker::
# 17 "data/maps/Route30/scripts.pory"
	msgbox Route30_RouteMarker_Text_0
# 18 "data/maps/Route30/scripts.pory"
	release
	return


Route30_MrPokemonsHouseDirection::
# 22 "data/maps/Route30/scripts.pory"
	msgbox Route30_MrPokemonsHouseDirection_Text_0
# 23 "data/maps/Route30/scripts.pory"
	release
	return


Route30_TrainerTips::
# 27 "data/maps/Route30/scripts.pory"
	msgbox Route30_TrainerTips_Text_0
# 28 "data/maps/Route30/scripts.pory"
	release
	return


Route30_MrPokemonsHouse::
# 32 "data/maps/Route30/scripts.pory"
	msgbox Route30_MrPokemonsHouse_Text_0
# 33 "data/maps/Route30/scripts.pory"
	release
	return


Route30_ItemAntidote::
# 37 "data/maps/Route30/scripts.pory"
	finditem ITEM_ANTIDOTE
	return


Route30_WanderingBoy::
# 41 "data/maps/Route30/scripts.pory"
	msgbox Route30_WanderingBoy_Text_0
# 42 "data/maps/Route30/scripts.pory"
	release
	return


Route30_YoungsterJoey::
# 46 "data/maps/Route30/scripts.pory"
	msgbox Route30_YoungsterJoey_Text_0
# 47 "data/maps/Route30/scripts.pory"
	release
	return


Route30_WanderingGirl::
# 51 "data/maps/Route30/scripts.pory"
	msgbox Route30_WanderingGirl_Text_0
# 52 "data/maps/Route30/scripts.pory"
	release
	return


Route30_Lass::
# 56 "data/maps/Route30/scripts.pory"
	msgbox Route30_Lass_Text_0
# 57 "data/maps/Route30/scripts.pory"
	release
	return


Route30_YoungsterJoeyTrainer::
# 61 "data/maps/Route30/scripts.pory"
	trainerbattle_single TRAINER_JOEY_1, Route30_YoungsterJoeyTrainer_Text_0, Route30_YoungsterJoeyTrainer_Text_1
	return


Route30_BugCatcherMikeyTrainer::
# 65 "data/maps/Route30/scripts.pory"
	trainerbattle_single TRAINER_MIKEY, Route30_BugCatcherMikeyTrainer_Text_0, Route30_BugCatcherMikeyTrainer_Text_1
	return


Route30_BugCatcherDonTrianer::
# 69 "data/maps/Route30/scripts.pory"
	trainerbattle_single TRAINER_DON, Route30_BugCatcherDonTrianer_Text_0, Route30_BugCatcherDonTrianer_Text_1
	return


Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 7 "data/maps/Route30/scripts.pory"
	.string "H-hello? {PLAYER}? It's a disaster!\n"
	.string "Uh, um, it's just terrible! What should I\l"
	.string "do? It... Oh, no... Please get back here\l"
	.string "now!$"

Route30_RouteMarker_Text_0:
# 17 "data/maps/Route30/scripts.pory"
	.string "ROUTE 30\n"
	.string "Cherrygrove City to Violet City$"

Route30_MrPokemonsHouseDirection_Text_0:
# 22 "data/maps/Route30/scripts.pory"
	.string "Mr. Pokemon's House straight ahead!$"

Route30_TrainerTips_Text_0:
# 27 "data/maps/Route30/scripts.pory"
	.string "Trainer Tips\n"
	.string "No stealing other people's Pokémon!\l"
	.string "Poké Balls are to be thrown only at wild\l"
	.string "Pokémon!$"

Route30_MrPokemonsHouse_Text_0:
# 32 "data/maps/Route30/scripts.pory"
	.string "Mr. Pokemon's House$"

Route30_WanderingBoy_Text_0:
# 41 "data/maps/Route30/scripts.pory"
	.string "Mr. Pokemon's house? It's a bit farther\n"
	.string "ahead.$"

Route30_YoungsterJoey_Text_0:
# 46 "data/maps/Route30/scripts.pory"
	.string "Go, Rattata! Tackle!\p"
	.string "What? This is a big battle! Leave me\n"
	.string "alone!$"

Route30_WanderingGirl_Text_0:
# 51 "data/maps/Route30/scripts.pory"
	.string "I've never been in a trainer battle\n"
	.string "before... It sounds scary.$"

Route30_Lass_Text_0:
# 56 "data/maps/Route30/scripts.pory"
	.string "Watch out! If you lock eyes with\n"
	.string "another trainer you're obligated to\l"
	.string "battle!$"

Route30_YoungsterJoeyTrainer_Text_0:
# 61 "data/maps/Route30/scripts.pory"
	.string "I just lost, so I'm trying to find more\n"
	.string "Pokemon. Wait! You look weak! Come on,\l"
	.string "let's battle!$"

Route30_YoungsterJoeyTrainer_Text_1:
# 61 "data/maps/Route30/scripts.pory"
	.string "Darn it, I lost again!$"

Route30_BugCatcherMikeyTrainer_Text_0:
# 65 "data/maps/Route30/scripts.pory"
	.string "Go, my beautiful bug Pokemon!$"

Route30_BugCatcherMikeyTrainer_Text_1:
# 65 "data/maps/Route30/scripts.pory"
	.string "My bugs weren't strong enough...$"

Route30_BugCatcherDonTrianer_Text_0:
# 69 "data/maps/Route30/scripts.pory"
	.string "The power of bugs is unbelievable!$"

Route30_BugCatcherDonTrianer_Text_1:
# 69 "data/maps/Route30/scripts.pory"
	.string "But your power is even more\n"
	.string "unbelievable.$"
