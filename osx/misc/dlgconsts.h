/*
 *  dlogconsts.h
 *  BoE
 *
 *  Created by Celtic Minstrel on 16/04/09.
 *
 */

#define	NUM_BUTTONS		15
#define	NUM_DLOG_B		53

#define ND	15
#define	NI	500
#define	NL	100

// These constants are for draw_dialog_graphic() to know where to find the graphic.
#define PICT_OLD_TYPE			-1
#define PICT_BLANK_TYPE			0
#define PICT_TER_TYPE			1 // 28x36 terrain graphic
#define PICT_TER_ANIM_TYPE		2
#define PICT_MONST_TYPE			3
#define PICT_DLG_TYPE			4 // 36x36 dialog graphic
#define PICT_TALK_TYPE			5 // 32x32 facial graphic
#define PICT_SCEN_TYPE			6 // 32x32 scenario icon
#define PICT_ITEM_TYPE			7 // Item graphic (two sizes available)
#define PICT_PC_TYPE			8 // Player character graphic
#define PICT_INFO_HELP_TYPE		9
#define PICT_PC_HELP_TYPE		10
#define PICT_HELP_TYPE			11
#define PICT_COMBAT_AP_TYPE		12
#define PICT_STAT_TYPE			13
#define PICT_FIELD_TYPE			14 // A field or an explosion
#define PICT_DLG_LARGE_TYPE		15
#define PICT_SCEN_LARGE_TYPE	16
/* The following four are modifiers to be added to the above seven constants
 * Usage for PICT_CUSTOM_TYPE:
 * PICT_CUSTOM_TYPE + PICT_XXX_TYPE, where XXX is anything valid other than OLD or BLANK.
 * PICT_CUSTOM_TYPE + PICT_MONST_TYPE + PICT_WIDE_MONST, for a 2x1 monster
 * PICT_CUSTOM_TYPE + PICT_MONST_TYPE + PICT_TALL_MONST, for a 1x2 monster
 * PICT_CUSTOM_TYPE + PICT_MONST_TYPE + PICT_TALL_MONST + PICT_WIDE_MONST, for a 2x2 monster
 * Notes:
 *  - PICT_TALL_MONST and PICT_WIDE_MONST only apply to custom monsters - the preset
 * monster graphics have these settings hardcoded.
 *  - Also note that custom scenario graphics are not currently supported. This doesn't really
 * matter, though, since if they were they'd be handled like talk (facial) graphics.
 *  - Custom animated terrain graphics should use PICT_TER_TYPE rather than PICT_TER_ANIM_TYPE.
 */
#define PICT_CUSTOM_TYPE		100
#define PICT_WIDE_MONSTER		10
#define PICT_TALL_MONSTER		20
#define DLG_NEW_PICTURE			20 // Adding this one makes it a DLG_ constant rather than a PICT_ constant
// These constants are the total number of preset graphics of each type.
#define PICT_N_TER				252 // 336
#define PICT_N_TER_ANIM			13 // 18
#define PICT_N_MONST			172
#define PICT_N_DLG				32 // 44
#define PICT_N_TALK				83
#define PICT_N_SCEN				29
#define PICT_N_ITEM				122

// These constants are used to create the definition of the dialogs, and
// to parse a dialog resource when displaying it to the screen.
#define DLG_BUTTON_TYPE				0
#define DLG_DEFAULT_BTN_TYPE		1
// Not sure what 10 and 11 do, but they may be similar to above two
#define DLG_LED_BUTTON				2
// 3, 4, 7, 8, 9 are various text objects; not completely sure which is which
#define DLG_TEXT_BOLD				3
#define DLG_TEXT_PLAIN				4
#define DLG_TEXT_LARGE				7
#define DLG_OLD_PICTURE				5
// And I don't know what 6 is for either