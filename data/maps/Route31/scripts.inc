Route31_MapScripts::
# 2 "data/maps/Route31/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
# 3 "data/maps/Route31/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0


Route31_RouteMarker::
# 7 "data/maps/Route31/scripts.pory"
	msgbox Route31_RouteMarker_Text_0
# 8 "data/maps/Route31/scripts.pory"
	release
	return


Route31_DarkCaveWarning::
# 12 "data/maps/Route31/scripts.pory"
	msgbox Route31_DarkCaveWarning_Text_0
# 13 "data/maps/Route31/scripts.pory"
	release
	return


Route31_BugCatcherWadeTrainer::
# 17 "data/maps/Route31/scripts.pory"
	trainerbattle_single TRAINER_WADE_1, Route31_BugCatcherWadeTrainer_Text_0, Route31_BugCatcherWadeTrainer_Text_1
# 18 "data/maps/Route31/scripts.pory"
	release
	return


Route31_Camper::
# 22 "data/maps/Route31/scripts.pory"
	msgbox Route31_Camper_Text_0
# 23 "data/maps/Route31/scripts.pory"
	release
	return


Route31_FatMan::
# 27 "data/maps/Route31/scripts.pory"
	msgbox Route31_FatMan_Text_0
# 28 "data/maps/Route31/scripts.pory"
	release
	return


Route31_Picknicker::
# 32 "data/maps/Route31/scripts.pory"
	msgbox Route31_Picknicker_Text_0
# 33 "data/maps/Route31/scripts.pory"
	release
	return


Route31_RouteMarker_Text_0:
# 7 "data/maps/Route31/scripts.pory"
	.string "ROUTE 31\n"
	.string "Violet City to Cherrygrove City$"

Route31_DarkCaveWarning_Text_0:
# 12 "data/maps/Route31/scripts.pory"
	.string "DARK CAVE\n"
	.string "Warning, bright lights needed!$"

Route31_BugCatcherWadeTrainer_Text_0:
# 17 "data/maps/Route31/scripts.pory"
	.string "Aren't bug Pokemon so cool?$"

Route31_BugCatcherWadeTrainer_Text_1:
# 17 "data/maps/Route31/scripts.pory"
	.string "They're cool even though I lost.$"

Route31_Camper_Text_0:
# 22 "data/maps/Route31/scripts.pory"
	.string "Good luck getting through this cave\n"
	.string "without something to light the way. It's\l"
	.string "pitch black in there!$"

Route31_FatMan_Text_0:
# 27 "data/maps/Route31/scripts.pory"
	.string "... ... ...\p"
	.string "I'm so sleepy... I'm waiting on a letter\n"
	.string "from my friend...$"

Route31_Picknicker_Text_0:
# 32 "data/maps/Route31/scripts.pory"
	.string "I'm so glad I'm almost at Violet City!\n"
	.string "The walk has been exhausting.$"
