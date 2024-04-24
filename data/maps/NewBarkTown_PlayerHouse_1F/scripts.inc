NewBarkTown_PlayerHouse_1F_MapScripts::
# 5 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewBarkTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NewBarkTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_NEW_BARK_INTRO_STATE, 0, GetPokenav
	.2byte 0


GetPokenav::
# 11 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	msgbox GetPokenav_Text_0
# 12 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkToMom
# 13 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	applymovement 1, faceUp
# 14 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	msgbox GetPokenav_Text_1
# 15 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	release
# 16 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 18 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 19 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 20 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	msgbox GetPokenav_Text_2
# 21 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	release
# 22 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	msgbox GetPokenav_Text_3
# 23 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	release
# 24 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	special StartWallClock
# 25 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	waitstate
# 26 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 27 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	msgbox GetPokenav_Text_4
# 28 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	msgbox GetPokenav_Text_5, MSGBOX_YESNO
# 29 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	msgbox GetPokenav_Text_6
# 30 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_NEW_BARK_INTRO_STATE, 1
# 31 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 1
# 32 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 33 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 34 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


# 37 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
WalkToMom:
# 38 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 39 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 39 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 39 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 40 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 43 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
faceUp:
# 44 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	face_up
	step_end

GetPokenav_Text_0:
# 11 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	.string "Oh good! You're up {PLAYER}!\n"
	.string "Professor Elm was looking for you. He\l"
	.string "said that he wanted you to do\l"
	.string "something for him.$"

GetPokenav_Text_1:
# 14 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	.string "Oh! I almost forgot! Your Pokenav is\n"
	.string "back from the repair shop. Here you go!$"

GetPokenav_Text_2:
# 20 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER} received a Pokenav.$"

GetPokenav_Text_3:
# 22 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	.string "Your Pokenav is essential if you want\n"
	.string "to be a good trainer. Oh! The time isn't\l"
	.string "set! You can't forget that.$"

GetPokenav_Text_4:
# 27 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	.string "Come home if you ever need to reset the\n"
	.string "clock.$"

GetPokenav_Text_5:
# 28 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	.string "Do you know how to use the phone?$"

GetPokenav_Text_6:
# 29 "data/maps/NewBarkTown_PlayerHouse_1F/scripts.pory"
	.string "Turn the Pokenav on and select the Call\n"
	.string "item. Phone numbers are stored in\l"
	.string "memory. Just choose the name you want\l"
	.string "to call! Gee, isn't that convenient?$"
