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
#if !defined _inc_fixes
	// If fixes.inc hasn't been included, include it.
	// This ensures backwards compatibility with gamemodes that already have it.

	#if defined USING_SAMPCTL
		#tryinclude <fixes>

		#if !defined _inc_fixes
			#error fixes hasn't been installed using sampctl. Please install it!
		#endif
	#else
		#include <vendor/fixes/fixes>
	#endif
#endif

/*
	ugmp
	By the UGMP team.
	Repo: closed source
*/
#include <ugmp>