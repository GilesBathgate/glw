/*
 *   GLWrapper
 *   Copyright (C) 2010-2015 Giles Bathgate
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GLWRAPPER_H
#define GLWRAPPER_H

/* Since this is a wrapper and thus a re-implementation of the functions
 * provided by OpenGL, we need gl.h to have function exports rather than
 * imports. So we work around that by redefining WINGDIAPI with the export
 * declaration. Since gl.h imports windows.h we import windows.h first and
 * re-define WINGDIAPI before gl.h gets imported properly by QOpenGLFunctions
 */
#include <windows.h>
#undef WINGDIAPI
#define WINGDIAPI Q_DECL_EXPORT

#include <QOpenGLFunctions_1_0>

class GLWrapper : public QOpenGLFunctions_1_0
{
public:
	static GLWrapper& instance(){ static GLWrapper instance; return instance; }
private:
	GLWrapper() { this->initializeOpenGLFunctions(); }
};

#endif // GLWRAPPER_H
