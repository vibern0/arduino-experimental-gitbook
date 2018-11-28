## arduino micro and esp-01
Following the structure of this repository! (se parent foder)

####What is does?
A simple arduino with wifi board connected, and in this case working as a station (STA), which simply connect to an wifi and runs a webserver on port 80 showing some data from inputs.

**To visit the webserver** you should know the ip. It's possible to make arduino show it's own ip, but also, it's possible to get the ip from `sudo arp-scan --interface=wlp3s0 --localnet`. But with that command all ip's in that network will be shown.
