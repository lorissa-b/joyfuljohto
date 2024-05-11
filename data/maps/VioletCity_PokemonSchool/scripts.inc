VioletCity_PokemonSchool_MapScripts::
	.byte 0


PkmSchool_Teacher::
# 5 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Teacher_Text_0
# 6 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LUM_BERRY, PkmSchool_Teacher_2
PkmSchool_Teacher_1:
# 11 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	releaseall
	return

PkmSchool_Teacher_2:
# 7 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Teacher_Text_1
# 8 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	giveitem ITEM_LUM_BERRY
# 9 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_LUM_BERRY
	goto PkmSchool_Teacher_1


PkmSchool_GameboyKid::
# 15 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_GameboyKid_Text_0
# 16 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	release
	return


PkmSchool_Schoolkid::
# 20 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Schoolkid_Text_0
# 21 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	release
	return


PkmSchool_Boy2::
# 25 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Boy2_Text_0
# 26 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	release
	return


PkmSchool_Girl::
# 30 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Girl_Text_0
# 31 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	release
	return


PkmSchool_Lass::
# 35 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Lass_Text_0
# 36 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	release
	return


PkmSchool_Boy1::
# 40 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Boy1_Text_0
# 41 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	release
	return


PkmSchool_Blackboard::
# 45 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	lockall
# 46 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Blackboard_Text_0
# 47 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	call PkmSchool_Blackboard_ChooseStatus
	return


PkmSchool_Blackboard_ChooseStatus::
# 51 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Blackboard_ChooseStatus_Text_0
# 52 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 53 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 54 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	case 0, PkmSchool_Blackboard_ChooseStatus_2
# 58 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	case 1, PkmSchool_Blackboard_ChooseStatus_3
# 62 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	case 2, PkmSchool_Blackboard_ChooseStatus_4
# 66 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	case 3, PkmSchool_Blackboard_ChooseStatus_5
# 70 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	case 4, PkmSchool_Blackboard_ChooseStatus_6
# 74 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	case 5, PkmSchool_Blackboard_ChooseStatus_7
# 75 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, PkmSchool_Blackboard_ChooseStatus_7
	return

PkmSchool_Blackboard_ChooseStatus_2:
# 56 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Blackboard_ChooseStatus_Text_1
# 57 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	call PkmSchool_Blackboard_ChooseStatus
	return

PkmSchool_Blackboard_ChooseStatus_3:
# 60 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Blackboard_ChooseStatus_Text_2
# 61 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	call PkmSchool_Blackboard_ChooseStatus
	return

PkmSchool_Blackboard_ChooseStatus_4:
# 64 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Blackboard_ChooseStatus_Text_3
# 65 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	call PkmSchool_Blackboard_ChooseStatus
	return

PkmSchool_Blackboard_ChooseStatus_5:
# 68 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Blackboard_ChooseStatus_Text_4
# 69 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	call PkmSchool_Blackboard_ChooseStatus
	return

PkmSchool_Blackboard_ChooseStatus_6:
# 72 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	msgbox PkmSchool_Blackboard_ChooseStatus_Text_5
# 73 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	call PkmSchool_Blackboard_ChooseStatus
	return

PkmSchool_Blackboard_ChooseStatus_7:
# 76 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	releaseall
	return


PkmSchool_Teacher_Text_0:
# 5 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "I teach here at the Violet City Pokemon\n"
	.string "School. Feel free to read the\l"
	.string "blackboard, or talk with some of my\l"
	.string "students.$"

PkmSchool_Teacher_Text_1:
# 7 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "And here, have a berry to help you out!\n"
	.string "You can either plant it or use it.$"

PkmSchool_GameboyKid_Text_0:
# 15 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "I'm from Hoenn, and trying to get more\n"
	.string "local Pokemon. Do you want to trade\l"
	.string "your Sentret for my Zigzagoon?$"

PkmSchool_Schoolkid_Text_0:
# 20 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "Sssshhh! I'm trying to pay attention to\n"
	.string "the lesson!$"

PkmSchool_Boy2_Text_0:
# 25 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "School is so boring! I'd rather be\n"
	.string "outside playing with my Ledyba!$"

PkmSchool_Girl_Text_0:
# 30 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "My book says that flying Pokemon are\n"
	.string "weak to electric, ground, and ice type\l"
	.string "moves! Did you know that?$"

PkmSchool_Lass_Text_0:
# 35 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "My Teddiursa got lost in the Dark Cave,\n"
	.string "and I'm too scared to go find her! Can\l"
	.string "you help me?$"

PkmSchool_Boy1_Text_0:
# 40 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "You need a Pokemon with Flash or a\n"
	.string "flashlight to make it through the Dark\l"
	.string "Cave! It's spooky in there.$"

PkmSchool_Blackboard_Text_0:
# 46 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
	.string "that may affect a Pokemon in battle.$"

PkmSchool_Blackboard_ChooseStatus_Text_0:
# 51 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "Which status would you like to read\n"
	.string "about?$"

PkmSchool_Blackboard_ChooseStatus_Text_1:
# 56 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "If a Pokemon is poisoned, it will\n"
	.string "steadily lose HP. The effects of poison\l"
	.string "last outside of battle. A poisoned\l"
	.string "Pokemon will lose HP while traveling. Use\l"
	.string "an Antidote to heal poison.$"

PkmSchool_Blackboard_ChooseStatus_Text_2:
# 60 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "If a Pokemon becomes paralyzed, its\n"
	.string "speed drops. It may also not be able to\l"
	.string "move while it is in battle. Paralysis\l"
	.string "remains after battle. Use a Paralyze\l"
	.string "Heal to cure paralysis.$"

PkmSchool_Blackboard_ChooseStatus_Text_3:
# 64 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "If a Pokemon falls asleep, it will be\n"
	.string "unable to attack. A Pokemon may wake up\l"
	.string "on its own, but if a battle ends while it\l"
	.string "is sleeping, it will stay sleeping. Cure\l"
	.string "sleep with an Awakening.$"

PkmSchool_Blackboard_ChooseStatus_Text_4:
# 68 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "A burn reduces attack power, as well as\n"
	.string "steadily reducing a Pokemon's health. A\l"
	.string "burn lingers after battle, but does not\l"
	.string "hurt a Pokemon during travel. Use a Burn\l"
	.string "Heal to cure a burn.$"

PkmSchool_Blackboard_ChooseStatus_Text_5:
# 72 "data/maps/VioletCity_PokemonSchool/scripts.pory"
	.string "If a Pokemon is frozen, it becomes\n"
	.string "completely helpless. It will remain\l"
	.string "frozen after battle. Thaw it out using\l"
	.string "an Ice Heal.$"
