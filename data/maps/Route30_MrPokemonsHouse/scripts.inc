Route30_MrPokemonsHouse_MapScripts::
	.byte 0


DeliverEggFromElm::
# 4 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox DeliverEggFromElm_Text_0
# 5 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox DeliverEggFromElm_Text_1
# 6 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox DeliverEggFromElm_Text_2
# 7 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	releaseall
	return


OakGivePokedex::
# 11 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox OakGivePokedex_Text_0
# 12 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox OakGivePokedex_Text_1
# 13 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 14 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	setvar VAR_NEW_BARK_INTRO_STATE, 2
# 15 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox OakGivePokedex_Text_2
# 16 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	releaseall
	return


ReturningToElm::
# 20 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox ReturningToElm_Text_0
# 21 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	msgbox ReturningToElm_Text_1
	return


DeliverEggFromElm_Text_0:
# 4 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "Hello, hello! You must be {PLAYER}. It\n"
	.string "was I who sent an email to Professor Elm\l"
	.string "earlier. This is what I want him to\l"
	.string "examine.$"

DeliverEggFromElm_Text_1:
# 5 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "{PLAYER} reveived Mysterious Egg!$"

DeliverEggFromElm_Text_2:
# 6 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "A friend of mine from Ecruteak gave it\n"
	.string "to me. I bet you can't find this kind of\l"
	.string "egg in Johto! I thought Professor Elm\l"
	.string "might eb able to tell me what this is. To\l"
	.string "quote Professor Oak, 'He's the best\l"
	.string "when it comes to the research of\l"
	.string "Pokemon evolution'.$"

OakGivePokedex_Text_0:
# 11 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "Aha! So you're {PLAYER}! I'm Professor\n"
	.string "Oak, a Pokemon researcher. I was just\l"
	.string "visiting my old friend Mr. Pokemon. I\l"
	.string "heard you were running an errand for\l"
	.string "Professor Elm, so I waited here. Oh?\l"
	.string "What's this? A rare Pokemon! Let's see...\p"
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
# 12 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "{PLAYER} received a Pokedex!$"

OakGivePokedex_Text_2:
# 15 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "Go meet many kinds of Pokemon and\n"
	.string "complete that Pokedex! But I've stayed\l"
	.string "too long. I have to get to Goldenrod\l"
	.string "City for my usual radio show.\l"
	.string "{PLAYER}, I'm counting on you!$"

ReturningToElm_Text_0:
# 20 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "You are returning to Professor Elm?\n"
	.string "Here. Your Pokemon should have some\l"
	.string "rest.$"

ReturningToElm_Text_1:
# 21 "data/maps/Route30_MrPokemonsHouse/scripts.pory"
	.string "I'm depending on you!$"
