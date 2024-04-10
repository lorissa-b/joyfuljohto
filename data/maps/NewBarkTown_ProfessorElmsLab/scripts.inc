NewBarkTown_ProfessorElmsLab_MapScripts::
	.byte 0

NewBarkTown_ProfessorElmsLab_EventScript_FirstEnterLab::
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_ProfessorElmsLab_Movement_PlayerEntersLabForStarter
	waitmovement 0
	goto NewBarkTown_ProfessorElmsLab_EventScript_ChooseStarterIntro
	end

NewBarkTown_ProfessorElmsLab_Movement_PlayerEntersLabForStarter::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

NewBarkTown_ProfessorElmsLab_EventScript_ChooseStarterIntro::
	msgbox NewBarkTown_ProfessorElmsLab_Text_StartingResearch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_ProfessorElmsLab_EventScript_ChooseStarter
	goto_if_eq VAR_RESULT, NO, NewBarkTown_ProfessorElmsLab_EventScript_AreYouSure
	end

NewBarkTown_ProfessorElmsLab_EventScript_ChooseStarter::
	msgbox NewBarkTown_ProfessorElmsLab_Text_GotAnEmail, MSGBOX_DEFAULT
	release
	special ChooseStarter
	waitstate
	call Common_EventScript_NameReceivedPartyMon
	setvar VAR_BIRCH_LAB_STATE, 2
	msgbox NewBarkTown_ProfessorElmsLab_Text_StartAdventure, MSGBOX_DEFAULT
	releaseall
	end

NewBarkTown_ProfessorElmsLab_EventScript_AreYouSure::
	msgbox NewBarkTown_ProfessorElmsLab_Text_AreYouSure, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_ProfessorElmsLab_EventScript_ChooseStarter
	goto_if_eq VAR_RESULT, NO, NewBarkTown_ProfessorElmsLab_EventScript_AreYouSure
	end

NewBarkTown_ProfessorElmsLab_EventScript_GivePotions::
	lock
	faceplayer
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, NewBarkTown_ProfessorElmsLab_EventScript_AideReceivedStarter
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
	setflag FLAG_BIRCH_AIDE_MET
	release
	end

NewBarkTown_ProfessorElmsLab_EventScript_AideAlreadyMet::
	release
	end

NewBarkTown_ProfessorElmsLab_EventScript_AideReceivedStarter::
	msgbox NewBarkTown_ProfessorElmsLab_Text_TakeThesePotions, MSGBOX_DEFAULT
	giveitem ITEM_POTION, 5
	release
	end

NewBarkTown_ProfessorElmsLab_Text_StartingResearch::
	.string "{PLAYER}! There you are!\p"
	.string "I needed to ask you a favor. I'm\n"
	.string "conducting new Pokemon research right\l"
	.string "now. I was wondering if you could help\l"
	.string "me with it, {PLAYER}.\p"
	.string "You see...\p"
	.string "I'm writing a paper that I want to\n"
	.string "present at a conference. But there are\l"
	.string "some things I don't quite understand\l"
	.string "yet. So!\p"
	.string "I'd like you to raise a Pokemon that I\n"
	.string "recently caught.$"

NewBarkTown_ProfessorElmsLab_Text_AreYouSure::
	.string "Are you sure? I'd really like you\n"
	.string "to raise one.$"

NewBarkTown_ProfessorElmsLab_Text_GotAnEmail::
	.string "Thanks, {PLAYER}! You're a great help!\n"
	.string "When I announce my findings, I'm sure\l"
	.string "we'll delve a bit deeper into the many\l"
	.string "mysteries of Pokemon. You can count on it!\p"
	.string "Oh, hey! I got an email!\p"
	.string "... ... ... ...\p"
	.string "Hm... Uh-huh...\p"
	.string "Okay...\p"
	.string "Hey, listen. I have an acquaintance\n"
	.string "called Mr. Pokemon. He keeps finding\l"
	.string "weird things and raving about his\l"
	.string "discoveries. Anyway, I just got an e-mail\l"
	.string "from him saying that this time it's real.\l"
	.string "It is intriguing, but we're busy with our\l"
	.string "Pokemon research...\p"
	.string "Wait! I know!\p"
	.string "{PLAYER}, can you go in our place? I want\n"
	.string "you to raise one of the Pokemon contained\l"
	.string "in these balls. You'll be that Pokemon's\l"
	.string "first partner, {PLAYER}! Go on. Pick one!$"

NewBarkTown_ProfessorElmsLab_Text_StartAdventure::
	.string "Mr. Pokemon lives a bit beyond Cherrygrove,\n"
	.string "the next city over. It's almost a direct\l"
	.string "route there, so you can't miss it. But just\l"
	.string "in case, here's my phone number. Call me if\l"
	.string "anything comes up!\p"
	.string "{PLAYER} got Elm's phone number.\p"
	.string "If your Pokemon is hurt, you should heal it\n"
	.string "with this machine. Feel free to use it\l"
	.string "anytime. {PLAYER}, I'm counting on you!$"

NewBarkTown_ProfessorElmsLab_Text_TakeThesePotions::
	.string "Wait! Take these potions with you!$"