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

Q_DECL_EXPORT void APIENTRY glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	GLWrapper::instance().glViewport(x,y,width,height);
}

Q_DECL_EXPORT void APIENTRY glDepthRange(GLdouble nearVal, GLdouble farVal)
{
	GLWrapper::instance().glDepthRange(nearVal,farVal);
}

Q_DECL_EXPORT GLboolean APIENTRY glIsEnabled(GLenum cap)
{
	return GLWrapper::instance().glIsEnabled(cap);
}

Q_DECL_EXPORT void APIENTRY glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params)
{
	GLWrapper::instance().glGetTexLevelParameteriv(target,level,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params)
{
	GLWrapper::instance().glGetTexLevelParameterfv(target,level,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetTexParameteriv(GLenum target, GLenum pname, GLint *params)
{
	GLWrapper::instance().glGetTexParameteriv(target,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	GLWrapper::instance().glGetTexParameterfv(target,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
{
	GLWrapper::instance().glGetTexImage(target,level,format,type,pixels);
}

Q_DECL_EXPORT void APIENTRY glGetIntegerv(GLenum pname, GLint *params)
{
	GLWrapper::instance().glGetIntegerv(pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetFloatv(GLenum pname, GLfloat *params)
{
	GLWrapper::instance().glGetFloatv(pname,params);
}

Q_DECL_EXPORT GLenum APIENTRY glGetError()
{
	return GLWrapper::instance().glGetError();
}

Q_DECL_EXPORT void APIENTRY glGetDoublev(GLenum pname, GLdouble *params)
{
	GLWrapper::instance().glGetDoublev(pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetBooleanv(GLenum pname, GLboolean *params)
{
	GLWrapper::instance().glGetBooleanv(pname,params);
}

Q_DECL_EXPORT void APIENTRY glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels)
{
	GLWrapper::instance().glReadPixels(x,y,width,height,format,type,pixels);
}

Q_DECL_EXPORT void APIENTRY glReadBuffer(GLenum mode)
{
	GLWrapper::instance().glReadBuffer(mode);
}

Q_DECL_EXPORT void APIENTRY glPixelStorei(GLenum pname, GLint param)
{
	GLWrapper::instance().glPixelStorei(pname,param);
}

Q_DECL_EXPORT void APIENTRY glPixelStoref(GLenum pname, GLfloat param)
{
	GLWrapper::instance().glPixelStoref(pname,param);
}

Q_DECL_EXPORT void APIENTRY glDepthFunc(GLenum func)
{
	GLWrapper::instance().glDepthFunc(func);
}

Q_DECL_EXPORT void APIENTRY glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	GLWrapper::instance().glStencilOp(fail,zfail,zpass);
}

Q_DECL_EXPORT void APIENTRY glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
	GLWrapper::instance().glStencilFunc(func,ref,mask);
}

Q_DECL_EXPORT void APIENTRY glLogicOp(GLenum opcode)
{
	GLWrapper::instance().glLogicOp(opcode);
}

Q_DECL_EXPORT void APIENTRY glBlendFunc(GLenum sfactor, GLenum dfactor)
{
	GLWrapper::instance().glBlendFunc(sfactor,dfactor);
}

Q_DECL_EXPORT void APIENTRY glFlush()
{
	GLWrapper::instance().glFlush();
}

Q_DECL_EXPORT void APIENTRY glFinish()
{
	GLWrapper::instance().glFinish();
}

Q_DECL_EXPORT void APIENTRY glEnable(GLenum cap)
{
	GLWrapper::instance().glEnable(cap);
}

Q_DECL_EXPORT void APIENTRY glDisable(GLenum cap)
{
	GLWrapper::instance().glDisable(cap);
}

Q_DECL_EXPORT void APIENTRY glDepthMask(GLboolean flag)
{
	GLWrapper::instance().glDepthMask(flag);
}

Q_DECL_EXPORT void APIENTRY glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	GLWrapper::instance().glColorMask(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glStencilMask(GLuint mask)
{
	GLWrapper::instance().glStencilMask(mask);
}

Q_DECL_EXPORT void APIENTRY glClearDepth(GLdouble depth)
{
	GLWrapper::instance().glClearDepth(depth);
}

Q_DECL_EXPORT void APIENTRY glClearStencil(GLint s)
{
	GLWrapper::instance().glClearStencil(s);
}

Q_DECL_EXPORT void APIENTRY glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	GLWrapper::instance().glClearColor(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glClear(GLbitfield mask)
{
	GLWrapper::instance().glClear(mask);
}

Q_DECL_EXPORT void APIENTRY glDrawBuffer(GLenum mode)
{
	GLWrapper::instance().glDrawBuffer(mode);
}

Q_DECL_EXPORT void APIENTRY glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	GLWrapper::instance().glTexImage2D(target,level,internalformat,width,height,border,format,type,pixels);
}

Q_DECL_EXPORT void APIENTRY glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	GLWrapper::instance().glTexImage1D(target,level,internalformat,width,border,format,type,pixels);
}

Q_DECL_EXPORT void APIENTRY glTexParameteriv(GLenum target, GLenum pname, const GLint *params)
{
	GLWrapper::instance().glTexParameteriv(target,pname,params);
}

Q_DECL_EXPORT void APIENTRY glTexParameteri(GLenum target, GLenum pname, GLint param)
{
	GLWrapper::instance().glTexParameteri(target,pname,param);
}

Q_DECL_EXPORT void APIENTRY glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
	GLWrapper::instance().glTexParameterfv(target,pname,params);
}

Q_DECL_EXPORT void APIENTRY glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	GLWrapper::instance().glTexParameterf(target,pname,param);
}

Q_DECL_EXPORT void APIENTRY glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	GLWrapper::instance().glScissor(x,y,width,height);
}

Q_DECL_EXPORT void APIENTRY glPolygonMode(GLenum face, GLenum mode)
{
	GLWrapper::instance().glPolygonMode(face,mode);
}

Q_DECL_EXPORT void APIENTRY glPointSize(GLfloat size)
{
	GLWrapper::instance().glPointSize(size);
}

Q_DECL_EXPORT void APIENTRY glLineWidth(GLfloat width)
{
	GLWrapper::instance().glLineWidth(width);
}

Q_DECL_EXPORT void APIENTRY glHint(GLenum target, GLenum mode)
{
	GLWrapper::instance().glHint(target,mode);
}

Q_DECL_EXPORT void APIENTRY glFrontFace(GLenum mode)
{
	GLWrapper::instance().glFrontFace(mode);
}

Q_DECL_EXPORT void APIENTRY glCullFace(GLenum mode)
{
	GLWrapper::instance().glCullFace(mode);
}

Q_DECL_EXPORT void APIENTRY glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
	GLWrapper::instance().glTranslatef(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
	GLWrapper::instance().glTranslated(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glScalef(GLfloat x, GLfloat y, GLfloat z)
{
	GLWrapper::instance().glScalef(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glScaled(GLdouble x, GLdouble y, GLdouble z)
{
	GLWrapper::instance().glScaled(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	GLWrapper::instance().glRotatef(angle,x,y,z);
}

Q_DECL_EXPORT void APIENTRY glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	GLWrapper::instance().glRotated(angle,x,y,z);
}

Q_DECL_EXPORT void APIENTRY glPushMatrix()
{
	GLWrapper::instance().glPushMatrix();
}

Q_DECL_EXPORT void APIENTRY glPopMatrix()
{
	GLWrapper::instance().glPopMatrix();
}

Q_DECL_EXPORT void APIENTRY glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	GLWrapper::instance().glOrtho(left,right,bottom,top,zNear,zFar);
}

Q_DECL_EXPORT void APIENTRY glMultMatrixd(const GLdouble *m)
{
	GLWrapper::instance().glMultMatrixd(m);
}

Q_DECL_EXPORT void APIENTRY glMultMatrixf(const GLfloat *m)
{
	GLWrapper::instance().glMultMatrixf(m);
}

Q_DECL_EXPORT void APIENTRY glMatrixMode(GLenum mode)
{
	GLWrapper::instance().glMatrixMode(mode);
}

Q_DECL_EXPORT void APIENTRY glLoadMatrixd(const GLdouble *m)
{
	GLWrapper::instance().glLoadMatrixd(m);
}

Q_DECL_EXPORT void APIENTRY glLoadMatrixf(const GLfloat *m)
{
	GLWrapper::instance().glLoadMatrixf(m);
}

Q_DECL_EXPORT void APIENTRY glLoadIdentity()
{
	GLWrapper::instance().glLoadIdentity();
}

Q_DECL_EXPORT void APIENTRY glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	GLWrapper::instance().glFrustum(left,right,bottom,top,zNear,zFar);
}

Q_DECL_EXPORT GLboolean APIENTRY glIsList(GLuint list)
{
	return GLWrapper::instance().glIsList(list);
}

Q_DECL_EXPORT void APIENTRY glGetTexGeniv(GLenum coord, GLenum pname, GLint *params)
{
	GLWrapper::instance().glGetTexGeniv(coord,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetTexGenfv(GLenum coord, GLenum pname, GLfloat *params)
{
	GLWrapper::instance().glGetTexGenfv(coord,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params)
{
	GLWrapper::instance().glGetTexGendv(coord,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetTexEnviv(GLenum target, GLenum pname, GLint *params)
{
	GLWrapper::instance().glGetTexEnviv(target,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params)
{
	GLWrapper::instance().glGetTexEnvfv(target,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetPolygonStipple(GLubyte *mask)
{
	GLWrapper::instance().glGetPolygonStipple(mask);
}

Q_DECL_EXPORT void APIENTRY glGetPixelMapusv(GLenum map, GLushort *values)
{
	GLWrapper::instance().glGetPixelMapusv(map,values);
}

Q_DECL_EXPORT void APIENTRY glGetPixelMapuiv(GLenum map, GLuint *values)
{
	GLWrapper::instance().glGetPixelMapuiv(map,values);
}

Q_DECL_EXPORT void APIENTRY glGetPixelMapfv(GLenum map, GLfloat *values)
{
	GLWrapper::instance().glGetPixelMapfv(map,values);
}

Q_DECL_EXPORT void APIENTRY glGetMaterialiv(GLenum face, GLenum pname, GLint *params)
{
	GLWrapper::instance().glGetMaterialiv(face,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params)
{
	GLWrapper::instance().glGetMaterialfv(face,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetMapiv(GLenum target, GLenum query, GLint *v)
{
	GLWrapper::instance().glGetMapiv(target,query,v);
}

Q_DECL_EXPORT void APIENTRY glGetMapfv(GLenum target, GLenum query, GLfloat *v)
{
	GLWrapper::instance().glGetMapfv(target,query,v);
}

Q_DECL_EXPORT void APIENTRY glGetMapdv(GLenum target, GLenum query, GLdouble *v)
{
	GLWrapper::instance().glGetMapdv(target,query,v);
}

Q_DECL_EXPORT void APIENTRY glGetLightiv(GLenum light, GLenum pname, GLint *params)
{
	GLWrapper::instance().glGetLightiv(light,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetLightfv(GLenum light, GLenum pname, GLfloat *params)
{
	GLWrapper::instance().glGetLightfv(light,pname,params);
}

Q_DECL_EXPORT void APIENTRY glGetClipPlane(GLenum plane, GLdouble *equation)
{
	GLWrapper::instance().glGetClipPlane(plane,equation);
}

Q_DECL_EXPORT void APIENTRY glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
	GLWrapper::instance().glDrawPixels(width,height,format,type,pixels);
}

Q_DECL_EXPORT void APIENTRY glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
	GLWrapper::instance().glCopyPixels(x,y,width,height,type);
}

Q_DECL_EXPORT void APIENTRY glPixelMapusv(GLenum map, GLint mapsize, const GLushort *values)
{
	GLWrapper::instance().glPixelMapusv(map,mapsize,values);
}

Q_DECL_EXPORT void APIENTRY glPixelMapuiv(GLenum map, GLint mapsize, const GLuint *values)
{
	GLWrapper::instance().glPixelMapuiv(map,mapsize,values);
}

Q_DECL_EXPORT void APIENTRY glPixelMapfv(GLenum map, GLint mapsize, const GLfloat *values)
{
	GLWrapper::instance().glPixelMapfv(map,mapsize,values);
}

Q_DECL_EXPORT void APIENTRY glPixelTransferi(GLenum pname, GLint param)
{
	GLWrapper::instance().glPixelTransferi(pname,param);
}

Q_DECL_EXPORT void APIENTRY glPixelTransferf(GLenum pname, GLfloat param)
{
	GLWrapper::instance().glPixelTransferf(pname,param);
}

Q_DECL_EXPORT void APIENTRY glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
	GLWrapper::instance().glPixelZoom(xfactor,yfactor);
}

Q_DECL_EXPORT void APIENTRY glAlphaFunc(GLenum func, GLfloat ref)
{
	GLWrapper::instance().glAlphaFunc(func,ref);
}

Q_DECL_EXPORT void APIENTRY glEvalPoint2(GLint i, GLint j)
{
	GLWrapper::instance().glEvalPoint2(i,j);
}

Q_DECL_EXPORT void APIENTRY glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
	GLWrapper::instance().glEvalMesh2(mode,i1,i2,j1,j2);
}

Q_DECL_EXPORT void APIENTRY glEvalPoint1(GLint i)
{
	GLWrapper::instance().glEvalPoint1(i);
}

Q_DECL_EXPORT void APIENTRY glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
	GLWrapper::instance().glEvalMesh1(mode,i1,i2);
}

Q_DECL_EXPORT void APIENTRY glEvalCoord2fv(const GLfloat *u)
{
	GLWrapper::instance().glEvalCoord2fv(u);
}

Q_DECL_EXPORT void APIENTRY glEvalCoord2f(GLfloat u, GLfloat v)
{
	GLWrapper::instance().glEvalCoord2f(u,v);
}

Q_DECL_EXPORT void APIENTRY glEvalCoord2dv(const GLdouble *u)
{
	GLWrapper::instance().glEvalCoord2dv(u);
}

Q_DECL_EXPORT void APIENTRY glEvalCoord2d(GLdouble u, GLdouble v)
{
	GLWrapper::instance().glEvalCoord2d(u,v);
}

Q_DECL_EXPORT void APIENTRY glEvalCoord1fv(const GLfloat *u)
{
	GLWrapper::instance().glEvalCoord1fv(u);
}

Q_DECL_EXPORT void APIENTRY glEvalCoord1f(GLfloat u)
{
	GLWrapper::instance().glEvalCoord1f(u);
}

Q_DECL_EXPORT void APIENTRY glEvalCoord1dv(const GLdouble *u)
{
	GLWrapper::instance().glEvalCoord1dv(u);
}

Q_DECL_EXPORT void APIENTRY glEvalCoord1d(GLdouble u)
{
	GLWrapper::instance().glEvalCoord1d(u);
}

Q_DECL_EXPORT void APIENTRY glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
	GLWrapper::instance().glMapGrid2f(un,u1,u2,vn,v1,v2);
}

Q_DECL_EXPORT void APIENTRY glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
	GLWrapper::instance().glMapGrid2d(un,u1,u2,vn,v1,v2);
}

Q_DECL_EXPORT void APIENTRY glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
	GLWrapper::instance().glMapGrid1f(un,u1,u2);
}

Q_DECL_EXPORT void APIENTRY glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
	GLWrapper::instance().glMapGrid1d(un,u1,u2);
}

Q_DECL_EXPORT void APIENTRY glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
{
	GLWrapper::instance().glMap2f(target,u1,u2,ustride,uorder,v1,v2,vstride,vorder,points);
}

Q_DECL_EXPORT void APIENTRY glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
{
	GLWrapper::instance().glMap2d(target,u1,u2,ustride,uorder,v1,v2,vstride,vorder,points);
}

Q_DECL_EXPORT void APIENTRY glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
{
	GLWrapper::instance().glMap1f(target,u1,u2,stride,order,points);
}

Q_DECL_EXPORT void APIENTRY glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
{
	GLWrapper::instance().glMap1d(target,u1,u2,stride,order,points);
}

Q_DECL_EXPORT void APIENTRY glPushAttrib(GLbitfield mask)
{
	GLWrapper::instance().glPushAttrib(mask);
}

Q_DECL_EXPORT void APIENTRY glPopAttrib()
{
	GLWrapper::instance().glPopAttrib();
}

Q_DECL_EXPORT void APIENTRY glAccum(GLenum op, GLfloat value)
{
	GLWrapper::instance().glAccum(op,value);
}

Q_DECL_EXPORT void APIENTRY glIndexMask(GLuint mask)
{
	GLWrapper::instance().glIndexMask(mask);
}

Q_DECL_EXPORT void APIENTRY glClearIndex(GLfloat c)
{
	GLWrapper::instance().glClearIndex(c);
}

Q_DECL_EXPORT void APIENTRY glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	GLWrapper::instance().glClearAccum(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glPushName(GLuint name)
{
	GLWrapper::instance().glPushName(name);
}

Q_DECL_EXPORT void APIENTRY glPopName()
{
	GLWrapper::instance().glPopName();
}

Q_DECL_EXPORT void APIENTRY glPassThrough(GLfloat token)
{
	GLWrapper::instance().glPassThrough(token);
}

Q_DECL_EXPORT void APIENTRY glLoadName(GLuint name)
{
	GLWrapper::instance().glLoadName(name);
}

Q_DECL_EXPORT void APIENTRY glInitNames()
{
	GLWrapper::instance().glInitNames();
}

Q_DECL_EXPORT GLint APIENTRY glRenderMode(GLenum mode)
{
	return GLWrapper::instance().glRenderMode(mode);
}

Q_DECL_EXPORT void APIENTRY glSelectBuffer(GLsizei size, GLuint *buffer)
{
	GLWrapper::instance().glSelectBuffer(size,buffer);
}

Q_DECL_EXPORT void APIENTRY glFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer)
{
	GLWrapper::instance().glFeedbackBuffer(size,type,buffer);
}

Q_DECL_EXPORT void APIENTRY glTexGeniv(GLenum coord, GLenum pname, const GLint *params)
{
	GLWrapper::instance().glTexGeniv(coord,pname,params);
}

Q_DECL_EXPORT void APIENTRY glTexGeni(GLenum coord, GLenum pname, GLint param)
{
	GLWrapper::instance().glTexGeni(coord,pname,param);
}

Q_DECL_EXPORT void APIENTRY glTexGenfv(GLenum coord, GLenum pname, const GLfloat *params)
{
	GLWrapper::instance().glTexGenfv(coord,pname,params);
}

Q_DECL_EXPORT void APIENTRY glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
	GLWrapper::instance().glTexGenf(coord,pname,param);
}

Q_DECL_EXPORT void APIENTRY glTexGendv(GLenum coord, GLenum pname, const GLdouble *params)
{
	GLWrapper::instance().glTexGendv(coord,pname,params);
}

Q_DECL_EXPORT void APIENTRY glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
	GLWrapper::instance().glTexGend(coord,pname,param);
}

Q_DECL_EXPORT void APIENTRY glTexEnviv(GLenum target, GLenum pname, const GLint *params)
{
	GLWrapper::instance().glTexEnviv(target,pname,params);
}

Q_DECL_EXPORT void APIENTRY glTexEnvi(GLenum target, GLenum pname, GLint param)
{
	GLWrapper::instance().glTexEnvi(target,pname,param);
}

Q_DECL_EXPORT void APIENTRY glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params)
{
	GLWrapper::instance().glTexEnvfv(target,pname,params);
}

Q_DECL_EXPORT void APIENTRY glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	GLWrapper::instance().glTexEnvf(target,pname,param);
}

Q_DECL_EXPORT void APIENTRY glShadeModel(GLenum mode)
{
	GLWrapper::instance().glShadeModel(mode);
}

Q_DECL_EXPORT void APIENTRY glPolygonStipple(const GLubyte *mask)
{
	GLWrapper::instance().glPolygonStipple(mask);
}

Q_DECL_EXPORT void APIENTRY glMaterialiv(GLenum face, GLenum pname, const GLint *params)
{
	GLWrapper::instance().glMaterialiv(face,pname,params);
}

Q_DECL_EXPORT void APIENTRY glMateriali(GLenum face, GLenum pname, GLint param)
{
	GLWrapper::instance().glMateriali(face,pname,param);
}

Q_DECL_EXPORT void APIENTRY glMaterialfv(GLenum face, GLenum pname, const GLfloat *params)
{
	GLWrapper::instance().glMaterialfv(face,pname,params);
}

Q_DECL_EXPORT void APIENTRY glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
	GLWrapper::instance().glMaterialf(face,pname,param);
}

Q_DECL_EXPORT void APIENTRY glLineStipple(GLint factor, GLushort pattern)
{
	GLWrapper::instance().glLineStipple(factor,pattern);
}

Q_DECL_EXPORT void APIENTRY glLightModeliv(GLenum pname, const GLint *params)
{
	GLWrapper::instance().glLightModeliv(pname,params);
}

Q_DECL_EXPORT void APIENTRY glLightModeli(GLenum pname, GLint param)
{
	GLWrapper::instance().glLightModeli(pname,param);
}

Q_DECL_EXPORT void APIENTRY glLightModelfv(GLenum pname, const GLfloat *params)
{
	GLWrapper::instance().glLightModelfv(pname,params);
}

Q_DECL_EXPORT void APIENTRY glLightModelf(GLenum pname, GLfloat param)
{
	GLWrapper::instance().glLightModelf(pname,param);
}

Q_DECL_EXPORT void APIENTRY glLightiv(GLenum light, GLenum pname, const GLint *params)
{
	GLWrapper::instance().glLightiv(light,pname,params);
}

Q_DECL_EXPORT void APIENTRY glLighti(GLenum light, GLenum pname, GLint param)
{
	GLWrapper::instance().glLighti(light,pname,param);
}

Q_DECL_EXPORT void APIENTRY glLightfv(GLenum light, GLenum pname, const GLfloat *params)
{
	GLWrapper::instance().glLightfv(light,pname,params);
}

Q_DECL_EXPORT void APIENTRY glLightf(GLenum light, GLenum pname, GLfloat param)
{
	GLWrapper::instance().glLightf(light,pname,param);
}

Q_DECL_EXPORT void APIENTRY glFogiv(GLenum pname, const GLint *params)
{
	GLWrapper::instance().glFogiv(pname,params);
}

Q_DECL_EXPORT void APIENTRY glFogi(GLenum pname, GLint param)
{
	GLWrapper::instance().glFogi(pname,param);
}

Q_DECL_EXPORT void APIENTRY glFogfv(GLenum pname, const GLfloat *params)
{
	GLWrapper::instance().glFogfv(pname,params);
}

Q_DECL_EXPORT void APIENTRY glFogf(GLenum pname, GLfloat param)
{
	GLWrapper::instance().glFogf(pname,param);
}

Q_DECL_EXPORT void APIENTRY glColorMaterial(GLenum face, GLenum mode)
{
	GLWrapper::instance().glColorMaterial(face,mode);
}

Q_DECL_EXPORT void APIENTRY glClipPlane(GLenum plane, const GLdouble *equation)
{
	GLWrapper::instance().glClipPlane(plane,equation);
}

Q_DECL_EXPORT void APIENTRY glVertex4sv(const GLshort *v)
{
	GLWrapper::instance().glVertex4sv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	GLWrapper::instance().glVertex4s(x,y,z,w);
}

Q_DECL_EXPORT void APIENTRY glVertex4iv(const GLint *v)
{
	GLWrapper::instance().glVertex4iv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
	GLWrapper::instance().glVertex4i(x,y,z,w);
}

Q_DECL_EXPORT void APIENTRY glVertex4fv(const GLfloat *v)
{
	GLWrapper::instance().glVertex4fv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	GLWrapper::instance().glVertex4f(x,y,z,w);
}

Q_DECL_EXPORT void APIENTRY glVertex4dv(const GLdouble *v)
{
	GLWrapper::instance().glVertex4dv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	GLWrapper::instance().glVertex4d(x,y,z,w);
}

Q_DECL_EXPORT void APIENTRY glVertex3sv(const GLshort *v)
{
	GLWrapper::instance().glVertex3sv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex3s(GLshort x, GLshort y, GLshort z)
{
	GLWrapper::instance().glVertex3s(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glVertex3iv(const GLint *v)
{
	GLWrapper::instance().glVertex3iv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex3i(GLint x, GLint y, GLint z)
{
	GLWrapper::instance().glVertex3i(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glVertex3fv(const GLfloat *v)
{
	GLWrapper::instance().glVertex3fv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
	GLWrapper::instance().glVertex3f(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glVertex3dv(const GLdouble *v)
{
	GLWrapper::instance().glVertex3dv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
	GLWrapper::instance().glVertex3d(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glVertex2sv(const GLshort *v)
{
	GLWrapper::instance().glVertex2sv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex2s(GLshort x, GLshort y)
{
	GLWrapper::instance().glVertex2s(x,y);
}

Q_DECL_EXPORT void APIENTRY glVertex2iv(const GLint *v)
{
	GLWrapper::instance().glVertex2iv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex2i(GLint x, GLint y)
{
	GLWrapper::instance().glVertex2i(x,y);
}

Q_DECL_EXPORT void APIENTRY glVertex2fv(const GLfloat *v)
{
	GLWrapper::instance().glVertex2fv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex2f(GLfloat x, GLfloat y)
{
	GLWrapper::instance().glVertex2f(x,y);
}

Q_DECL_EXPORT void APIENTRY glVertex2dv(const GLdouble *v)
{
	GLWrapper::instance().glVertex2dv(v);
}

Q_DECL_EXPORT void APIENTRY glVertex2d(GLdouble x, GLdouble y)
{
	GLWrapper::instance().glVertex2d(x,y);
}

Q_DECL_EXPORT void APIENTRY glTexCoord4sv(const GLshort *v)
{
	GLWrapper::instance().glTexCoord4sv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
	GLWrapper::instance().glTexCoord4s(s,t,r,q);
}

Q_DECL_EXPORT void APIENTRY glTexCoord4iv(const GLint *v)
{
	GLWrapper::instance().glTexCoord4iv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
	GLWrapper::instance().glTexCoord4i(s,t,r,q);
}

Q_DECL_EXPORT void APIENTRY glTexCoord4fv(const GLfloat *v)
{
	GLWrapper::instance().glTexCoord4fv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	GLWrapper::instance().glTexCoord4f(s,t,r,q);
}

Q_DECL_EXPORT void APIENTRY glTexCoord4dv(const GLdouble *v)
{
	GLWrapper::instance().glTexCoord4dv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	GLWrapper::instance().glTexCoord4d(s,t,r,q);
}

Q_DECL_EXPORT void APIENTRY glTexCoord3sv(const GLshort *v)
{
	GLWrapper::instance().glTexCoord3sv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
	GLWrapper::instance().glTexCoord3s(s,t,r);
}

Q_DECL_EXPORT void APIENTRY glTexCoord3iv(const GLint *v)
{
	GLWrapper::instance().glTexCoord3iv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord3i(GLint s, GLint t, GLint r)
{
	GLWrapper::instance().glTexCoord3i(s,t,r);
}

Q_DECL_EXPORT void APIENTRY glTexCoord3fv(const GLfloat *v)
{
	GLWrapper::instance().glTexCoord3fv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
	GLWrapper::instance().glTexCoord3f(s,t,r);
}

Q_DECL_EXPORT void APIENTRY glTexCoord3dv(const GLdouble *v)
{
	GLWrapper::instance().glTexCoord3dv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
	GLWrapper::instance().glTexCoord3d(s,t,r);
}

Q_DECL_EXPORT void APIENTRY glTexCoord2sv(const GLshort *v)
{
	GLWrapper::instance().glTexCoord2sv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord2s(GLshort s, GLshort t)
{
	GLWrapper::instance().glTexCoord2s(s,t);
}

Q_DECL_EXPORT void APIENTRY glTexCoord2iv(const GLint *v)
{
	GLWrapper::instance().glTexCoord2iv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord2i(GLint s, GLint t)
{
	GLWrapper::instance().glTexCoord2i(s,t);
}

Q_DECL_EXPORT void APIENTRY glTexCoord2fv(const GLfloat *v)
{
	GLWrapper::instance().glTexCoord2fv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord2f(GLfloat s, GLfloat t)
{
	GLWrapper::instance().glTexCoord2f(s,t);
}

Q_DECL_EXPORT void APIENTRY glTexCoord2dv(const GLdouble *v)
{
	GLWrapper::instance().glTexCoord2dv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord2d(GLdouble s, GLdouble t)
{
	GLWrapper::instance().glTexCoord2d(s,t);
}

Q_DECL_EXPORT void APIENTRY glTexCoord1sv(const GLshort *v)
{
	GLWrapper::instance().glTexCoord1sv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord1s(GLshort s)
{
	GLWrapper::instance().glTexCoord1s(s);
}

Q_DECL_EXPORT void APIENTRY glTexCoord1iv(const GLint *v)
{
	GLWrapper::instance().glTexCoord1iv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord1i(GLint s)
{
	GLWrapper::instance().glTexCoord1i(s);
}

Q_DECL_EXPORT void APIENTRY glTexCoord1fv(const GLfloat *v)
{
	GLWrapper::instance().glTexCoord1fv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord1f(GLfloat s)
{
	GLWrapper::instance().glTexCoord1f(s);
}

Q_DECL_EXPORT void APIENTRY glTexCoord1dv(const GLdouble *v)
{
	GLWrapper::instance().glTexCoord1dv(v);
}

Q_DECL_EXPORT void APIENTRY glTexCoord1d(GLdouble s)
{
	GLWrapper::instance().glTexCoord1d(s);
}

Q_DECL_EXPORT void APIENTRY glRectsv(const GLshort *v1, const GLshort *v2)
{
	GLWrapper::instance().glRectsv(v1,v2);
}

Q_DECL_EXPORT void APIENTRY glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
	GLWrapper::instance().glRects(x1,y1,x2,y2);
}

Q_DECL_EXPORT void APIENTRY glRectiv(const GLint *v1, const GLint *v2)
{
	GLWrapper::instance().glRectiv(v1,v2);
}

Q_DECL_EXPORT void APIENTRY glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
	GLWrapper::instance().glRecti(x1,y1,x2,y2);
}

Q_DECL_EXPORT void APIENTRY glRectfv(const GLfloat *v1, const GLfloat *v2)
{
	GLWrapper::instance().glRectfv(v1,v2);
}

Q_DECL_EXPORT void APIENTRY glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
	GLWrapper::instance().glRectf(x1,y1,x2,y2);
}

Q_DECL_EXPORT void APIENTRY glRectdv(const GLdouble *v1, const GLdouble *v2)
{
	GLWrapper::instance().glRectdv(v1,v2);
}

Q_DECL_EXPORT void APIENTRY glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
	GLWrapper::instance().glRectd(x1,y1,x2,y2);
}

Q_DECL_EXPORT void APIENTRY glRasterPos4sv(const GLshort *v)
{
	GLWrapper::instance().glRasterPos4sv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	GLWrapper::instance().glRasterPos4s(x,y,z,w);
}

Q_DECL_EXPORT void APIENTRY glRasterPos4iv(const GLint *v)
{
	GLWrapper::instance().glRasterPos4iv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
	GLWrapper::instance().glRasterPos4i(x,y,z,w);
}

Q_DECL_EXPORT void APIENTRY glRasterPos4fv(const GLfloat *v)
{
	GLWrapper::instance().glRasterPos4fv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	GLWrapper::instance().glRasterPos4f(x,y,z,w);
}

Q_DECL_EXPORT void APIENTRY glRasterPos4dv(const GLdouble *v)
{
	GLWrapper::instance().glRasterPos4dv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	GLWrapper::instance().glRasterPos4d(x,y,z,w);
}

Q_DECL_EXPORT void APIENTRY glRasterPos3sv(const GLshort *v)
{
	GLWrapper::instance().glRasterPos3sv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
	GLWrapper::instance().glRasterPos3s(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glRasterPos3iv(const GLint *v)
{
	GLWrapper::instance().glRasterPos3iv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos3i(GLint x, GLint y, GLint z)
{
	GLWrapper::instance().glRasterPos3i(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glRasterPos3fv(const GLfloat *v)
{
	GLWrapper::instance().glRasterPos3fv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	GLWrapper::instance().glRasterPos3f(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glRasterPos3dv(const GLdouble *v)
{
	GLWrapper::instance().glRasterPos3dv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	GLWrapper::instance().glRasterPos3d(x,y,z);
}

Q_DECL_EXPORT void APIENTRY glRasterPos2sv(const GLshort *v)
{
	GLWrapper::instance().glRasterPos2sv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos2s(GLshort x, GLshort y)
{
	GLWrapper::instance().glRasterPos2s(x,y);
}

Q_DECL_EXPORT void APIENTRY glRasterPos2iv(const GLint *v)
{
	GLWrapper::instance().glRasterPos2iv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos2i(GLint x, GLint y)
{
	GLWrapper::instance().glRasterPos2i(x,y);
}

Q_DECL_EXPORT void APIENTRY glRasterPos2fv(const GLfloat *v)
{
	GLWrapper::instance().glRasterPos2fv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos2f(GLfloat x, GLfloat y)
{
	GLWrapper::instance().glRasterPos2f(x,y);
}

Q_DECL_EXPORT void APIENTRY glRasterPos2dv(const GLdouble *v)
{
	GLWrapper::instance().glRasterPos2dv(v);
}

Q_DECL_EXPORT void APIENTRY glRasterPos2d(GLdouble x, GLdouble y)
{
	GLWrapper::instance().glRasterPos2d(x,y);
}

Q_DECL_EXPORT void APIENTRY glNormal3sv(const GLshort *v)
{
	GLWrapper::instance().glNormal3sv(v);
}

Q_DECL_EXPORT void APIENTRY glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
	GLWrapper::instance().glNormal3s(nx,ny,nz);
}

Q_DECL_EXPORT void APIENTRY glNormal3iv(const GLint *v)
{
	GLWrapper::instance().glNormal3iv(v);
}

Q_DECL_EXPORT void APIENTRY glNormal3i(GLint nx, GLint ny, GLint nz)
{
	GLWrapper::instance().glNormal3i(nx,ny,nz);
}

Q_DECL_EXPORT void APIENTRY glNormal3fv(const GLfloat *v)
{
	GLWrapper::instance().glNormal3fv(v);
}

Q_DECL_EXPORT void APIENTRY glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	GLWrapper::instance().glNormal3f(nx,ny,nz);
}

Q_DECL_EXPORT void APIENTRY glNormal3dv(const GLdouble *v)
{
	GLWrapper::instance().glNormal3dv(v);
}

Q_DECL_EXPORT void APIENTRY glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
	GLWrapper::instance().glNormal3d(nx,ny,nz);
}

Q_DECL_EXPORT void APIENTRY glNormal3bv(const GLbyte *v)
{
	GLWrapper::instance().glNormal3bv(v);
}

Q_DECL_EXPORT void APIENTRY glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
	GLWrapper::instance().glNormal3b(nx,ny,nz);
}

Q_DECL_EXPORT void APIENTRY glIndexsv(const GLshort *c)
{
	GLWrapper::instance().glIndexsv(c);
}

Q_DECL_EXPORT void APIENTRY glIndexs(GLshort c)
{
	GLWrapper::instance().glIndexs(c);
}

Q_DECL_EXPORT void APIENTRY glIndexiv(const GLint *c)
{
	GLWrapper::instance().glIndexiv(c);
}

Q_DECL_EXPORT void APIENTRY glIndexi(GLint c)
{
	GLWrapper::instance().glIndexi(c);
}

Q_DECL_EXPORT void APIENTRY glIndexfv(const GLfloat *c)
{
	GLWrapper::instance().glIndexfv(c);
}

Q_DECL_EXPORT void APIENTRY glIndexf(GLfloat c)
{
	GLWrapper::instance().glIndexf(c);
}

Q_DECL_EXPORT void APIENTRY glIndexdv(const GLdouble *c)
{
	GLWrapper::instance().glIndexdv(c);
}

Q_DECL_EXPORT void APIENTRY glIndexd(GLdouble c)
{
	GLWrapper::instance().glIndexd(c);
}

Q_DECL_EXPORT void APIENTRY glEnd()
{
	GLWrapper::instance().glEnd();
}

Q_DECL_EXPORT void APIENTRY glEdgeFlagv(const GLboolean *flag)
{
	GLWrapper::instance().glEdgeFlagv(flag);
}

Q_DECL_EXPORT void APIENTRY glEdgeFlag(GLboolean flag)
{
	GLWrapper::instance().glEdgeFlag(flag);
}

Q_DECL_EXPORT void APIENTRY glColor4usv(const GLushort *v)
{
	GLWrapper::instance().glColor4usv(v);
}

Q_DECL_EXPORT void APIENTRY glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
	GLWrapper::instance().glColor4us(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glColor4uiv(const GLuint *v)
{
	GLWrapper::instance().glColor4uiv(v);
}

Q_DECL_EXPORT void APIENTRY glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	GLWrapper::instance().glColor4ui(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glColor4ubv(const GLubyte *v)
{
	GLWrapper::instance().glColor4ubv(v);
}

Q_DECL_EXPORT void APIENTRY glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	GLWrapper::instance().glColor4ub(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glColor4sv(const GLshort *v)
{
	GLWrapper::instance().glColor4sv(v);
}

Q_DECL_EXPORT void APIENTRY glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
	GLWrapper::instance().glColor4s(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glColor4iv(const GLint *v)
{
	GLWrapper::instance().glColor4iv(v);
}

Q_DECL_EXPORT void APIENTRY glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
	GLWrapper::instance().glColor4i(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glColor4fv(const GLfloat *v)
{
	GLWrapper::instance().glColor4fv(v);
}

Q_DECL_EXPORT void APIENTRY glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	GLWrapper::instance().glColor4f(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glColor4dv(const GLdouble *v)
{
	GLWrapper::instance().glColor4dv(v);
}

Q_DECL_EXPORT void APIENTRY glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
	GLWrapper::instance().glColor4d(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glColor4bv(const GLbyte *v)
{
	GLWrapper::instance().glColor4bv(v);
}

Q_DECL_EXPORT void APIENTRY glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
	GLWrapper::instance().glColor4b(red,green,blue,alpha);
}

Q_DECL_EXPORT void APIENTRY glColor3usv(const GLushort *v)
{
	GLWrapper::instance().glColor3usv(v);
}

Q_DECL_EXPORT void APIENTRY glColor3us(GLushort red, GLushort green, GLushort blue)
{
	GLWrapper::instance().glColor3us(red,green,blue);
}

Q_DECL_EXPORT void APIENTRY glColor3uiv(const GLuint *v)
{
	GLWrapper::instance().glColor3uiv(v);
}

Q_DECL_EXPORT void APIENTRY glColor3ui(GLuint red, GLuint green, GLuint blue)
{
	GLWrapper::instance().glColor3ui(red,green,blue);
}

Q_DECL_EXPORT void APIENTRY glColor3ubv(const GLubyte *v)
{
	GLWrapper::instance().glColor3ubv(v);
}

Q_DECL_EXPORT void APIENTRY glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	GLWrapper::instance().glColor3ub(red,green,blue);
}

Q_DECL_EXPORT void APIENTRY glColor3sv(const GLshort *v)
{
	GLWrapper::instance().glColor3sv(v);
}

Q_DECL_EXPORT void APIENTRY glColor3s(GLshort red, GLshort green, GLshort blue)
{
	GLWrapper::instance().glColor3s(red,green,blue);
}

Q_DECL_EXPORT void APIENTRY glColor3iv(const GLint *v)
{
	GLWrapper::instance().glColor3iv(v);
}

Q_DECL_EXPORT void APIENTRY glColor3i(GLint red, GLint green, GLint blue)
{
	GLWrapper::instance().glColor3i(red,green,blue);
}

Q_DECL_EXPORT void APIENTRY glColor3fv(const GLfloat *v)
{
	GLWrapper::instance().glColor3fv(v);
}

Q_DECL_EXPORT void APIENTRY glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	GLWrapper::instance().glColor3f(red,green,blue);
}

Q_DECL_EXPORT void APIENTRY glColor3dv(const GLdouble *v)
{
	GLWrapper::instance().glColor3dv(v);
}

Q_DECL_EXPORT void APIENTRY glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
	GLWrapper::instance().glColor3d(red,green,blue);
}

Q_DECL_EXPORT void APIENTRY glColor3bv(const GLbyte *v)
{
	GLWrapper::instance().glColor3bv(v);
}

Q_DECL_EXPORT void APIENTRY glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
	GLWrapper::instance().glColor3b(red,green,blue);
}

Q_DECL_EXPORT void APIENTRY glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap)
{
	GLWrapper::instance().glBitmap(width,height,xorig,yorig,xmove,ymove,bitmap);
}

Q_DECL_EXPORT void APIENTRY glBegin(GLenum mode)
{
	GLWrapper::instance().glBegin(mode);
}

Q_DECL_EXPORT void APIENTRY glListBase(GLuint base)
{
	GLWrapper::instance().glListBase(base);
}

Q_DECL_EXPORT GLuint APIENTRY glGenLists(GLsizei range)
{
	return GLWrapper::instance().glGenLists(range);
}

Q_DECL_EXPORT void APIENTRY glDeleteLists(GLuint list, GLsizei range)
{
	GLWrapper::instance().glDeleteLists(list,range);
}

Q_DECL_EXPORT void APIENTRY glCallLists(GLsizei n, GLenum type, const GLvoid *lists)
{
	GLWrapper::instance().glCallLists(n,type,lists);
}

Q_DECL_EXPORT void APIENTRY glCallList(GLuint list)
{
	GLWrapper::instance().glCallList(list);
}

Q_DECL_EXPORT void APIENTRY glEndList()
{
	GLWrapper::instance().glEndList();
}

Q_DECL_EXPORT void APIENTRY glNewList(GLuint list, GLenum mode)
{
	GLWrapper::instance().glNewList(list,mode);
}

}
