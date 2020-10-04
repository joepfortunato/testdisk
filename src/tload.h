/*

    File: tload.h

    Copyright (C) 2008 Christophe GRENIER <grenier@cgsecurity.org>
  
    This software is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
  
    You should have received a copy of the GNU General Public License along
    with this program; if not, write the Free Software Foundation, Inc., 51
    Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 */
#ifndef _TLOAD_H
#define _TLOAD_H
#ifdef HAVE_NCURSES
#ifdef __cplusplus
extern "C" {
#endif

list_part_t *interface_load(disk_t *disk_car,list_part_t *list_part, const int verbose);

#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif
#endif
#endif
