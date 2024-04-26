CherrygroveCity_MapScripts::
	.byte 0


CherrygroveCity_Sign::
# 8 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_Sign_Text_0
# 9 "data/maps/CherrygroveCity/scripts.pory"
	release
	return


CherrygroveCity_GuideGentHouse_Sign::
# 13 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGentHouse_Sign_Text_0
# 14 "data/maps/CherrygroveCity/scripts.pory"
	release
	return


CherrygroveCity_WanderingLady::
# 18 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_WanderingLady_Text_0
# 19 "data/maps/CherrygroveCity/scripts.pory"
	release
	return


CherrygroveCity_WanderingBoy::
# 23 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_WanderingBoy_Text_0
# 24 "data/maps/CherrygroveCity/scripts.pory"
	release
	return


CherrygroveCity_GuideGent::
# 28 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_0, MSGBOX_YESNO
# 29 "data/maps/CherrygroveCity/scripts.pory"
	release
# 30 "data/maps/CherrygroveCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CherrygroveCity_GuideGent_1
# 36 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_2
# 37 "data/maps/CherrygroveCity/scripts.pory"
	release
# 38 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_ToPC
# 39 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_ToPC
# 40 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_3
# 42 "data/maps/CherrygroveCity/scripts.pory"
	release
# 43 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_Player_ToMart
# 44 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GuideGent_Player_ToMart
# 45 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_4
# 47 "data/maps/CherrygroveCity/scripts.pory"
	release
# 48 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_Player_ToRoute30
# 49 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GuideGent_Player_ToRoute30
# 50 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_5
# 52 "data/maps/CherrygroveCity/scripts.pory"
	release
# 53 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_ToSea
# 54 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_ToSea
# 55 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_6
# 57 "data/maps/CherrygroveCity/scripts.pory"
	release
# 58 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, GuideGent_ToHouse
# 59 "data/maps/CherrygroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_ToHouse
# 60 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 61 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_7
# 62 "data/maps/CherrygroveCity/scripts.pory"
	release
# 63 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_8
# 64 "data/maps/CherrygroveCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 65 "data/maps/CherrygroveCity/scripts.pory"
	release
# 66 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_9
# 67 "data/maps/CherrygroveCity/scripts.pory"
	release
	return

CherrygroveCity_GuideGent_1:
# 31 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_GuideGent_Text_1
# 32 "data/maps/CherrygroveCity/scripts.pory"
	release
	end


Cherrygrove_RivalBattleTop::
# 72 "data/maps/CherrygroveCity/scripts.pory"
	goto_if_unset FLAG_CHERRYGROVE_RIVAL, Cherrygrove_RivalBattleTop_3
Cherrygrove_RivalBattleTop_2:
	end

Cherrygrove_RivalBattleTop_1:
# 73 "data/maps/CherrygroveCity/scripts.pory"
	removeobject 4, MAP_CHERRYGROVE_CITY
# 74 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 5, Cherrygrove_Rival_ToPlayerTop
# 75 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/CherrygroveCity/scripts.pory"
	msgbox Cherrygrove_RivalBattleTop_Text_0
# 77 "data/maps/CherrygroveCity/scripts.pory"
	switch VAR_STARTER_MON
# 78 "data/maps/CherrygroveCity/scripts.pory"
	case 0, Cherrygrove_RivalBattleTop_8
# 80 "data/maps/CherrygroveCity/scripts.pory"
	case 1, Cherrygrove_RivalBattleTop_9
# 82 "data/maps/CherrygroveCity/scripts.pory"
	case 2, Cherrygrove_RivalBattleTop_10
Cherrygrove_RivalBattleTop_6:
# 85 "data/maps/CherrygroveCity/scripts.pory"
	msgbox Cherrygrove_RivalBattleTop_Text_2
# 86 "data/maps/CherrygroveCity/scripts.pory"
	releaseall
# 87 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 5, Cherrygrove_Rival_Offscreen
# 88 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/CherrygroveCity/scripts.pory"
	removeobject 5, MAP_CHERRYGROVE_CITY
# 90 "data/maps/CherrygroveCity/scripts.pory"
	setflag FLAG_CHERRYGROVE_RIVAL
# 91 "data/maps/CherrygroveCity/scripts.pory"
	setvar VAR_NEW_BARK_INTRO_STATE, 4
	return

Cherrygrove_RivalBattleTop_3:
# 72 "data/maps/CherrygroveCity/scripts.pory"
	compare VAR_NEW_BARK_INTRO_STATE, 3
	goto_if_eq Cherrygrove_RivalBattleTop_1
	goto Cherrygrove_RivalBattleTop_2

Cherrygrove_RivalBattleTop_8:
# 79 "data/maps/CherrygroveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CHERRYGROVE_CHIKORITA, Cherrygrove_RivalBattleTop_Text_1
	goto Cherrygrove_RivalBattleTop_6

Cherrygrove_RivalBattleTop_9:
# 81 "data/maps/CherrygroveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CHERRYGROVE_CYNDAQUIL, Cherrygrove_RivalBattleTop_Text_1
	goto Cherrygrove_RivalBattleTop_6

Cherrygrove_RivalBattleTop_10:
# 83 "data/maps/CherrygroveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CHERRYGROVE_TOTODILE, Cherrygrove_RivalBattleTop_Text_1
	goto Cherrygrove_RivalBattleTop_6


Cherrygrove_RivalBattleBottom::
# 99 "data/maps/CherrygroveCity/scripts.pory"
	goto_if_unset FLAG_CHERRYGROVE_RIVAL, Cherrygrove_RivalBattleBottom_3
Cherrygrove_RivalBattleBottom_2:
	end

Cherrygrove_RivalBattleBottom_1:
# 100 "data/maps/CherrygroveCity/scripts.pory"
	removeobject 5, MAP_CHERRYGROVE_CITY
# 101 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 4, Cherrygrove_Rival_ToPlayerBottom
# 102 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/CherrygroveCity/scripts.pory"
	msgbox Cherrygrove_RivalBattleTop_Text_0
# 104 "data/maps/CherrygroveCity/scripts.pory"
	switch VAR_STARTER_MON
# 105 "data/maps/CherrygroveCity/scripts.pory"
	case 0, Cherrygrove_RivalBattleBottom_8
# 107 "data/maps/CherrygroveCity/scripts.pory"
	case 1, Cherrygrove_RivalBattleBottom_9
# 109 "data/maps/CherrygroveCity/scripts.pory"
	case 2, Cherrygrove_RivalBattleBottom_10
Cherrygrove_RivalBattleBottom_6:
# 112 "data/maps/CherrygroveCity/scripts.pory"
	msgbox Cherrygrove_RivalBattleTop_Text_2
# 113 "data/maps/CherrygroveCity/scripts.pory"
	releaseall
# 114 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 4, Cherrygrove_Rival_Offscreen
# 115 "data/maps/CherrygroveCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/CherrygroveCity/scripts.pory"
	removeobject 4, MAP_CHERRYGROVE_CITY
# 117 "data/maps/CherrygroveCity/scripts.pory"
	setflag FLAG_CHERRYGROVE_RIVAL
# 118 "data/maps/CherrygroveCity/scripts.pory"
	setvar VAR_NEW_BARK_INTRO_STATE, 4
	return

Cherrygrove_RivalBattleBottom_3:
# 99 "data/maps/CherrygroveCity/scripts.pory"
	compare VAR_NEW_BARK_INTRO_STATE, 3
	goto_if_eq Cherrygrove_RivalBattleBottom_1
	goto Cherrygrove_RivalBattleBottom_2

Cherrygrove_RivalBattleBottom_8:
# 106 "data/maps/CherrygroveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CHERRYGROVE_CHIKORITA, Cherrygrove_RivalBattleTop_Text_1
	goto Cherrygrove_RivalBattleBottom_6

Cherrygrove_RivalBattleBottom_9:
# 108 "data/maps/CherrygroveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CHERRYGROVE_CYNDAQUIL, Cherrygrove_RivalBattleTop_Text_1
	goto Cherrygrove_RivalBattleBottom_6

Cherrygrove_RivalBattleBottom_10:
# 110 "data/maps/CherrygroveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CHERRYGROVE_TOTODILE, Cherrygrove_RivalBattleTop_Text_1
	goto Cherrygrove_RivalBattleBottom_6


# 125 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_ToPC:
# 126 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 126 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 126 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 126 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 126 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 127 "data/maps/CherrygroveCity/scripts.pory"
	walk_up
	step_end

# 130 "data/maps/CherrygroveCity/scripts.pory"
Player_ToPC:
# 131 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 131 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 131 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 131 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 132 "data/maps/CherrygroveCity/scripts.pory"
	walk_up
# 132 "data/maps/CherrygroveCity/scripts.pory"
	walk_up
	step_end

# 135 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_Player_ToMart:
# 136 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 136 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 136 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 136 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 136 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 136 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 137 "data/maps/CherrygroveCity/scripts.pory"
	face_up
	step_end

# 140 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_Player_ToRoute30:
# 141 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 141 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 141 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 141 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 141 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 141 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 141 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 142 "data/maps/CherrygroveCity/scripts.pory"
	face_up
	step_end

# 145 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_ToSea:
# 146 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 146 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 146 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 147 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 147 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 147 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 148 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 148 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 148 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 148 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 148 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 148 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 148 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
	step_end

# 151 "data/maps/CherrygroveCity/scripts.pory"
Player_ToSea:
# 152 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 152 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 152 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 152 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 153 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 153 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 154 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 154 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 154 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 154 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 154 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 154 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 154 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
	step_end

# 157 "data/maps/CherrygroveCity/scripts.pory"
GuideGent_ToHouse:
# 158 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 158 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 158 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 158 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 158 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 158 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 158 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 159 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 159 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 159 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 159 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 160 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 161 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 161 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 162 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 162 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 162 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 162 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 162 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 162 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 163 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 163 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 163 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 164 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 164 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 164 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 165 "data/maps/CherrygroveCity/scripts.pory"
	face_left
	step_end

# 168 "data/maps/CherrygroveCity/scripts.pory"
Player_ToHouse:
# 169 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 169 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 169 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 169 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 169 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 169 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 169 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 170 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 170 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 170 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 170 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 170 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 171 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 172 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 172 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 173 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 173 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 173 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 173 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 173 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 173 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 174 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 174 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 174 "data/maps/CherrygroveCity/scripts.pory"
	walk_down
# 175 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 175 "data/maps/CherrygroveCity/scripts.pory"
	walk_right
# 176 "data/maps/CherrygroveCity/scripts.pory"
	face_right
	step_end

# 179 "data/maps/CherrygroveCity/scripts.pory"
Cherrygrove_Rival_ToPlayerTop:
# 180 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 180 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 180 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 180 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 180 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 180 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 180 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 180 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 181 "data/maps/CherrygroveCity/scripts.pory"
	face_up
	step_end

# 184 "data/maps/CherrygroveCity/scripts.pory"
Cherrygrove_Rival_ToPlayerBottom:
# 185 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 185 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 185 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 185 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 185 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 185 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 185 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 185 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 186 "data/maps/CherrygroveCity/scripts.pory"
	face_down
	step_end

# 189 "data/maps/CherrygroveCity/scripts.pory"
Cherrygrove_Rival_Offscreen:
# 190 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 190 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 190 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 190 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 190 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 190 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 190 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 190 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
# 190 "data/maps/CherrygroveCity/scripts.pory"
	walk_left
	step_end

CherrygroveCity_Sign_Text_0:
# 8 "data/maps/CherrygroveCity/scripts.pory"
	.string "CHERRYGROVE CITY\n"
	.string "The City of Fragrant Flowers$"

CherrygroveCity_GuideGentHouse_Sign_Text_0:
# 13 "data/maps/CherrygroveCity/scripts.pory"
	.string "Guide Gent's House$"

CherrygroveCity_WanderingLady_Text_0:
# 18 "data/maps/CherrygroveCity/scripts.pory"
	.string "Did you talk to the old man by the\n"
	.string "Pokemon Center? He'll give you a snazzy\l"
	.string "pair of running shoes!$"

CherrygroveCity_WanderingBoy_Text_0:
# 23 "data/maps/CherrygroveCity/scripts.pory"
	.string "Mr. Pokemon's house is still farther up\n"
	.string "ahead.$"

CherrygroveCity_GuideGent_Text_0:
# 28 "data/maps/CherrygroveCity/scripts.pory"
	.string "You're a rookie trainer, aren't you? I\n"
	.string "can tell! That's okay, everyone is a\l"
	.string "rookie at some point! If you'd like, I\l"
	.string "can teach you a few things.$"

CherrygroveCity_GuideGent_Text_1:
# 31 "data/maps/CherrygroveCity/scripts.pory"
	.string "Oh... it's something I enjoy doing... Fine.\n"
	.string "Come see me when you like.$"

CherrygroveCity_GuideGent_Text_2:
# 36 "data/maps/CherrygroveCity/scripts.pory"
	.string "Okay then! Follow me!$"

CherrygroveCity_GuideGent_Text_3:
# 41 "data/maps/CherrygroveCity/scripts.pory"
	.string "This is a Pokemon Center. They heal your\n"
	.string "Pokemon in no time at all. You'll be\l"
	.string "relying on them a lot, so you better\l"
	.string "learn about them.$"

CherrygroveCity_GuideGent_Text_4:
# 46 "data/maps/CherrygroveCity/scripts.pory"
	.string "This is a Pokemon Mart.\p"
	.string "They sell balls for catching wild\n"
	.string "Pokemon and other useful items.$"

CherrygroveCity_GuideGent_Text_5:
# 51 "data/maps/CherrygroveCity/scripts.pory"
	.string "Route 30 is out this way.\p"
	.string "Trainers will be battling their prized\n"
	.string "Pokemon there.$"

CherrygroveCity_GuideGent_Text_6:
# 56 "data/maps/CherrygroveCity/scripts.pory"
	.string "This is the sea, as you can see. Some\n"
	.string "Pokemon are found only in water.$"

CherrygroveCity_GuideGent_Text_7:
# 61 "data/maps/CherrygroveCity/scripts.pory"
	.string "Here... It's my house! Thanks for your\n"
	.string "company.\p"
	.string "Let me give you a small gift.$"

CherrygroveCity_GuideGent_Text_8:
# 63 "data/maps/CherrygroveCity/scripts.pory"
	.string "{PLAYER} received the running shoes!$"

CherrygroveCity_GuideGent_Text_9:
# 66 "data/maps/CherrygroveCity/scripts.pory"
	.string "Hold B to run. I wish you luck on your\n"
	.string "journey!$"

Cherrygrove_RivalBattleTop_Text_0:
# 76 "data/maps/CherrygroveCity/scripts.pory"
	.string "... ... ...\p"
	.string "You got a Pokemon at the lab. What a\n"
	.string "waste. A wimp like you.\p"
	.string "... ... ...\p"
	.string "Don't you get what I'm saying? Well I,\n"
	.string "too, have a good Pokemon. I'll show you\l"
	.string "what I mean!$"

Cherrygrove_RivalBattleTop_Text_1:
# 79 "data/maps/CherrygroveCity/scripts.pory"
	.string "Humph. Are you happy you won?$"

Cherrygrove_RivalBattleTop_Text_2:
# 85 "data/maps/CherrygroveCity/scripts.pory"
	.string "... ... ...\p"
	.string "My name's Silver. I'm going to be the\n"
	.string "world's greatest Pokemon trainer.$"
