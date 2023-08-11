/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Droid Sans Mono Slashed:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char nord0[] = "#2E3440";
static const char nord3[] = "#4C566A";
static const char nord4[] = "#D8DEE9";
static const char nord6[] = "#ECEFF4";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { nord4, nord0 },
	[SchemeSel] = { nord4, nord3 },
	[SchemeOut] = { nord4, nord0 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
