Route46_MapScripts::
# 2 "data/maps/Route46/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
# 3 "data/maps/Route46/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0


Route46_LowerSign::
# 7 "data/maps/Route46/scripts.pory"
	msgbox Route46_LowerSign_Text_0
# 8 "data/maps/Route46/scripts.pory"
	release
	return


Route46_LowerWoman::
# 12 "data/maps/Route46/scripts.pory"
	msgbox Route46_LowerWoman_Text_0
# 13 "data/maps/Route46/scripts.pory"
	release
	return


Route46_LowerSign_Text_0:
# 7 "data/maps/Route46/scripts.pory"
	.string "Route 46$"

Route46_LowerWoman_Text_0:
# 12 "data/maps/Route46/scripts.pory"
	.string "I'm hunting for rare Pokemon!$"
