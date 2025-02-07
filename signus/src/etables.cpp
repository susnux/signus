/*
 *  This file is part of Signus: The Artefact Wars
 *  https://github.com/signus-game
 *
 *  Copyright (C) 1997, 1998, 2002, 2003
 *  Vaclav Slavik, Richard Wunsch, Marek Wunsch
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */


// Tabulky pro ENGINE a UNITS atd.

#include "etables.h"


byte L1TerrainType[1024] = {
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,
104,104,104,104,104,104,104,104,104,104,
104,104,104,104,104,104,104,104,104,104,
124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,
144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,
164,164,164,164,164,164,164,164,164,164,
164,164,164,164,164,164,164,164,164,164,
184,184,184,184,184,184,184,184,
192,192,192,192,192,192,192,192,
200,200,200,200,200,200,200,200,
208,208,208,208,208,208,208,208,
216,216,216,216,216,216,216,216,
224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,
240,240,240,240,240,240,240,240,
248,248,248,248,248,248,248,248,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,
104,104,104,104,104,104,104,104,104,104,
104,104,104,104,104,104,104,104,104,104,
124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,
144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,
164,164,164,164,164,164,164,164,164,164,
164,164,164,164,164,164,164,164,164,164,
184,184,184,184,184,184,184,184,
192,192,192,192,192,192,192,192,
200,200,200,200,200,200,200,200,
208,208,208,208,208,208,208,208,
216,216,216,216,216,216,216,216,
224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,
240,240,240,240,240,240,240,240,
248,248,248,248,248,248,248,248,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,
104,104,104,104,104,104,104,104,104,104,
104,104,104,104,104,104,104,104,104,104,
124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,
144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,
164,164,164,164,164,164,164,164,164,164,
164,164,164,164,164,164,164,164,164,164,
184,184,184,184,184,184,184,184,
192,192,192,192,192,192,192,192,
200,200,200,200,200,200,200,200,
208,208,208,208,208,208,208,208,
216,216,216,216,216,216,216,216,
224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,
240,240,240,240,240,240,240,240,
248,248,248,248,248,248,248,248,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,
104,104,104,104,104,104,104,104,104,104,
104,104,104,104,104,104,104,104,104,104,
124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,
144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,
164,164,164,164,164,164,164,164,164,164,
164,164,164,164,164,164,164,164,164,164,
184,184,184,184,184,184,184,184,
192,192,192,192,192,192,192,192,
200,200,200,200,200,200,200,200,
208,208,208,208,208,208,208,208,
216,216,216,216,216,216,216,216,
224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,
240,240,240,240,240,240,240,240,
248,248,248,248,248,248,248,248
};



// Tabulky L2 terenu, krere se kvuli rychlosti nekresli, kdyz jsou poloviditelne

byte DontDrawL2[1024] = {
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0,
0,0,0,0,0,0, 0, 0,0,0,
0,0, 0, 0, 0, 0, 0, 0, 0,0,
0,0,0,0,0,0,0, 0, 0, 0,
0,0,0,0,0, 0, 0, 0,0,0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0,0,0, 0, 0,0,0, 0, 0,
0,0,0,0,0,0,0,0,0,0,
0,0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0,1,1,0,0,0,
0,0,0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0,1,1,1,1,1,1,1,
1,1,1,1,1,1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0
};






// Modifikatory vysek:

int TabHghtModif[1024] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,0,0,0,0,0,0,0,0, 
0,0,0,0,0,0,0,0,0,0,  
0,0,0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,0,0,0, 
0,0,0,0,0,0,0,0,0, 0,  
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,
1,1,1,1, 0, 0,  0,  0, 1, 1,  
1, 1,  0,  0,  0,  0,  0,  0,  0, 0,  
0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  
0, 1, 1, 1, 1,  0,  0,  0, 0, 0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0, 1, 1,  0,  0,1,1,  0,  0,  
0, 1, 1, 1, 1, 1, 1, 1, 1, 1,  
1, 1,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0, 0, 0, 0, 0, 0,  
0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,0,0,0,0,0,0,0,  
0,0,0,0,0,0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0, 0,0,0, 0,1,  
0,1, 0,0,0,0,0,0,0,0,  
0,0,0,0,0,0,0,0,0,0,  
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,
0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,
0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,0,0,0,0,0,0,0,0,  
0,0,0,0,0,0,0,0,0,0,  
0,0,0,0,0,0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,
};

int TabHghtModifVisib[1024] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,0,0,0,0,0,0,0,0, 
0,0,0,0,0,0,0,0,0,0,  
0,0,0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,0,0,0, 
0,0,0,0,0,0,0,0,0, 0,  
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,
0,0,0,0, 0, 0,  0,  0, 0, 0,  
0, 0,  0,  0,  0,  0,  0,  0,  0, 0,  
0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  
0, 0, 0, 0, 0,  0,  0,  0, 0, 0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0, 0, 0,  0,  0,0,0,  0,  0,  
0, 1, 1, 1, 1, 1, 1, 1, 1, 1,  
1, 1,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0, 0, 0, 0, 0, 0,  
0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,0,0,0,0,0,0,0,  
0,0,0,0,0,0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0, 0,0,0, 0,0,  
0,0, 0,0,0,0,0,0,0,0,  
0,0,0,0,0,0,0,0,0,0,  
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  
0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,0,0,0,0,0,0,0,0,  
0,0,0,0,0,0,0,0,0,0,  
0,0,0,0,0,0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  
0,  0,  0,  0,  0,  0,
};


