NewBarkTown_ProfessorElmsLab_MapScripts::
# 5 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 1, FirstEnter
	.2byte 0


FirstEnter::
# 11 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EnterLab
# 12 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 13 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_0
# 14 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_1, MSGBOX_YESNO
FirstEnter_2:
# 15 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne FirstEnter_3
# 18 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_3
# 19 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
# 20 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, WalkToPC
# 21 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 22 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_4
# 23 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
# 24 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkToPokeballs
# 25 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 26 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	special ChooseStarter
# 27 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitstate
# 28 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_5, MSGBOX_YESNO
# 29 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FirstEnter_6
FirstEnter_5:
# 32 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 33 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 34 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_6
# 35 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
# 36 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 37 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_7
# 38 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitfanfare
# 39 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 40 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	delay 30
# 41 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 42 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_8
# 43 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	return

FirstEnter_3:
# 16 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox FirstEnter_Text_2, MSGBOX_YESNO
	goto FirstEnter_2

FirstEnter_6:
# 30 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto FirstEnter_5


GivePotions::
# 47 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
	goto_if_ge GivePotions_2
	return

GivePotions_1:
# 48 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 5, FacePlayer
# 49 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox GivePotions_Text_0
# 50 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	giveitem ITEM_POTION, 5
# 51 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
# 52 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
	return

GivePotions_2:
# 47 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_unset FLAG_BIRCH_AIDE_MET, GivePotions_1
	return


# 56 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
EnterLab:
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
	step_end

# 60 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
WalkToPC:
# 61 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_left
# 62 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 62 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_down
# 63 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_left
# 63 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_left
	step_end

# 66 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
WalkToPokeballs:
# 67 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_right
# 67 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_right
# 67 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_right
# 68 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
	step_end

# 71 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
FacePlayer:
# 72 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 73 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	face_player
	step_end

FirstEnter_Text_0:
# 13 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
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
# 14 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Will you do this for me?$"

FirstEnter_Text_2:
# 16 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Are you sure? I'd really like you to\n"
	.string "raise one.$"

FirstEnter_Text_3:
# 18 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Thanks, {PLAYER}! You're a great help!\n"
	.string "When I announce my findings I'm sure\l"
	.string "we'll delve a bit deeper into the many\l"
	.string "mysteries of Pokemon. You can count on\l"
	.string "it!$"

FirstEnter_Text_4:
# 22 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
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
# 28 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Do you want to give a nickname to your\n"
	.string "new partner?$"

FirstEnter_Text_6:
# 34 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Mr. Pokemon lives a bit beyong\n"
	.string "Cherrygrove, the next city over. It's\l"
	.string "almost a direct route there, so you\l"
	.string "can't miss it. But just in case, here's my\l"
	.string "phone number. Call me if anything comes\l"
	.string "up!$"

FirstEnter_Text_7:
# 37 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Registered Prof. Elm in the Pokenav!$"

FirstEnter_Text_8:
# 42 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "If your Pokemon is hurt, you should heal\n"
	.string "it with this machine. Feel free to use it\l"
	.string "anytime! {PLAYER}, I'm counting on\l"
	.string "you.$"

GivePotions_Text_0:
# 49 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Wait! Take these potions with you!$"
