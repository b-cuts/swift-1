#!/usr/bin/env python

import sys, re, email.utils

assert(len(sys.argv) == 3)

version = sys.argv[2]

changelog = open(sys.argv[1])
last_version_line = changelog.readline()
changelog.close()

project = ""
last_version = ""
m = re.match("(\w+) \((.*)-\d+\)", last_version_line)
if m :
  project = m.group(1)
  last_version = m.group(2)

if last_version != version :
  changelog = open(sys.argv[1])
  changelog_data = changelog.read()
  changelog.close()
  changelog = open(sys.argv[1], "w")
  changelog.write(project + " (" + version + "-1)" + " unstable; urgency=low\n\n")
  changelog.write("  * Upstream development snapshot\n\n")
  changelog.write(" -- Remko Tron\xc3\xa7on <dev@el-tramo.be>  " + email.utils.formatdate() + "\n")
  changelog.write("\n")
  changelog.write(changelog_data)
  changelog.close()
