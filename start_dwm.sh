#!/usr/bin/env bash
xcompmgr -c -fF -I-.002 -O-.003 -D1 &
slstatus &
xautolock -time 3 -locker slock -corners ++++ &
dwm
