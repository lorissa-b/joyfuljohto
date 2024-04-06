NewBarkTown_PlayerHouse_1F_MapScripts::
	.byte 0

NewBarkTown_PlayerHouse_1F_Text_Introduction::
	message NewBarkTown_PlayerHouse_1F_Text_YoureUp
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBarkTown_PlayerHouse_1F_Text_YoureUp, MSGBOX_DEFAULT
	release
	waitfanfare
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	msgbox NewBarkTown_PlayerHouse_1F_Text_ReceivedPokenav, MSGBOX_DEFAULT
	release
	msgbox NewBarkTown_PlayerHouse_1F_Text_PokenavExplain, MSGBOX_DEFAULT
	release
	special StartWallClock
	waitstate
	setflag FLAG_SET_WALL_CLOCK
	msgbox NewBarkTown_PlayerHouse_1F_Text_ResetClock, MSGBOX_DEFAULT
	release
	msgbox NewBarkTown_PlayerHouse_1F_Text_PhoneTutorial, MSGBOX_DEFAULT
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setflag FLAG_HAS_MATCH_CALL
	setvar VAR_NEW_BARK_INTRO_STATE, 1
	releaseall
	end

NewBarkTown_PlayerHouse_1F_Text_YoureUp::
	.string "Oh good you're up, {PLAYER}! Professor\n"
	.string "Elm was looking for you. He said he\n"
	.string "wanted you to do something for him.\l"
	.string "Oh! I almost forgot! Your Pokenav\n"
	.string "is back from the repair shop. Here\n"
	.string "you go!$"

NewBarkTown_PlayerHouse_1F_Text_ReceivedPokenav::
	.string "{PLAYER} received a POKéNAV.$"

NewBarkTown_PlayerHouse_1F_Text_PokenavExplain::
	.string "Your Pokenav is essential if you want to\n"
	.string "be a good trainer. Oh, the time isn't\l"
	.string "set. You can't forget that!$"

NewBarkTown_PlayerHouse_1F_Text_ResetClock::
	.string "Come home if you ever need to reset\n"
	.string "your clock.$"

NewBarkTown_PlayerHouse_1F_Text_PhoneTutorial::
	.string "By the way, do you know how to use\n"
	.string "the phone? Either way, I'll read the\l"
	.string "instructions. Turn the Pokenav on and select\n"
	.string "the Call item. Phone numbers are stored\n"
	.string "in memory. Just choose the name you want\n"
	.string "to call. Gee, isn't that convenient?$"
