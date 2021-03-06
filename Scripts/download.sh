#!/bin/bash
set -ev

j2objc_version=1.0.2
sha1_checksum=bb2d9a4563d68d16287626297a166a8bcced552e

echo "fetching j2objc dist"
curl -OL http://localhost/j2objc-1.0.2.zip
echo "${sha1_checksum}  j2objc-${j2objc_version}.zip" | shasum -c
unzip -o -q j2objc-${j2objc_version}.zip
mv j2objc-${j2objc_version} Distributive
rm j2objc-${j2objc_version}.zip

echo "Creating framework"
mkdir Frameworks
mkdir Frameworks/j2objc.framework
cp -a Scripts/Template/* Frameworks/j2objc.framework/
cp Distributive/lib/libjre_emul.a Frameworks/j2objc.framework/j2objc
