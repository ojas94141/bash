#!/bin/bash

echo "changing channel to channel $1" &&
ifconfig wlan0 down &&
echo "interface down" &&
iwconfig wlan0 channel $1 &&
echo "channel changed to specified $1 channel" &&
ifconfig wlan0 up && 
echo "network interface up"
