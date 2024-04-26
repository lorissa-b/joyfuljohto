VioletCity_SproutTower_2F_MapScripts::
# 2 "data/maps/VioletCity_SproutTower_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
# 3 "data/maps/VioletCity_SproutTower_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0


SproutTower_2F_ChowTrainer::
# 7 "data/maps/VioletCity_SproutTower_2F/scripts.pory"
	trainerbattle_single TRAINER_CHOW, SproutTower_2F_ChowTrainer_Text_0, SproutTower_2F_ChowTrainer_Text_0
# 8 "data/maps/VioletCity_SproutTower_2F/scripts.pory"
	release
	return


SproutTower_2F_ChowTrainer_Text_0:
# 7 "data/maps/VioletCity_SproutTower_2F/scripts.pory"
	.string "$"
