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

#include "glwrapper.h"

extern "C" {

Q_DECL_EXPORT GLvoid APIENTRY glClear(GLbitfield mask)
{
	GLWrapper::instance().glClear(mask);
}

Q_DECL_EXPORT GLvoid APIENTRY glClearColor(GLclampf red,GLclampf green,GLclampf blue,GLclampf alpha)
{
	GLWrapper::instance().glClearColor(red,green,blue,alpha);
}

Q_DECL_EXPORT GLvoid APIENTRY glEnable(GLenum cap)
{
	GLWrapper::instance().glEnable(cap);
}

Q_DECL_EXPORT GLvoid APIENTRY glMatrixMode(GLenum mode)
{
	GLWrapper::instance().glMatrixMode(mode);
}

Q_DECL_EXPORT GLvoid APIENTRY glLightfv(GLenum light,GLenum pname,const GLfloat* params)
{
	GLWrapper::instance().glLightfv(light,pname,params);
}

Q_DECL_EXPORT GLvoid APIENTRY glLoadIdentity()
{
	GLWrapper::instance().glLoadIdentity();
}

Q_DECL_EXPORT GLvoid APIENTRY glRotatef(GLfloat a, GLfloat x,GLfloat y,GLfloat z)
{
	GLWrapper::instance().glRotatef(a,x,y,z);
}

Q_DECL_EXPORT GLvoid APIENTRY glViewport(GLint x,GLint y,GLsizei width,GLsizei height)
{
	GLWrapper::instance().glViewport(x,y,width,height);
}

Q_DECL_EXPORT GLvoid APIENTRY glLineWidth(GLfloat width)
{
	GLWrapper::instance().glLineWidth(width);
}

Q_DECL_EXPORT GLvoid APIENTRY glVertex3i(GLint x, GLint y, GLint z)
{
	GLWrapper::instance().glVertex3i(x,y,z);
}

Q_DECL_EXPORT GLvoid APIENTRY glColor3f(GLfloat red,GLfloat green,GLfloat blue)
{
	GLWrapper::instance().glColor3f(red,green,blue);
}

Q_DECL_EXPORT GLvoid APIENTRY glVertex3f(GLfloat x,GLfloat y,GLfloat z)
{
	GLWrapper::instance().glVertex3f(x,y,z);
}

Q_DECL_EXPORT GLvoid APIENTRY glBegin(GLenum mode)
{
	GLWrapper::instance().glBegin(mode);
}

Q_DECL_EXPORT GLvoid APIENTRY glEnd()
{
	GLWrapper::instance().glEnd();
}

Q_DECL_EXPORT GLvoid APIENTRY glColorMaterial(GLenum face,GLenum mode)
{
	GLWrapper::instance().glColorMaterial(face,mode);
}

Q_DECL_EXPORT GLvoid APIENTRY glCallList(GLuint list)
{
	GLWrapper::instance().glCallList(list);
}

Q_DECL_EXPORT GLvoid APIENTRY glDisable(GLenum cap)
{
	GLWrapper::instance().glDisable(cap);
}

Q_DECL_EXPORT GLuint APIENTRY glGenLists(GLsizei range)
{
	return GLWrapper::instance().glGenLists(range);
}

Q_DECL_EXPORT GLvoid APIENTRY glNewList(GLuint list,GLenum mode)
{
	GLWrapper::instance().glNewList(list,mode);
}

Q_DECL_EXPORT GLvoid APIENTRY glPointSize(GLfloat size)
{
	GLWrapper::instance().glPointSize(size);
}

Q_DECL_EXPORT GLvoid APIENTRY glColor3ub(GLubyte red,GLubyte green,GLubyte blue)
{
	GLWrapper::instance().glColor3ub(red,green,blue);
}

Q_DECL_EXPORT GLvoid APIENTRY glEndList()
{
	GLWrapper::instance().glEndList();
}

Q_DECL_EXPORT GLvoid APIENTRY glDeleteLists(GLuint list,GLsizei range)
{
	GLWrapper::instance().glDeleteLists(list,range);
}

Q_DECL_EXPORT GLvoid APIENTRY glNormal3fv(const GLfloat* v)
{
	GLWrapper::instance().glNormal3fv(v);
}

Q_DECL_EXPORT GLvoid APIENTRY glVertex3fv(const GLfloat* v)
{
	GLWrapper::instance().glVertex3fv(v);
}

Q_DECL_EXPORT GLvoid APIENTRY glScalef(GLfloat x,GLfloat y,GLfloat z)
{
	GLWrapper::instance().glScalef(x,y,z);
}

Q_DECL_EXPORT GLvoid APIENTRY glTranslatef(GLfloat x,GLfloat y,GLfloat z)
{
	GLWrapper::instance().glTranslatef(x,y,z);
}

}
