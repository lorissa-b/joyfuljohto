VioletCity_FalknerGym_MapScripts::
	.byte 0


Falkner_GymGuide::
# 4 "data/maps/VioletCity_FalknerGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VIOLET_GYM, Falkner_GymGuide_2
# 16 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_GymGuide_Text_3
Falkner_GymGuide_1:
# 18 "data/maps/VioletCity_FalknerGym/scripts.pory"
	releaseall
	return

Falkner_GymGuide_2:
# 5 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_GymGuide_Text_0, MSGBOX_YESNO
# 6 "data/maps/VioletCity_FalknerGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Falkner_GymGuide_6
Falkner_GymGuide_5:
# 9 "data/maps/VioletCity_FalknerGym/scripts.pory"
	goto_if_set FLAG_FALKNER_GYM_POTION, Falkner_GymGuide_8
	goto Falkner_GymGuide_1

Falkner_GymGuide_6:
# 7 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_GymGuide_Text_1
	goto Falkner_GymGuide_5

Falkner_GymGuide_8:
# 10 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_GymGuide_Text_2
# 11 "data/maps/VioletCity_FalknerGym/scripts.pory"
	giveitem ITEM_POTION
# 12 "data/maps/VioletCity_FalknerGym/scripts.pory"
	setflag FLAG_FALKNER_GYM_POTION
	goto Falkner_GymGuide_1


Falkner_BirdKeeperAbe_Trainer::
# 22 "data/maps/VioletCity_FalknerGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VIOLET_GYM, Falkner_BirdKeeperAbe_Trainer_2
# 25 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_BirdKeeperAbe_Trainer_Text_2
Falkner_BirdKeeperAbe_Trainer_1:
# 27 "data/maps/VioletCity_FalknerGym/scripts.pory"
	releaseall
	return

Falkner_BirdKeeperAbe_Trainer_2:
# 23 "data/maps/VioletCity_FalknerGym/scripts.pory"
	trainerbattle_single TRAINER_ABE, Falkner_BirdKeeperAbe_Trainer_Text_0, Falkner_BirdKeeperAbe_Trainer_Text_1
	goto Falkner_BirdKeeperAbe_Trainer_1


Falkner_BirdKeeperRod_Trainer::
# 31 "data/maps/VioletCity_FalknerGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VIOLET_GYM, Falkner_BirdKeeperRod_Trainer_2
# 34 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_BirdKeeperRod_Trainer_Text_2
Falkner_BirdKeeperRod_Trainer_1:
# 36 "data/maps/VioletCity_FalknerGym/scripts.pory"
	releaseall
	return

Falkner_BirdKeeperRod_Trainer_2:
# 32 "data/maps/VioletCity_FalknerGym/scripts.pory"
	trainerbattle_single TRAINER_ROD, Falkner_BirdKeeperRod_Trainer_Text_0, Falkner_BirdKeeperRod_Trainer_Text_1
	goto Falkner_BirdKeeperRod_Trainer_1


Falkner_BirdKeeperFredrick_Trainer::
# 40 "data/maps/VioletCity_FalknerGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VIOLET_GYM, Falkner_BirdKeeperFredrick_Trainer_2
# 43 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_BirdKeeperFredrick_Trainer_Text_2
Falkner_BirdKeeperFredrick_Trainer_1:
# 45 "data/maps/VioletCity_FalknerGym/scripts.pory"
	releaseall
	return

Falkner_BirdKeeperFredrick_Trainer_2:
# 41 "data/maps/VioletCity_FalknerGym/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Falkner_BirdKeeperFredrick_Trainer_Text_0, Falkner_BirdKeeperFredrick_Trainer_Text_1
	goto Falkner_BirdKeeperFredrick_Trainer_1


Falkner_GymLeaderFalkner_Trainer::
# 49 "data/maps/VioletCity_FalknerGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VIOLET_GYM, Falkner_GymLeaderFalkner_Trainer_2
# 58 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_GymLeaderFalkner_Trainer_Text_5
Falkner_GymLeaderFalkner_Trainer_1:
# 60 "data/maps/VioletCity_FalknerGym/scripts.pory"
	releaseall
	return

Falkner_GymLeaderFalkner_Trainer_2:
# 50 "data/maps/VioletCity_FalknerGym/scripts.pory"
	trainerbattle_single TRAINER_FALKNER_1, Falkner_GymLeaderFalkner_Trainer_Text_0, Falkner_GymLeaderFalkner_Trainer_Text_1
# 51 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_GymLeaderFalkner_Trainer_Text_2
# 52 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_GymLeaderFalkner_Trainer_Text_3
# 53 "data/maps/VioletCity_FalknerGym/scripts.pory"
	giveitem ITEM_TM40
# 54 "data/maps/VioletCity_FalknerGym/scripts.pory"
	msgbox Falkner_GymLeaderFalkner_Trainer_Text_4
# 55 "data/maps/VioletCity_FalknerGym/scripts.pory"
	setflag FLAG_DEFEATED_VIOLET_GYM
	goto Falkner_GymLeaderFalkner_Trainer_1


Falkner_GymGuide_Text_0:
# 5 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "Heya, champ in the making! This gym\n"
	.string "belongs to Falkner, the bird Pokemon\l"
	.string "master. He uses flying type Pokemon! Do\l"
	.string "you want a tip?$"

Falkner_GymGuide_Text_1:
# 7 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "Ice, electric, and rock moves are all\n"
	.string "good against flying type Pokemon. Avoid\l"
	.string "using ground type moves though, those\l"
	.string "can't hit at all!$"

Falkner_GymGuide_Text_2:
# 10 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "Alright! Here, take a potion on me.$"

Falkner_GymGuide_Text_3:
# 16 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "Well done! You're going to do great\n"
	.string "things!$"

Falkner_BirdKeeperAbe_Trainer_Text_0:
# 23 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "You'll never be ready to face Falkner -\n"
	.string "not even in a thousand lightyears!$"

Falkner_BirdKeeperAbe_Trainer_Text_1:
# 23 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "Wait, light years measure distance, not\n"
	.string "time!$"

Falkner_BirdKeeperAbe_Trainer_Text_2:
# 25 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "Nicely done! Not many people could beat\n"
	.string "Falkner like that.$"

Falkner_BirdKeeperRod_Trainer_Text_0:
# 32 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "Get ready to face the strength of my\n"
	.string "bird Pokemon!$"

Falkner_BirdKeeperRod_Trainer_Text_1:
# 32 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "We were completely overwhelmed...$"

Falkner_BirdKeeperRod_Trainer_Text_2:
# 34 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "Wow! You're incredible!$"

Falkner_BirdKeeperFredrick_Trainer_Text_0:
# 41 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "If you want to face Falkner, you have\n"
	.string "to go through me!$"

Falkner_BirdKeeperFredrick_Trainer_Text_1:
# 41 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "I wasn't as much of a block as I\n"
	.string "thought.$"

Falkner_BirdKeeperFredrick_Trainer_Text_2:
# 43 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "Falkner was no match for you either!$"

Falkner_GymLeaderFalkner_Trainer_Text_0:
# 50 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "I'm Falkner, the Violet City Pokemon Gym\n"
	.string "Leader! People say you can clip\l"
	.string "Flying-type Pokemon's wings with a joly\l"
	.string "of electricity... I won't allow such\l"
	.string "insults to bird Pokemon! I'll show you\l"
	.string "the real power of the magnificent bird\l"
	.string "Pokemon!$"

Falkner_GymLeaderFalkner_Trainer_Text_1:
# 50 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "I understand... I'll bow out gracefully.$"

Falkner_GymLeaderFalkner_Trainer_Text_2:
# 51 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "... For pity's sake! My dad's cherished\n"
	.string "bird Pokemon... But a defeat is a defeat.\l"
	.string "All right. Take this official Pokemon\l"
	.string "League Badge. This one is the Zephyr\l"
	.string "Badge. With that Badge, Pokemon,\l"
	.string "including traded Pokemon up to Lv. 20,\l"
	.string "will obey you without question. It also\l"
	.string "enables you to use the hidden move\l"
	.string "Rock Smash anytime outside of battle.$"

Falkner_GymLeaderFalkner_Trainer_Text_3:
# 52 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "By using a TM, a Pokemon will instantly\n"
	.string "learn a new move. TMs can be used any\l"
	.string "number of times you want! TM40\l"
	.string "contains Aerial Ace. It can never miss.$"

Falkner_GymLeaderFalkner_Trainer_Text_4:
# 54 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "There are Pokemon Gyms in cities and\n"
	.string "towns ahead. Make good use of them! As\l"
	.string "for your next move... I would suggest\l"
	.string "Azalea Town.$"

Falkner_GymLeaderFalkner_Trainer_Text_5:
# 58 "data/maps/VioletCity_FalknerGym/scripts.pory"
	.string "There are Pokemon Gyms in cities and\n"
	.string "towns ahead. Make good use of them! As\l"
	.string "for your next move... I would suggest\l"
	.string "Azalea Town. I'm going to train harder\l"
	.string "to become the greatest Bird Keeper of\l"
	.string "all!$"
