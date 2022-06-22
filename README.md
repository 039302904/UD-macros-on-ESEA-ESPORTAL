# UD-macros-on-ESEA-ESPORTAL
This is good shit.

Hi, I've been checking all kinds of shit, I
found one way bypass protection. I decided to
do macros. Checked them and realized, that
mouse_event and it's derivatives do not work
(ESPORTAL/ESEA immediately catches this shit
and says "AHK etc, turn it off"). So i decided
to write my own (really genius =) ?)

The point is that ESPORTAL/ESEA catches exactly
WinAPI calls (mouse_event and other derivatives
of NtUserSendInput) if it is not a direct connection
(thanks to X for having such an explicit function like
disabling direct connection).

In order to prevent ESPORTAL/ESEA from realizing
that we are using these functions, it is enough
to write our own in asm (you can do this by simply
reversing the required libraries with id).

                 !WARNING!
This code works only if you have disabled direct
mouse connection.










