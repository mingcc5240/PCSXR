/***************************************************************************
 *   Copyright (C) 2007 PCSX-df Team                                       *
 *   Copyright (C) 2009 Wei Mingzhi                                        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.           *
 ***************************************************************************/

#ifndef CDRISO_H
#define CDRISO_H

#ifdef __cplusplus
extern "C" {
#endif

int handleecm(const char *isoname, FILE* cdh, s32* accurate_length);
int aropen(FILE* fparchive, const char* _fn);
void cdrIsoInit(void);
int cdrIsoActive(void);

extern unsigned int cdrIsoMultidiskCount;
extern unsigned int cdrIsoMultidiskSelect;

#ifdef __cplusplus
}
#endif
#endif
