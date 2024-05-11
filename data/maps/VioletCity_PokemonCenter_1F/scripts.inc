VioletCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VioletCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VioletCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VIOLET_CITY
	return


VioletCity_PkmCenter_Nurse::
# 8 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 9 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 10 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 11 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 12 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	release
	return


VioletCity_PkmCenter_Lass::
# 16 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	msgbox VioletCity_PkmCenter_Lass_Text_0
# 17 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	release
	return


VioletCity_PkmCenter_Lass_Text_0:
# 16 "data/maps/VioletCity_PokemonCenter_1F/scripts.pory"
	.string "Have you checked out the gym yet? You\n"
	.string "have to walk on such a high platform,\l"
	.string "it's scary!$"
