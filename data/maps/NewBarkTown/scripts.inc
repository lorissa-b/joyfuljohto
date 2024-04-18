@ State descriptions for VAR_NEW_BARK_INTRO_STATE
@ 1: Set clock

NewBarkTown_MapScripts::
	.byte 0

NewBarkTown_EventScript_TownSign::
	msgbox NewBarkTown_Text_TownSign, MSGBOX_DEFAULT
	return

NewBarkTown_EventScript_ProfElmsLabSign::
	msgbox NewBarkTown_Text_ProfElmsLab, MSGBOX_DEFAULT
	return

NewBarkTown_EventScript_PlayersHouseSign::
	msgbox NewBarkTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return

NewBarkTown_EventScript_ProfElmsHouse::
	msgbox NewBarkTown_Text_TownSign, MSGBOX_DEFAULT
	return

NewBarkTown_Text_TownSign:
	.string "NEW BARK TOWN\n"
	.string "“Winds of a New Beginning”$"

NewBarkTown_Text_ProfElmsLab:
	.string "PROF. ELM'S POKéMON LAB$"

NewBarkTown_Text_PlayersHouse:
	.string "{PLAYER}'s HOUSE$"

NewBarkTown_Text_ProfElmsHouse:
	.string "PROF. ELM'S HOUSE$"
