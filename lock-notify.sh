#!/bin/bash
WINDOW=$(echo $(xwininfo -id $(xdotool getactivewindow) -stats | \
                egrep '(Width|Height):' | \
                awk '{print $NF}') | \
         sed -e 's/ /x/')
SCREEN=$(xdpyinfo | grep -m1 dimensions | awk '{print $2}')
if [ "$WINDOW" = "$SCREEN" ]; then
    exit 0
else
    notify-send -u critical -t 15000 'Autolocking' 'The screen will be locked in 15s'
fi
