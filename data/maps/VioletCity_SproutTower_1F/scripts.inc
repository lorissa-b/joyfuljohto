VioletCity_SproutTower_1F_MapScripts::
# 2 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
# 3 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0


SproutTower_1F_NicoTrainer::
# 7 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	trainerbattle_single TRAINER_NICO, SproutTower_1F_NicoTrainer_Text_0, SproutTower_1F_NicoTrainer_Text_0
# 8 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	release
	return


SproutTower_1F_NicoTrainer_Text_0:
# 7 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	.string "$"
