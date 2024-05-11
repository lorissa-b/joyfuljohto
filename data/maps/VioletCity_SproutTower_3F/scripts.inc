VioletCity_SproutTower_3F_MapScripts::
# 2 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
# 3 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0


SproutTower_3F_JinTrainer::
# 7 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	trainerbattle_single TRAINER_JIN, SproutTower_3F_JinTrainer_Text_0, SproutTower_3F_JinTrainer_Text_1
# 8 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	release
	return


SproutTower_3F_NealTrainer::
# 12 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	trainerbattle_single TRAINER_NEAL, SproutTower_3F_NealTrainer_Text_0, SproutTower_3F_NealTrainer_Text_1
# 13 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	release
	return


SproutTower_3F_TroyTrainer::
# 17 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	trainerbattle_single TRAINER_TROY, SproutTower_3F_TroyTrainer_Text_0, SproutTower_3F_TroyTrainer_Text_1
# 18 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	release
	return


SproutTower_3F_LiTrainer::
# 22 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	trainerbattle_single TRAINER_LI, SproutTower_3F_LiTrainer_Text_0, SproutTower_3F_LiTrainer_Text_1
# 23 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	release
	return


SproutTower_3F_JinTrainer_Text_0:
# 7 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	.string "If you can get through us, you really\n"
	.string "are strong.$"

SproutTower_3F_JinTrainer_Text_1:
# 7 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	.string "I'm the first to fall.$"

SproutTower_3F_NealTrainer_Text_0:
# 12 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	.string "We make sure only the best can meet the\n"
	.string "Sage.$"

SproutTower_3F_NealTrainer_Text_1:
# 12 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	.string "You might just be the best.$"

SproutTower_3F_TroyTrainer_Text_0:
# 17 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	.string "I'm your final obstacle!$"

SproutTower_3F_TroyTrainer_Text_1:
# 17 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	.string "And I was the last to go.$"

SproutTower_3F_LiTrainer_Text_0:
# 22 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	.string "It takes a true friend of Pokemon to\n"
	.string "defeat me in battle.$"

SproutTower_3F_LiTrainer_Text_1:
# 22 "data/maps/VioletCity_SproutTower_3F/scripts.pory"
	.string "You must cherish your Pokemon!$"
