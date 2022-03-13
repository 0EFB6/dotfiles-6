static const char norm_fg[] = "#D8DEE9";
static const char norm_bg[] = "#3B4252";
static const char norm_border[] = "#88C0D0";

static const char sel_fg[] = "#ECEFF4";
static const char sel_bg[] = "#434C5E";
static const char sel_border[] = "#88C0D0";

static const char urg_fg[] = "#8FBCBB";
static const char urg_bg[] = "#3B4252";
static const char urg_border[] = "#3B4252";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
