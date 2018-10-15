/* Copyright (C) 2014-2016 by Jacob Alexander, Crystal Hammer
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

// ----- Includes -----

// Project Includes
#include <matrix_setup.h>


// ----- Matrix Definition -----
//  CK3
//  Columns (Strobe)  18
//  Rows    (Sense)   8

//   This is the default map of just A4Tech KX-100 matrix
//   scan codes for keys are defined in defaultMap.kll
/*
      1|   2    3    4    5    6    7    8    9    10  11  12   13   14   15   16   17   18  
   -
   1  Mcmp Bstp Esc  \    F4   Up   Del  Ins  Spc  G   H   F6   ==   Vol- AltL xx   F11  '   
   2  Calc ExA4 ExC2 ExE2 ExE1 <-   Sub  ->   Dn   B   N   ExC1 Apps Mnxt AltR xx   F12  /   
   3  Mstp Bbck Z    X    C    Mpau Mul  Div  NumL V   M   ,    .    Vol+ xx   CtrR Ent  \   
   4  GuiR Bfwd A    S    D    Ent  PgDn Dn   End  F   J   K    L    ShiR xx   ==   \    ;   
   5  xx   Mail Q    W    E    Add  PgUp Up   Home R   U   I    O    xx   ScrL Paus ExE3 P   
   6  ExB1 GuiL Tab  Caps F3   RB~  ->   Del  <-   T   Y   ]    F7   ShiL ==   Pwr  Back [   
   7  xx   Bsch 1    2    3    End  PgDn xx   Pwr  4   7   8    9    Msel Ptr  F5   F10  0   
   8  Bhom Vmut `~   F1   F2   Home PgUp Ins  Del  5   6   =    F8   Mprv ==   CtrL F9   -   

     rows -       columns |
   1 3 5 7    1 3 5 7 9 11 13 15 17
    2 4 6 8    2 4 6 8 10 12 14 16 18   connectors, PCB view
*/
GPIO_Pin Matrix_cols[] = {
	gpio(B,16), // Pin 0
	gpio(B,17), // Pin 1
	gpio(D,0),  // Pin 2
	gpio(A,12), // Pin 3
	gpio(A,13), // Pin 4
	gpio(D,7),  // Pin 5
	gpio(D,4),  // Pin 6
	gpio(D,2),  // Pin 7
	gpio(D,3),  // Pin 8
	gpio(C,3),  // Pin 9
	gpio(C,4),  // Pin 10
	gpio(C,6),  // Pin 11
	gpio(C,7),  // Pin 12
	gpio(A,5),  // Pin 24
	gpio(B,19), // Pin 25
	gpio(E,1),  // Pin 26
	gpio(C,9),  // Pin 27
	gpio(C,8),  // Pin 28
	gpio(D,1),  // Pin 14
	gpio(C,0)   // Pin 15
};
GPIO_Pin Matrix_rows[] = {
	gpio(B,0), // Pin 16
	gpio(B,1), // Pin 17
	gpio(B,3), // Pin 18
	gpio(B,2), // Pin 19
	gpio(D,5), // Pin 20
	gpio(D,6), // Pin 21
	gpio(C,1), // Pin 22
	gpio(C,2)  // Pin 23
};

// Define type of scan matrix
Config Matrix_type = Config_Pulldown;


// Define this if your matrix has ghosting (i.e. regular keyboard without diodes)
// this will enable the anti-ghosting code
//#define GHOSTING_MATRIX

// delay in microseconds before and after each strobe change during matrix scan
//#define STROBE_DELAY  10

