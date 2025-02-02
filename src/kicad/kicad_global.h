/**
 ** This file is part of the uConfig project.
 ** Copyright 2017-2020 Robotips, Sebastien CAUX (sebcaux)
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program. If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef KICAD_GLOBAL_H
#define KICAD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(KICAD_EXPORT_LIB)
#    define KICAD_EXPORT Q_DECL_EXPORT
#else
#    define KICAD_EXPORT Q_DECL_IMPORT
#endif

#endif  // KICAD_GLOBAL_H
