/***********************************************************************\
|                                                                       |
| MicroGP++ config                                                      |
|                                                                       |
| This file is part of MicroGP v3 (ugp3)                                |
| http://ugp3.sourceforge.net/                                          |
|                                                                       |
| Copyright (c) 2002-2016 Giovanni Squillero                            |
|                                                                       |
|-----------------------------------------------------------------------|
|                                                                       |
| This program is free software; you can redistribute it and/or modify  |
| it under the terms of the GNU General Public License as published by  |
| the Free Software Foundation, either version 3 of the License, or (at |
| your option) any later version.                                       |
|                                                                       |
| This program is distributed in the hope that it will be useful, but   |
| WITHOUT ANY WARRANTY; without even the implied warranty of            |
| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU      |
| General Public License for more details                               |
|                                                                       |
|***********************************************************************'
| $Revision: 644 $
| $Date: 2015-02-23 14:50:30 +0100 (Mon, 23 Feb 2015) $
\***********************************************************************/

/**
 * @file ugp3_config.h
 * Defines a few constants about the compilation
 */

/** Application's copyright */
#define COPYRIGHT_NOTE "(c) 2002-2016 by Giovanni Squillero <giovanni.squillero@polito.it>"

/** Mail to show for reporting bugs */
#define PACKAGE_BUGREPORT "ugp3@cad.polito.it"

/** Base directory of ugp3 */
#define UGP3_BASE_DIR __FILE__


#ifdef UGP3_VERSION_NAME
#undef UGP3_VERSION_NAME
#define UGP3_VERSION_NAME "Camellia"
#endif

#ifdef UGP3_VERSION
#undef UGP3_VERSION
#define UGP3_VERSION "4"
#endif

#ifdef UGP3_SUBVERSION
#undef UGP3_SUBVERSION
#define UGP3_SUBVERSION "0"
#endif

#ifdef UGP3_REVISION
#undef UGP3_REVISION
#define UGP3_REVISION "71"
#endif
