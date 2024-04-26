NewBarkTown_ProfessorElmsLab_MapScripts::
# 6 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 1, FirstEnter
# 8 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	map_script_2 VAR_NEW_BARK_INTRO_STATE, 4, TalkToPolice
	.2byte 0


FirstEnter::
# 13 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EnterLab
# 14 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 15 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_0
# 16 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_1, MSGBOX_YESNO
FirstEnter_2:
# 17 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne FirstEnter_3
# 20 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_3
# 21 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
# 22 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, WalkToPC
# 23 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 24 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_4
# 25 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
# 26 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkToPokeballs
# 27 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 28 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	special ChooseStarter
# 29 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitstate
# 30 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_5, MSGBOX_YESNO
# 31 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FirstEnter_6
FirstEnter_5:
# 34 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 35 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 36 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_6
# 37 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
# 38 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 39 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_7
# 40 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitfanfare
# 41 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 42 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	delay 30
# 43 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 44 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_8
# 45 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	return

FirstEnter_3:
# 18 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_2, MSGBOX_YESNO
	goto FirstEnter_2

FirstEnter_6:
# 32 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto FirstEnter_5


GivePotions::
# 49 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
	goto_if_ge GivePotions_3
GivePotions_2:
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox GivePotions_Text_1
# 58 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	return

GivePotions_1:
# 50 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 5, FacePlayer
# 51 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox GivePotions_Text_0
# 52 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	giveitem ITEM_POTION, 5
# 53 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
# 54 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
	return

GivePotions_3:
# 49 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_unset FLAG_BIRCH_AIDE_MET, GivePotions_1
	goto GivePotions_2


TalkToPolice::
# 63 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EnterLab
# 64 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 65 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox TalkToPolice_Text_0
# 66 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 6, PoliceExitLab
# 67 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 68 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 69 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_NEW_BARK_INTRO_STATE, 5
# 70 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_POLICE_IN_NEWBARK
# 71 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject 6, MAP_NEW_BARK_TOWN
# 72 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	return


TalkToElm::
# 76 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq TalkToElm_2
# 88 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox TalkToElm_Text_4
TalkToElm_1:
# 90 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	return

TalkToElm_2:
# 77 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox TalkToElm_Text_0
# 78 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox TalkToElm_Text_1
# 79 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, ElmBackUp
# 80 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 81 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox TalkToElm_Text_2
# 82 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, ElmReturnToPlayer
# 83 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 84 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox TalkToElm_Text_3
# 85 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 86 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_ROUTE30_TRAINERS
	goto TalkToElm_1


# 93 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
EnterLab:
# 94 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 94 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 94 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 94 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 94 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 94 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 94 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 94 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
WalkToPC:
# 98 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_left
# 99 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 99 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 100 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_left
# 100 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
WalkToPokeballs:
# 104 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_right
# 104 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_right
# 104 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_right
# 105 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
	step_end

# 108 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
FacePlayer:
# 109 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 110 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	face_player
	step_end

# 113 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
PoliceExitLab:
# 114 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 114 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 114 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 114 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 114 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 114 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 114 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
	step_end

# 117 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
ElmBackUp:
# 118 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock_facing_direction
# 119 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
	step_end

# 122 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
ElmReturnToPlayer:
# 123 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
	step_end

FirstEnter_Text_0:
# 15 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "{PLAYER}! There you are!\p"
	.string "I needed to ask you a favor. I'm\n"
	.string "conducting new Pokemon research right\l"
	.string "now, and I was wondering if you could\l"
	.string "help me with it.\p"
	.string "You see...\p"
	.string "I'm writing a paper that I want to\n"
	.string "present at a conference. But there are\l"
	.string "some things I don't quite understand\l"
	.string "yet. So!\p"
	.string "I'd like you to raise a Pokemon that\n"
	.string "I've recently caught.$"

FirstEnter_Text_1:
# 16 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Will you do this for me?$"

FirstEnter_Text_2:
# 18 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Are you sure? I'd really like you to\n"
	.string "raise one.$"

FirstEnter_Text_3:
# 20 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Thanks, {PLAYER}! You're a great help!\n"
	.string "When I announce my findings I'm sure\l"
	.string "we'll delve a bit deeper into the many\l"
	.string "mysteries of Pokemon. You can count on\l"
	.string "it!$"

FirstEnter_Text_4:
# 24 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, hey! I got an email!\p"
	.string "... ... ... ...\p"
	.string "Hm... Uh-huh... ...\p"
	.string "Okay...\p"
	.string "Hey, listen. I have an acquaintance\n"
	.string "called Mr. Pokemon. He keeps finding\l"
	.string "weird things and raving about his\l"
	.string "discoveries. Anyway, I just got an\l"
	.string "e-mail from him saying that this time\l"
	.string "it's real. It is intriguing, but we're\l"
	.string "busy with our Pokemon research...\p"
	.string "Wait! I know!\p"
	.string "{PLAYER}, can you go in our place? I\n"
	.string "want you to raise one of the Pokemon\l"
	.string "contained in these balls. You'll be that\l"
	.string "Pokemon's first partner, {PLAYER}. Go\l"
	.string "on. Pick one!$"

FirstEnter_Text_5:
# 30 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Do you want to give a nickname to your\n"
	.string "new partner?$"

FirstEnter_Text_6:
# 36 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Mr. Pokemon lives a bit beyong\n"
	.string "Cherrygrove, the next city over. It's\l"
	.string "almost a direct route there, so you\l"
	.string "can't miss it. But just in case, here's my\l"
	.string "phone number. Call me if anything comes\l"
	.string "up!$"

FirstEnter_Text_7:
# 39 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Registered Prof. Elm in the Pokenav!$"

FirstEnter_Text_8:
# 44 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "If your Pokemon is hurt, you should heal\n"
	.string "it with this machine. Feel free to use it\l"
	.string "anytime! {PLAYER}, I'm counting on\l"
	.string "you.$"

GivePotions_Text_0:
# 51 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Wait! Take these potions with you!$"

GivePotions_Text_1:
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Working for Professor Elm is great.$"

TalkToPolice_Text_0:
# 65 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I heard a Pokemon was stolen here... I\n"
	.string "was just getting some information from\l"
	.string "Professor Elm. Apparently, it was a\l"
	.string "young male with long, red hair... What?\p"
	.string "You battled a trainer like that? Okay,\n"
	.string "so his name was Silver. Thanks for\l"
	.string "helping my investigation!$"

TalkToElm_Text_0:
# 77 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "{PLAYER}, this is terrible... Oh, yes,\n"
	.string "what was Mr. Pokemon's big discovery?$"

TalkToElm_Text_1:
# 78 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "{PLAYER} handed the Mysterious Egg\n"
	.string "to Professor Elm$"

TalkToElm_Text_2:
# 81 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "This?$"

TalkToElm_Text_3:
# 84 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "But... Is it a Pokemon egg? If it is, it is\n"
	.string "a great discovery!\p"
	.string "What?!?\n"
	.string "Professor Oak gave you a Pokedex?\l"
	.string "{PLAYER}, is that true? Th-that's\l"
	.string "incredible! He is superb at seeing the\l"
	.string "potential of people as trainers. Wow,\l"
	.string "{PLAYER}. You may have what it takes\l"
	.string "to become the Champion. You seem to be\l"
	.string "getting on great with Pokemon too. You\l"
	.string "should take the Pokemon Gym challenge.\l"
	.string "The closest gym would be the one in\l"
	.string "Violet City. ... {PLAYER}. The road to\l"
	.string "the championship will be a long one.\l"
	.string "Before you leave, make sure that you\l"
	.string "talk to your mom.$"

TalkToElm_Text_4:
# 88 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "It's nice to see you again, {PLAYER}$"
