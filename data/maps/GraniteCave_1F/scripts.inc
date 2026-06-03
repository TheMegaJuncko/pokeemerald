GraniteCave_1F_MapScripts::
	.byte 0

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_HM_FLASH
	release
	end

GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
	.string "I'd suggest avoiding hitting trees with a car."	
	.string "FLASH? What is that? There's no such thing as a FLASH around here."
	.string "I hope you have a good memory."