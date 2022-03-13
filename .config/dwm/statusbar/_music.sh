#!/bin/bash


TIT=$(playerctl -s --player=spotify,mpv metadata --format '{{ artist }}: {{title}}')
echo "  🎵$TIT"
