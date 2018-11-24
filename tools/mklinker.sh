#!/bin/bash

while read name rom ram ccm malloc junk; do
	cat > $name.ld << EOF
MEMORY
{
    IROM	(r x) : ORIGIN = 0x08000000, LENGTH = ${rom}k
    ITCM    (rwx) : ORIGIN = 0x10000000, LENGTH = ${ccm}k
EOF
	if [ "$malloc" == "0" ]; then
		cat >> $name.ld << EOF
	IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = ${ram}k
}

REGION_ALIAS("STACK", IRAM);

INCLUDE $1.ld
EOF
	else
	cat >> $name.ld << EOF
	STACK   (rwx) : ORIGIN = 0x20000000, LENGTH = ${malloc}k
	IRAM    (rwx) : ORIGIN = 0x20040000, LENGTH = ${ram}k
}

INCLUDE $1.ld
EOF
	fi
done
