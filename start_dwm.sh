#!/usr/bin/env bash
xcompmgr -c -fF -I-.002 -O-.003 -D1 &
slstatus &
xautolock -time 3 -locker slock -corners ---- \
	-notify 15 \
	-notifier "espeak 'Screen will be locked'; notify-send -u critical -t 15000 'Autolocking' 'The screen will be locked in 15s'"  &
dunst &
dwm
