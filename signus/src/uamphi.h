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


// 
// Hlavickovy soubor pro OBOJZIVELNE jednotky
//


#ifndef _UAMPHI_H
#define _UAMPHI_H

#include "units.h"


// obecny predek;

class THovercraft : public TUnit {
		public:
			THovercraft() : TUnit() {};
			void GetTerrMove(int **terr, int **terr2) {*terr = TabTerrMoveAmphi; *terr2 = TabTerr2MoveAmphi;};
			void MakeTrack() {};
	};
	

class TToweredHovercraft : public TToweredUnit {
		public:
			TToweredHovercraft() : TToweredUnit() {};
			void GetTerrMove(int **terr, int **terr2) {*terr = TabTerrMoveAmphi; *terr2 = TabTerr2MoveAmphi;};
			void MakeTrack() {};
	};
	
	
	


// Jednotky"

class THelios : public TToweredHovercraft {
		public:
			THelios() : TToweredHovercraft() {};
			int GetType() {return unHelios;};
			void Setup();
			void IncLevel(int alevel);
			int GetWeight() {return WGT_LIGHT;};
			unsigned GetSupportedActions();
	};
	
	
	

#endif


