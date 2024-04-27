Route29_MapScripts::
# 2 "data/maps/Route29/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
# 3 "data/maps/Route29/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0


Route29_Item_Potion::
# 7 "data/maps/Route29/scripts.pory"
	finditem ITEM_POTION
	return


Route29_RouteMarker::
# 11 "data/maps/Route29/scripts.pory"
	msgbox Route29_RouteMarker_Text_0
# 12 "data/maps/Route29/scripts.pory"
	release
	return


Route29_ReverseMarker::
# 16 "data/maps/Route29/scripts.pory"
	msgbox Route29_ReverseMarker_Text_0
# 17 "data/maps/Route29/scripts.pory"
	release
	return


PokemonCatchingTutorial::
# 21 "data/maps/Route29/scripts.pory"
	goto_if_unset FLAG_ADVENTURE_STARTED, PokemonCatchingTutorial_1
# 26 "data/maps/Route29/scripts.pory"
	msgbox PokemonCatchingTutorial_Text_1
# 27 "data/maps/Route29/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 28 "data/maps/Route29/scripts.pory"
	release
	return

PokemonCatchingTutorial_1:
# 22 "data/maps/Route29/scripts.pory"
	msgbox PokemonCatchingTutorial_Text_0
# 23 "data/maps/Route29/scripts.pory"
	release
	return


Route29_WanderingBoy::
# 33 "data/maps/Route29/scripts.pory"
	msgbox Route29_WanderingBoy_Text_0
# 34 "data/maps/Route29/scripts.pory"
	release
	return


Route29_FatMan::
# 38 "data/maps/Route29/scripts.pory"
	msgbox Route29_FatMan_Text_0
# 39 "data/maps/Route29/scripts.pory"
	release
	return


Route29_GirlByTree::
# 43 "data/maps/Route29/scripts.pory"
	msgbox Route29_GirlByTree_Text_0
# 44 "data/maps/Route29/scripts.pory"
	release
	return


Route29_LedgeLady::
# 48 "data/maps/Route29/scripts.pory"
	msgbox Route29_LedgeLady_Text_0
# 49 "data/maps/Route29/scripts.pory"
	release
	return


Route29_RouteMarker_Text_0:
# 11 "data/maps/Route29/scripts.pory"
	.string "ROUTE 29\n"
	.string "New Bark Town to Cherrygrove City$"

Route29_ReverseMarker_Text_0:
# 16 "data/maps/Route29/scripts.pory"
	.string "ROUTE 29\n"
	.string "Cherrygrove City to New Bark Town$"

PokemonCatchingTutorial_Text_0:
# 22 "data/maps/Route29/scripts.pory"
	.string "Pokemon hide in the grass. Who knows\n"
	.string "when they'll pop out...$"

PokemonCatchingTutorial_Text_1:
# 26 "data/maps/Route29/scripts.pory"
	.string "Hey! You look like you could use some\n"
	.string "Pokeballs. Here!$"

Route29_WanderingBoy_Text_0:
# 33 "data/maps/Route29/scripts.pory"
	.string "Yo. How are your Pokemon? If they're\n"
	.string "weak and not ready for battle, keep out\l"
	.string "of the grass.$"

Route29_FatMan_Text_0:
# 38 "data/maps/Route29/scripts.pory"
	.string "I wanted to take a break, so I saved to\n"
	.string "record my progress.$"

Route29_GirlByTree_Text_0:
# 43 "data/maps/Route29/scripts.pory"
	.string "I'm waiting for Pokemon that appear\n"
	.string "only at night.$"

Route29_LedgeLady_Text_0:
# 48 "data/maps/Route29/scripts.pory"
	.string "See those ledges? It's scary to jump\n"
	.string "off them. But you can go to New Bark\l"
	.string "without walking through the grass.$"
