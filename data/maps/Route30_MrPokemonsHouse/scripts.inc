Route30_MrPokemonsHouse_MapScripts::
# 2 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route30_MrPokemonsHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route30_MrPokemonsHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	map_script_2 VAR_NEW_BARK_INTRO_STATE, 1, DeliverEggFromElm
	.2byte 0


DeliverEggFromElm::
# 8 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox DeliverEggFromElm_Text_0
# 9 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	giveitem ITEM_MYSTERY_EGG
# 10 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox DeliverEggFromElm_Text_1
# 11 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	call OakGivePokedex
# 12 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	releaseall
	return


OakGivePokedex::
# 16 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox OakGivePokedex_Text_0
# 17 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox OakGivePokedex_Text_1
# 18 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 19 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 20 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	setvar VAR_NEW_BARK_INTRO_STATE, 2
# 21 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox OakGivePokedex_Text_2
# 22 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	call ReturningToElm
# 23 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	releaseall
	return


ReturningToElm::
# 27 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox ReturningToElm_Text_0
# 28 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 29 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox ReturningToElm_Text_1
	return


DeliverEggFromElm_Text_0:
# 8 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "Mr. Pokemon: Hello, hello! You must be\n"
	.string "{PLAYER}. It was I who sent an email\l"
	.string "to Professor Elm earlier. This is what I\l"
	.string "want him to examine.$"

DeliverEggFromElm_Text_1:
# 10 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "A friend of mine from Ecruteak gave it\n"
	.string "to me. I bet you can't find this kind of\l"
	.string "egg in Johto! I thought Professor Elm\l"
	.string "might eb able to tell me what this is. To\l"
	.string "quote Professor Oak, 'He's the best\l"
	.string "when it comes to the research of\l"
	.string "Pokemon evolution'.$"

OakGivePokedex_Text_0:
# 16 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "Oak: Aha! So you're {PLAYER}! I'm\n"
	.string "Professor Oak, a Pokemon researcher. I\l"
	.string "was just visiting my old friend Mr.\l"
	.string "Pokemon. I heard you were running an\l"
	.string "errand for Professor Elm, so I waited\l"
	.string "here. Oh? What's this? A rare Pokemon!\l"
	.string "Let's see...\p"
	.string "Hm, I see!\p"
	.string "I understand why Professor Elm gave\n"
	.string "you a Pokemon for this errand. To\l"
	.string "researchers like Professor Elm and I,\l"
	.string "Pokemon are our friends. He saw that\l"
	.string "you would treat your Pokemon with love\l"
	.string "and care. ... Ah! You seem to be\l"
	.string "dependable. How would you like to help\l"
	.string "me out? See? This is the latest version\l"
	.string "of a Pokedex. It automatically records\l"
	.string "data on Pokemon you've seen or caught.\l"
	.string "It's a hi-tech encyclopedia!$"

OakGivePokedex_Text_1:
# 17 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "{PLAYER} received a Pokedex!$"

OakGivePokedex_Text_2:
# 21 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "Oak: Go meet many kinds of Pokemon and\n"
	.string "complete that Pokedex! But I've stayed\l"
	.string "too long. I have to get to Goldenrod\l"
	.string "City for my usual radio show.\l"
	.string "{PLAYER}, I'm counting on you!$"

ReturningToElm_Text_0:
# 27 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "Mr. Pokemon: You are returning to\n"
	.string "Professor Elm? Here. Your Pokemon\l"
	.string "should have some rest.$"

ReturningToElm_Text_1:
# 29 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "I'm depending on you!$"
