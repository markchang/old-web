#!/usr/bin/python

from iptcinfo import IPTCInfo
import sys


# html crap
print "Content-Type: text/html\n\n"
print "Hello, World!\n"

# change
fn = (len(sys.argv) > 1 and [sys.argv[1]] or ['test.jpg'])[0]
fn2 = (len(sys.argv) > 2 and [sys.argv[2]] or ['test_out.jpg'])[0]

# Create new info object
info = IPTCInfo(fn)

# Check if file had IPTC data
if len(info.data) < 4: raise Exception(info.error)

# Print list of keywords, supplemental categories, or contacts
print "Keywords:"
print info.keywords

# Add/change an attribute
info.keywords.append('chang')

# Save new info to file
##### See disclaimer in 'SAVING FILES' section #####
print "\nSaving..."
info.saveAs(fn2)
print "\nDone"

