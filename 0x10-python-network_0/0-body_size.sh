#!/bin/bash
#
# Gets the size of byte of the HTTP response header for a given URL.
curl -s "$1" | wc -c
