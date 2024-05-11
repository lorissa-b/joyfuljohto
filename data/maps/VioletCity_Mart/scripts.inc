VioletCity_Mart_MapScripts::
	.byte 0


VioletCity_Mart_Clerk::
# 4 "data/maps/VioletCity_Mart/scripts.pory"
	lock
# 5 "data/maps/VioletCity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/VioletCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/VioletCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/VioletCity_Mart/scripts.pory"
	pokemart VioletCity_MartItems
# 9 "data/maps/VioletCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/VioletCity_Mart/scripts.pory"
	release
	return


VioletCity_Mart_Clerk2::
# 14 "data/maps/VioletCity_Mart/scripts.pory"
	lock
# 15 "data/maps/VioletCity_Mart/scripts.pory"
	faceplayer
# 16 "data/maps/VioletCity_Mart/scripts.pory"
	message VioletCity_Mart_Clerk2_Text_0
# 17 "data/maps/VioletCity_Mart/scripts.pory"
	waitmessage
# 18 "data/maps/VioletCity_Mart/scripts.pory"
	pokemart VioletCity_MartSpecialtyItems
# 19 "data/maps/VioletCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 20 "data/maps/VioletCity_Mart/scripts.pory"
	release
	return


	.align 2
# 23 "data/maps/VioletCity_Mart/scripts.pory"
VioletCity_MartItems:
# 24 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 25 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 26 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 30 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFEND
# 31 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 32 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
	.2byte ITEM_NONE

	.align 2
# 35 "data/maps/VioletCity_Mart/scripts.pory"
VioletCity_MartSpecialtyItems:
# 36 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_GLITTER_MAIL
# 37 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 38 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 39 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 40 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 41 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 42 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 43 "data/maps/VioletCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

VioletCity_Mart_Clerk2_Text_0:
# 16 "data/maps/VioletCity_Mart/scripts.pory"
	.string "Looking for specialty items?$"
