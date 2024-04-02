NewBarkTown_PlayerHouse_2F_MapScripts::
	.byte 0

NewBarkTown_PlayerHouse_2F_EventScript_SetIntroFlags::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setrespawn HEAL_LOCATION_NEW_BARK_TOWN_PLAYER_HOUSE_2F
	setvar VAR_NEW_BARK_INTRO_STATE, 1
	releaseall
	end
