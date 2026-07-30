/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 100;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	{ battery_state, "%s",           "BAT0" },
	{ battery_perc,  " %s%% ",        "BAT0" },
	{ battery_state, "%s",           "BAT1" },
	{ battery_perc,  "%s%% | ",       "BAT1" },
	{ run_command,   "VOL %s%% | ",  "wpctl get-volume @DEFAULT_AUDIO_SINK@ | awk '{printf \"%d\", $2*100}'" },
	{ datetime,      "%s",           "%a %d/%m/%Y %H:%M" },
};
