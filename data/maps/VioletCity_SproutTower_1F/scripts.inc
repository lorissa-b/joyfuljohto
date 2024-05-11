VioletCity_SproutTower_1F_MapScripts::
# 2 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
# 3 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0


SproutTower_1F_OldLady::
# 7 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	msgbox SproutTower_1F_OldLady_Text_0
# 8 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	release
	return


SproutTower_1F_Tourist::
# 12 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	msgbox SproutTower_1F_Tourist_Text_0
# 13 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	release
	return


SproutTower_1F_OldMan1::
# 17 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	msgbox SproutTower_1F_OldMan1_Text_0
# 18 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	release
	return


SproutTower_1F_OldMan2::
# 22 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	msgbox SproutTower_1F_OldMan2_Text_0
# 23 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	release
	return


SproutTower_1F_NicoTrainer::
# 27 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	trainerbattle_single TRAINER_NICO, SproutTower_1F_NicoTrainer_Text_0, SproutTower_1F_NicoTrainer_Text_1
# 28 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	release
	return


SproutTower_1F_OldLady_Text_0:
# 7 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	.string "Welcome to the Sprout Tower. This is a\n"
	.string "place of great significance in the\l"
	.string "Johto region.$"

SproutTower_1F_Tourist_Text_0:
# 12 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	.string "They say the middle of this tower is\n"
	.string "made of a giant Bellsprout... Do you\l"
	.string "think it could be true?$"

SproutTower_1F_OldMan1_Text_0:
# 17 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	.string "The tower is filled with wild Pokemon. Be\n"
	.string "careful!$"

SproutTower_1F_OldMan2_Text_0:
# 22 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	.string "The monks use this tower to train. It's\n"
	.string "a good place for you to cultivate your\l"
	.string "own skills.$"

SproutTower_1F_NicoTrainer_Text_0:
# 27 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	.string "You better watch out, child! The monks\n"
	.string "here are strong.$"

SproutTower_1F_NicoTrainer_Text_1:
# 27 "data/maps/VioletCity_SproutTower_1F/scripts.pory"
	.string "You may be strong enough after all.$"
