Route30_BerryHouse_MapScripts::
	.byte 0


Route30_BerryMaster::
# 4 "data/maps/Route30_BerryHouse/scripts.pory"
	msgbox Route30_BerryMaster_Text_0
# 5 "data/maps/Route30_BerryHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route30_BerryMaster_1
# 13 "data/maps/Route30_BerryHouse/scripts.pory"
	msgbox Route30_BerryMaster_Text_3
# 14 "data/maps/Route30_BerryHouse/scripts.pory"
	release
	return

Route30_BerryMaster_1:
# 6 "data/maps/Route30_BerryHouse/scripts.pory"
	msgbox Route30_BerryMaster_Text_1
# 7 "data/maps/Route30_BerryHouse/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 8 "data/maps/Route30_BerryHouse/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 9 "data/maps/Route30_BerryHouse/scripts.pory"
	msgbox Route30_BerryMaster_Text_2
# 10 "data/maps/Route30_BerryHouse/scripts.pory"
	releaseall
	return


Route30_BerryMaster_Text_0:
# 4 "data/maps/Route30_BerryHouse/scripts.pory"
	.string "Have you heard about the power of\n"
	.string "berries? They're fantastic!$"

Route30_BerryMaster_Text_1:
# 6 "data/maps/Route30_BerryHouse/scripts.pory"
	.string "Oh, you don't even have a Wailmer Pail!\n"
	.string "You can't understand the power of\l"
	.string "berries without a Wailmer Pail! Here,\l"
	.string "take this one.$"

Route30_BerryMaster_Text_2:
# 9 "data/maps/Route30_BerryHouse/scripts.pory"
	.string "Berries only grow on trees that thrive\n"
	.string "in soft, loamy soil. If you take some\l"
	.string "berries, be sure to plant one in the\l"
	.string "loamy soil again. A planted berry will\l"
	.string "soon sprout, grow into a plant, flower\l"
	.string "beautifully, then grow berries again.$"

Route30_BerryMaster_Text_3:
# 13 "data/maps/Route30_BerryHouse/scripts.pory"
	.string "If you pick any berries, be sure to\n"
	.string "plant one again!$"
