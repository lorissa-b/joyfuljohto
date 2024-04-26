.set LOCALID_NURSE, 1

CherrygroveCity_PokemonCentre_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherrygroveCity_PokemonCentre_1F_OnTransition
	.byte 0

CherrygroveCity_PokemonCentre_1F_OnTransition::
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	end

CherrygroveCity_PokemonCentre_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

CherrygroveCity_PokemonCentre_1F_EventScript_BugCatcher::
	msgbox CherrygroveCity_PokemonCentre_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	release
	end

CherrygroveCity_PokemonCentre_1F_EventScript_Schoolboy::
	msgbox CherrygroveCity_PokemonCentre_1F_Text_RoomInBack, MSGBOX_NPC
	release
	end

CherrygroveCity_PokemonCentre_1F_Text_PokemonCentersAreGreat:
	.string "POKéMON CENTERS are great!\p"
	.string "You can use their services as much\n"
	.string "as you like, and it's all for free.\l"
	.string "You never have to worry!$"

CherrygroveCity_PokemonCentre_1F_Text_RoomInBack:
	.string "There's a room in the back of\p"
	.string "the POKéMON CENTER for trainers\l"
	.string "to relax! You should check\l"
	.string "it out.$"
