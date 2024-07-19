#ifdef WPCTL

/* czardien made it work with @DEFAULT_AUDIO_SINK@ */
static const char *upvol[]   = {"/usr/bin/wpctl", "set-volume", "@DEFAULT_AUDIO_SINK@", "5%+",    NULL};
static const char *downvol[] = {"/usr/bin/wpctl", "set-volume", "@DEFAULT_AUDIO_SINK@", "5%-",    NULL};
static const char *mutevol[] = {"/usr/bin/wpctl", "set-mute",   "@DEFAULT_AUDIO_SINK@", "toggle", NULL};

#else

/* AidenThing suggests using this general solution for dynamically changing
 * outputs. */
static const char *upvol[]   = {"/usr/bin/pactl", "set-sink-volume", "@DEFAULT_SINK@", "+5%",    NULL};
static const char *downvol[] = {"/usr/bin/pactl", "set-sink-volume", "@DEFAULT_SINK@", "-5%",    NULL};
static const char *mutevol[] = {"/usr/bin/pactl", "set-sink-mute",   "@DEFAULT_SINK@", "toggle", NULL};

#endif
