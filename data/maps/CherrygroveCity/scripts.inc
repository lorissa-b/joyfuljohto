CherrygroveCity_MapScripts::
	.byte 0


CherrygroveCity_Sign::
# 6 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_Sign_Text_0
# 7 "data/maps/CherrygroveCity/scripts.pory"
	release
	return


CherrygroveCity_GuideGentHouse_Sign::
# 11 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGentHouse_Sign_Text_0
# 12 "data/maps/CherrygroveCity/scripts.pory"
	release
	return


CherrygroveCity_WanderingLady::
# 16 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_WanderingLady_Text_0
# 17 "data/maps/CherrygroveCity/scripts.pory"
	release
	return


CherrygroveCity_WanderingBoy::
# 21 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_WanderingBoy_Text_0
# 22 "data/maps/CherrygroveCity/scripts.pory"
	release
	return


CherrygroveCity_GuideGent::
# 26 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_0, MSGBOX_YESNO
# 27 "data/maps/CherrygroveCity/scripts.pory"
	release
# 28 "data/maps/CherrygroveCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CherrygroveCity_GuideGent_1
# 34 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_2
# 35 "data/maps/CherrygroveCity/scripts.pory"
	release
# 36 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_ToPC
# 37 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_ToPC
# 38 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 39 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_3
# 40 "data/maps/CherrygroveCity/scripts.pory"
	release
# 41 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_Player_ToMart
# 42 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GuideGent_Player_ToMart
# 43 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_4
# 45 "data/maps/CherrygroveCity/scripts.pory"
	release
# 46 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_Player_ToRoute30
# 47 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GuideGent_Player_ToRoute30
# 48 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_5
# 50 "data/maps/CherrygroveCity/scripts.pory"
	release
# 51 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_ToSea
# 52 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_ToSea
# 53 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_6
# 55 "data/maps/CherrygroveCity/scripts.pory"
	release
# 56 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_ToHouse
# 57 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_ToHouse
# 58 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 59 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_7
# 60 "data/maps/CherrygroveCity/scripts.pory"
	release
# 61 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_8
# 62 "data/maps/CherrygroveCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 63 "data/maps/CherrygroveCity/scripts.pory"
	release
# 64 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_9
# 65 "data/maps/CherrygroveCity/scripts.pory"
	release
	return

CherrygroveCity_GuideGent_1:
# 29 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_1
# 30 "data/maps/CherrygroveCity/scripts.pory"
	release
	end


# 69 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_ToPC:
# 70 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 70 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 70 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 70 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 70 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 71 "data/maps/CherrygroveCity/scripts.pory"
	walk_up
	step_end

# 74 "data/maps/CherrygroveCity/scripts.pory"
Player_ToPC:
# 75 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 75 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 75 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 75 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 76 "data/maps/CherrygroveCity/scripts.pory"
	walk_up
# 76 "data/maps/CherrygroveCity/scripts.pory"
	walk_up
	step_end

# 79 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_Player_ToMart:
# 80 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 80 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 80 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 80 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 80 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 80 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 81 "data/maps/CherrygroveCity/scripts.pory"
	face_up
	step_end

# 84 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_Player_ToRoute30:
# 85 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 85 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 85 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 85 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 85 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 85 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 85 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 86 "data/maps/CherrygroveCity/scripts.pory"
	face_up
	step_end

# 89 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_ToSea:
# 90 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 90 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 90 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 91 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 91 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 91 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 91 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 92 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 92 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 92 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 92 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 92 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 92 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 92 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
	step_end

# 95 "data/maps/CherrygroveCity/scripts.pory"
Player_ToSea:
# 96 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 96 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 96 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 96 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 97 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 97 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 97 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 98 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 98 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 98 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 98 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 98 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 98 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 98 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
	step_end

# 101 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_ToHouse:
# 102 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 102 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 102 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 102 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 102 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 102 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 102 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 103 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 103 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 103 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 104 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 105 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 105 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 106 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 106 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 106 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 106 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 106 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 106 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 107 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 107 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 107 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 108 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 109 "data/maps/CherrygroveCity/scripts.pory"
	face_left
	step_end

# 112 "data/maps/CherrygroveCity/scripts.pory"
Player_ToHouse:
# 113 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 113 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 113 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 113 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 113 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 113 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 113 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 114 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 114 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 114 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 114 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 114 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 115 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 116 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 117 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 117 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 117 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 117 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 117 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 117 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 118 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 118 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 118 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 119 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 119 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 120 "data/maps/CherrygroveCity/scripts.pory"
	face_right
	step_end

CherrygroveCity_Sign_Text_0:
# 6 "data/maps/CherrygroveCity/scripts.pory"
	.string "CHERRYGROVE CITY\n"
	.string "The City of Fragrant Flowers$"

CherrygroveCity_GuideGentHouse_Sign_Text_0:
# 11 "data/maps/CherrygroveCity/scripts.pory"
	.string "Guide Gent's House$"

CherrygroveCity_WanderingLady_Text_0:
# 16 "data/maps/CherrygroveCity/scripts.pory"
	.string "Did you talk to the old man by the\n"
	.string "Pokemon Center? He'll give you a snazzy\l"
	.string "pair of running shoes!$"

CherrygroveCity_WanderingBoy_Text_0:
# 21 "data/maps/CherrygroveCity/scripts.pory"
	.string "Mr. Pokemon's house is still farther up\n"
	.string "ahead.$"

CherrygroveCity_GuideGent_Text_0:
# 26 "data/maps/CherrygroveCity/scripts.pory"
	.string "You're a rookie trainer, aren't you? I\n"
	.string "can tell! That's okay, everyone is a\l"
	.string "rookie at some point! If you'd like, I\l"
	.string "can teach you a few things.$"

CherrygroveCity_GuideGent_Text_1:
# 29 "data/maps/CherrygroveCity/scripts.pory"
	.string "Oh... it's something I enjoy doing... Fine.\n"
	.string "Come see me when you like.$"

CherrygroveCity_GuideGent_Text_2:
# 34 "data/maps/CherrygroveCity/scripts.pory"
	.string "Okay then! Follow me!$"

CherrygroveCity_GuideGent_Text_3:
# 39 "data/maps/CherrygroveCity/scripts.pory"
	.string "This is a Pokemon Center. They heal your\n"
	.string "Pokemon in no time at all. You'll be\l"
	.string "relying on them a lot, so you better\l"
	.string "learn about them.$"

CherrygroveCity_GuideGent_Text_4:
# 44 "data/maps/CherrygroveCity/scripts.pory"
	.string "This is a Pokemon Mart.\p"
	.string "They sell balls for catching wild\n"
	.string "Pokemon and other useful items.$"

CherrygroveCity_GuideGent_Text_5:
# 49 "data/maps/CherrygroveCity/scripts.pory"
	.string "Route 30 is out this way.\p"
	.string "Trainers will be battling their prized\n"
	.string "Pokemon there.$"

CherrygroveCity_GuideGent_Text_6:
# 54 "data/maps/CherrygroveCity/scripts.pory"
	.string "This is the sea, as you can see. Some\n"
	.string "Pokemon are found only in water.$"

CherrygroveCity_GuideGent_Text_7:
# 59 "data/maps/CherrygroveCity/scripts.pory"
	.string "Here... It's my house! Thanks for your\n"
	.string "company.\p"
	.string "Let me give you a small gift.$"

CherrygroveCity_GuideGent_Text_8:
# 61 "data/maps/CherrygroveCity/scripts.pory"
	.string "{PLAYER} received the running shoes!$"

CherrygroveCity_GuideGent_Text_9:
# 64 "data/maps/CherrygroveCity/scripts.pory"
	.string "Hold B to run. I wish you luck on your\n"
	.string "journey!$"
