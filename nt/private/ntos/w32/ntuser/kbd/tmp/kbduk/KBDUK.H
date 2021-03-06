/****************************** Module Header ******************************\
* Module Name: KBDUK.H
*
* keyboard layout header for United Kingdom
*
* Copyright (c) 1985-95, Microsoft Corporation
*
* Various defines for use by keyboard input code.
*
* History:
*
* created by KBDTOOL Sun Mar 15 00:58:23 2020
*
\***************************************************************************/

/*
 * kbd type should be controlled by cl command-line argument
#define KBD_TYPE 4

/*
* Include the basis of all keyboard table values
*/
#include "kbd.h"

/***************************************************************************\
* The table below defines the virtual keys for various keyboard types where
* the keyboard differ from the US keyboard.
*
* _EQ() : all keyboard types have the same virtual key for this scancode
* _NE() : different virtual keys for this scancode, depending on kbd type
*
*     +------+ +----------+----------+----------+----------+----------+----------+
*     | Scan | |    kbd   |    kbd   |    kbd   |    kbd   |    kbd   |    kbd   |
*     | code | |   type 1 |   type 2 |   type 3 |   type 4 |   type 5 |   type 6 |
\****+-------+_+----------+----------+----------+----------+----------+----------+*/

#undef  T28
#define T28 _EQ(                                      OEM_3                      )
#undef  T29
#define T29 _EQ(                                      OEM_8                      )
#undef  T2B
#define T2B _EQ(                                      OEM_7                      )
#undef  T56
#define T56 _EQ(                                      OEM_5                      )

