#if defined _ugmp_included
	#endinput
#endif
#define _ugmp_included

/*
	a_ugmp
	UGMP stdlib (standard library).

	Notes:
		If you are using sampctl, please define USING_SAMPCTL as a compile time constant.
		An example of how to do this can be found here: https://github.com/opencnr/gamemode/blob/master/pawn.json
*/

#if defined _samp_included
	#error Including a_samp is deprecated. Please include a_ugmp.
#endif

/*
	a_samp
	By the SA-MP team.
	Repo: closed source
*/
#include <a_samp>

/*
	fixes
	By Y-Less & co.
	Repo: https://github.com/pawn-lang/sa-mp-fixes
*/
#tryinclude <fixes>
#if !defined _inc_fixes
	#error You need to have sa-mp-fixes. You can obtain it from "https://github.com/pawn-lang/sa-mp-fixes".
#endif

/*
	ugmp
	By the UGMP team.
	Repo: closed source
*/
#include "ugmp"