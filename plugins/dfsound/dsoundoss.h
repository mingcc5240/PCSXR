/***************************************************************************
                         dsoundoss.h  -  description
                             -------------------
    begin                : Wed May 15 2002
    copyright            : (C) 2002 by Pete Bernert
    email                : BlackDove@addcom.de
 ***************************************************************************/
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version. See also the license.txt file for *
 *   additional informations.                                              *
 *                                                                         *
 ***************************************************************************/

void SetupSound(void);
void RemoveSound(void);
unsigned long SoundGetBytesBuffered(void);
void SoundFeedStreamData(unsigned char* pSound,long lBytes);

#ifdef _WINDOWS
#define timeGetTime_spu timeGetTime
#else
unsigned long timeGetTime_spu();
#endif
