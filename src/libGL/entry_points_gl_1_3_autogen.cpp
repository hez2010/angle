// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_1_3_autogen.cpp:
//   Defines the GL 1.3 entry points.

#include "libGL/entry_points_gl_1_3_autogen.h"

#include "libANGLE/Context.h"
#include "libANGLE/Context.inl.h"
#include "libANGLE/entry_points_utils.h"
#include "libANGLE/gl_enum_utils_autogen.h"
#include "libANGLE/validationEGL.h"
#include "libANGLE/validationES.h"
#include "libANGLE/validationES1.h"
#include "libANGLE/validationES2.h"
#include "libANGLE/validationES3.h"
#include "libANGLE/validationES31.h"
#include "libANGLE/validationESEXT.h"
#include "libANGLE/validationGL13_autogen.h"
#include "libGLESv2/global_state.h"

namespace gl
{
void GL_APIENTRY ActiveTexture(GLenum texture)
{
    EVENT("(GLenum texture = %s)", GLenumToString(GLenumGroup::TextureUnit, texture));

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateActiveTexture(context, texture));
        if (isCallValid)
        {
            context->activeTexture(texture);
        }
        ANGLE_CAPTURE(ActiveTexture, isCallValid, context, texture);
    }
}

void GL_APIENTRY ClientActiveTexture(GLenum texture)
{
    EVENT("(GLenum texture = %s)", GLenumToString(GLenumGroup::TextureUnit, texture));

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateClientActiveTexture(context, texture));
        if (isCallValid)
        {
            context->clientActiveTexture(texture);
        }
        ANGLE_CAPTURE(ClientActiveTexture, isCallValid, context, texture);
    }
}

void GL_APIENTRY CompressedTexImage1D(GLenum target,
                                      GLint level,
                                      GLenum internalformat,
                                      GLsizei width,
                                      GLint border,
                                      GLsizei imageSize,
                                      const void *data)
{
    EVENT(
        "(GLenum target = %s, GLint level = %d, GLenum internalformat = %s, GLsizei width = %d, "
        "GLint border = %d, GLsizei imageSize = %d, const void *data = 0x%016" PRIxPTR ")",
        GLenumToString(GLenumGroup::TextureTarget, target), level,
        GLenumToString(GLenumGroup::InternalFormat, internalformat), width, border, imageSize,
        (uintptr_t)data);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() ||
                            ValidateCompressedTexImage1D(context, target, level, internalformat,
                                                         width, border, imageSize, data));
        if (isCallValid)
        {
            context->compressedTexImage1D(target, level, internalformat, width, border, imageSize,
                                          data);
        }
        ANGLE_CAPTURE(CompressedTexImage1D, isCallValid, context, target, level, internalformat,
                      width, border, imageSize, data);
    }
}

void GL_APIENTRY CompressedTexImage2D(GLenum target,
                                      GLint level,
                                      GLenum internalformat,
                                      GLsizei width,
                                      GLsizei height,
                                      GLint border,
                                      GLsizei imageSize,
                                      const void *data)
{
    EVENT(
        "(GLenum target = %s, GLint level = %d, GLenum internalformat = %s, GLsizei width = %d, "
        "GLsizei height = %d, GLint border = %d, GLsizei imageSize = %d, const void *data = "
        "0x%016" PRIxPTR ")",
        GLenumToString(GLenumGroup::TextureTarget, target), level,
        GLenumToString(GLenumGroup::InternalFormat, internalformat), width, height, border,
        imageSize, (uintptr_t)data);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        TextureTarget targetPacked = FromGL<TextureTarget>(target);
        bool isCallValid =
            (context->skipValidation() ||
             ValidateCompressedTexImage2D(context, targetPacked, level, internalformat, width,
                                          height, border, imageSize, data));
        if (isCallValid)
        {
            context->compressedTexImage2D(targetPacked, level, internalformat, width, height,
                                          border, imageSize, data);
        }
        ANGLE_CAPTURE(CompressedTexImage2D, isCallValid, context, targetPacked, level,
                      internalformat, width, height, border, imageSize, data);
    }
}

void GL_APIENTRY CompressedTexImage3D(GLenum target,
                                      GLint level,
                                      GLenum internalformat,
                                      GLsizei width,
                                      GLsizei height,
                                      GLsizei depth,
                                      GLint border,
                                      GLsizei imageSize,
                                      const void *data)
{
    EVENT(
        "(GLenum target = %s, GLint level = %d, GLenum internalformat = %s, GLsizei width = %d, "
        "GLsizei height = %d, GLsizei depth = %d, GLint border = %d, GLsizei imageSize = %d, const "
        "void *data = 0x%016" PRIxPTR ")",
        GLenumToString(GLenumGroup::TextureTarget, target), level,
        GLenumToString(GLenumGroup::InternalFormat, internalformat), width, height, depth, border,
        imageSize, (uintptr_t)data);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        TextureTarget targetPacked = FromGL<TextureTarget>(target);
        bool isCallValid =
            (context->skipValidation() ||
             ValidateCompressedTexImage3D(context, targetPacked, level, internalformat, width,
                                          height, depth, border, imageSize, data));
        if (isCallValid)
        {
            context->compressedTexImage3D(targetPacked, level, internalformat, width, height, depth,
                                          border, imageSize, data);
        }
        ANGLE_CAPTURE(CompressedTexImage3D, isCallValid, context, targetPacked, level,
                      internalformat, width, height, depth, border, imageSize, data);
    }
}

void GL_APIENTRY CompressedTexSubImage1D(GLenum target,
                                         GLint level,
                                         GLint xoffset,
                                         GLsizei width,
                                         GLenum format,
                                         GLsizei imageSize,
                                         const void *data)
{
    EVENT(
        "(GLenum target = %s, GLint level = %d, GLint xoffset = %d, GLsizei width = %d, GLenum "
        "format = %s, GLsizei imageSize = %d, const void *data = 0x%016" PRIxPTR ")",
        GLenumToString(GLenumGroup::TextureTarget, target), level, xoffset, width,
        GLenumToString(GLenumGroup::PixelFormat, format), imageSize, (uintptr_t)data);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() ||
                            ValidateCompressedTexSubImage1D(context, target, level, xoffset, width,
                                                            format, imageSize, data));
        if (isCallValid)
        {
            context->compressedTexSubImage1D(target, level, xoffset, width, format, imageSize,
                                             data);
        }
        ANGLE_CAPTURE(CompressedTexSubImage1D, isCallValid, context, target, level, xoffset, width,
                      format, imageSize, data);
    }
}

void GL_APIENTRY CompressedTexSubImage2D(GLenum target,
                                         GLint level,
                                         GLint xoffset,
                                         GLint yoffset,
                                         GLsizei width,
                                         GLsizei height,
                                         GLenum format,
                                         GLsizei imageSize,
                                         const void *data)
{
    EVENT(
        "(GLenum target = %s, GLint level = %d, GLint xoffset = %d, GLint yoffset = %d, GLsizei "
        "width = %d, GLsizei height = %d, GLenum format = %s, GLsizei imageSize = %d, const void "
        "*data = 0x%016" PRIxPTR ")",
        GLenumToString(GLenumGroup::TextureTarget, target), level, xoffset, yoffset, width, height,
        GLenumToString(GLenumGroup::PixelFormat, format), imageSize, (uintptr_t)data);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        TextureTarget targetPacked = FromGL<TextureTarget>(target);
        bool isCallValid =
            (context->skipValidation() ||
             ValidateCompressedTexSubImage2D(context, targetPacked, level, xoffset, yoffset, width,
                                             height, format, imageSize, data));
        if (isCallValid)
        {
            context->compressedTexSubImage2D(targetPacked, level, xoffset, yoffset, width, height,
                                             format, imageSize, data);
        }
        ANGLE_CAPTURE(CompressedTexSubImage2D, isCallValid, context, targetPacked, level, xoffset,
                      yoffset, width, height, format, imageSize, data);
    }
}

void GL_APIENTRY CompressedTexSubImage3D(GLenum target,
                                         GLint level,
                                         GLint xoffset,
                                         GLint yoffset,
                                         GLint zoffset,
                                         GLsizei width,
                                         GLsizei height,
                                         GLsizei depth,
                                         GLenum format,
                                         GLsizei imageSize,
                                         const void *data)
{
    EVENT(
        "(GLenum target = %s, GLint level = %d, GLint xoffset = %d, GLint yoffset = %d, GLint "
        "zoffset = %d, GLsizei width = %d, GLsizei height = %d, GLsizei depth = %d, GLenum format "
        "= %s, GLsizei imageSize = %d, const void *data = 0x%016" PRIxPTR ")",
        GLenumToString(GLenumGroup::TextureTarget, target), level, xoffset, yoffset, zoffset, width,
        height, depth, GLenumToString(GLenumGroup::PixelFormat, format), imageSize,
        (uintptr_t)data);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        TextureTarget targetPacked = FromGL<TextureTarget>(target);
        bool isCallValid           = (context->skipValidation() ||
                            ValidateCompressedTexSubImage3D(context, targetPacked, level, xoffset,
                                                            yoffset, zoffset, width, height, depth,
                                                            format, imageSize, data));
        if (isCallValid)
        {
            context->compressedTexSubImage3D(targetPacked, level, xoffset, yoffset, zoffset, width,
                                             height, depth, format, imageSize, data);
        }
        ANGLE_CAPTURE(CompressedTexSubImage3D, isCallValid, context, targetPacked, level, xoffset,
                      yoffset, zoffset, width, height, depth, format, imageSize, data);
    }
}

void GL_APIENTRY GetCompressedTexImage(GLenum target, GLint level, void *img)
{
    EVENT("(GLenum target = %s, GLint level = %d, void *img = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureTarget, target), level, (uintptr_t)img);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() ||
                            ValidateGetCompressedTexImage(context, target, level, img));
        if (isCallValid)
        {
            context->getCompressedTexImage(target, level, img);
        }
        ANGLE_CAPTURE(GetCompressedTexImage, isCallValid, context, target, level, img);
    }
}

void GL_APIENTRY LoadTransposeMatrixd(const GLdouble *m)
{
    EVENT("(const GLdouble *m = 0x%016" PRIxPTR ")", (uintptr_t)m);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateLoadTransposeMatrixd(context, m));
        if (isCallValid)
        {
            context->loadTransposeMatrixd(m);
        }
        ANGLE_CAPTURE(LoadTransposeMatrixd, isCallValid, context, m);
    }
}

void GL_APIENTRY LoadTransposeMatrixf(const GLfloat *m)
{
    EVENT("(const GLfloat *m = 0x%016" PRIxPTR ")", (uintptr_t)m);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateLoadTransposeMatrixf(context, m));
        if (isCallValid)
        {
            context->loadTransposeMatrixf(m);
        }
        ANGLE_CAPTURE(LoadTransposeMatrixf, isCallValid, context, m);
    }
}

void GL_APIENTRY MultTransposeMatrixd(const GLdouble *m)
{
    EVENT("(const GLdouble *m = 0x%016" PRIxPTR ")", (uintptr_t)m);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateMultTransposeMatrixd(context, m));
        if (isCallValid)
        {
            context->multTransposeMatrixd(m);
        }
        ANGLE_CAPTURE(MultTransposeMatrixd, isCallValid, context, m);
    }
}

void GL_APIENTRY MultTransposeMatrixf(const GLfloat *m)
{
    EVENT("(const GLfloat *m = 0x%016" PRIxPTR ")", (uintptr_t)m);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateMultTransposeMatrixf(context, m));
        if (isCallValid)
        {
            context->multTransposeMatrixf(m);
        }
        ANGLE_CAPTURE(MultTransposeMatrixf, isCallValid, context, m);
    }
}

void GL_APIENTRY MultiTexCoord1d(GLenum target, GLdouble s)
{
    EVENT("(GLenum target = %s, GLdouble s = %f)", GLenumToString(GLenumGroup::TextureUnit, target),
          s);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord1d(context, target, s));
        if (isCallValid)
        {
            context->multiTexCoord1d(target, s);
        }
        ANGLE_CAPTURE(MultiTexCoord1d, isCallValid, context, target, s);
    }
}

void GL_APIENTRY MultiTexCoord1dv(GLenum target, const GLdouble *v)
{
    EVENT("(GLenum target = %s, const GLdouble *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord1dv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord1dv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord1dv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord1f(GLenum target, GLfloat s)
{
    EVENT("(GLenum target = %s, GLfloat s = %f)", GLenumToString(GLenumGroup::TextureUnit, target),
          s);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord1f(context, target, s));
        if (isCallValid)
        {
            context->multiTexCoord1f(target, s);
        }
        ANGLE_CAPTURE(MultiTexCoord1f, isCallValid, context, target, s);
    }
}

void GL_APIENTRY MultiTexCoord1fv(GLenum target, const GLfloat *v)
{
    EVENT("(GLenum target = %s, const GLfloat *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord1fv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord1fv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord1fv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord1i(GLenum target, GLint s)
{
    EVENT("(GLenum target = %s, GLint s = %d)", GLenumToString(GLenumGroup::TextureUnit, target),
          s);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord1i(context, target, s));
        if (isCallValid)
        {
            context->multiTexCoord1i(target, s);
        }
        ANGLE_CAPTURE(MultiTexCoord1i, isCallValid, context, target, s);
    }
}

void GL_APIENTRY MultiTexCoord1iv(GLenum target, const GLint *v)
{
    EVENT("(GLenum target = %s, const GLint *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord1iv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord1iv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord1iv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord1s(GLenum target, GLshort s)
{
    EVENT("(GLenum target = %s, GLshort s = %d)", GLenumToString(GLenumGroup::TextureUnit, target),
          s);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord1s(context, target, s));
        if (isCallValid)
        {
            context->multiTexCoord1s(target, s);
        }
        ANGLE_CAPTURE(MultiTexCoord1s, isCallValid, context, target, s);
    }
}

void GL_APIENTRY MultiTexCoord1sv(GLenum target, const GLshort *v)
{
    EVENT("(GLenum target = %s, const GLshort *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord1sv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord1sv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord1sv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    EVENT("(GLenum target = %s, GLdouble s = %f, GLdouble t = %f)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord2d(context, target, s, t));
        if (isCallValid)
        {
            context->multiTexCoord2d(target, s, t);
        }
        ANGLE_CAPTURE(MultiTexCoord2d, isCallValid, context, target, s, t);
    }
}

void GL_APIENTRY MultiTexCoord2dv(GLenum target, const GLdouble *v)
{
    EVENT("(GLenum target = %s, const GLdouble *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord2dv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord2dv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord2dv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    EVENT("(GLenum target = %s, GLfloat s = %f, GLfloat t = %f)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord2f(context, target, s, t));
        if (isCallValid)
        {
            context->multiTexCoord2f(target, s, t);
        }
        ANGLE_CAPTURE(MultiTexCoord2f, isCallValid, context, target, s, t);
    }
}

void GL_APIENTRY MultiTexCoord2fv(GLenum target, const GLfloat *v)
{
    EVENT("(GLenum target = %s, const GLfloat *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord2fv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord2fv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord2fv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    EVENT("(GLenum target = %s, GLint s = %d, GLint t = %d)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord2i(context, target, s, t));
        if (isCallValid)
        {
            context->multiTexCoord2i(target, s, t);
        }
        ANGLE_CAPTURE(MultiTexCoord2i, isCallValid, context, target, s, t);
    }
}

void GL_APIENTRY MultiTexCoord2iv(GLenum target, const GLint *v)
{
    EVENT("(GLenum target = %s, const GLint *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord2iv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord2iv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord2iv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    EVENT("(GLenum target = %s, GLshort s = %d, GLshort t = %d)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord2s(context, target, s, t));
        if (isCallValid)
        {
            context->multiTexCoord2s(target, s, t);
        }
        ANGLE_CAPTURE(MultiTexCoord2s, isCallValid, context, target, s, t);
    }
}

void GL_APIENTRY MultiTexCoord2sv(GLenum target, const GLshort *v)
{
    EVENT("(GLenum target = %s, const GLshort *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord2sv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord2sv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord2sv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    EVENT("(GLenum target = %s, GLdouble s = %f, GLdouble t = %f, GLdouble r = %f)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t, r);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord3d(context, target, s, t, r));
        if (isCallValid)
        {
            context->multiTexCoord3d(target, s, t, r);
        }
        ANGLE_CAPTURE(MultiTexCoord3d, isCallValid, context, target, s, t, r);
    }
}

void GL_APIENTRY MultiTexCoord3dv(GLenum target, const GLdouble *v)
{
    EVENT("(GLenum target = %s, const GLdouble *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord3dv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord3dv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord3dv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    EVENT("(GLenum target = %s, GLfloat s = %f, GLfloat t = %f, GLfloat r = %f)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t, r);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord3f(context, target, s, t, r));
        if (isCallValid)
        {
            context->multiTexCoord3f(target, s, t, r);
        }
        ANGLE_CAPTURE(MultiTexCoord3f, isCallValid, context, target, s, t, r);
    }
}

void GL_APIENTRY MultiTexCoord3fv(GLenum target, const GLfloat *v)
{
    EVENT("(GLenum target = %s, const GLfloat *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord3fv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord3fv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord3fv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    EVENT("(GLenum target = %s, GLint s = %d, GLint t = %d, GLint r = %d)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t, r);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord3i(context, target, s, t, r));
        if (isCallValid)
        {
            context->multiTexCoord3i(target, s, t, r);
        }
        ANGLE_CAPTURE(MultiTexCoord3i, isCallValid, context, target, s, t, r);
    }
}

void GL_APIENTRY MultiTexCoord3iv(GLenum target, const GLint *v)
{
    EVENT("(GLenum target = %s, const GLint *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord3iv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord3iv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord3iv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    EVENT("(GLenum target = %s, GLshort s = %d, GLshort t = %d, GLshort r = %d)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t, r);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord3s(context, target, s, t, r));
        if (isCallValid)
        {
            context->multiTexCoord3s(target, s, t, r);
        }
        ANGLE_CAPTURE(MultiTexCoord3s, isCallValid, context, target, s, t, r);
    }
}

void GL_APIENTRY MultiTexCoord3sv(GLenum target, const GLshort *v)
{
    EVENT("(GLenum target = %s, const GLshort *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord3sv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord3sv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord3sv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    EVENT(
        "(GLenum target = %s, GLdouble s = %f, GLdouble t = %f, GLdouble r = %f, GLdouble q = %f)",
        GLenumToString(GLenumGroup::TextureUnit, target), s, t, r, q);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord4d(context, target, s, t, r, q));
        if (isCallValid)
        {
            context->multiTexCoord4d(target, s, t, r, q);
        }
        ANGLE_CAPTURE(MultiTexCoord4d, isCallValid, context, target, s, t, r, q);
    }
}

void GL_APIENTRY MultiTexCoord4dv(GLenum target, const GLdouble *v)
{
    EVENT("(GLenum target = %s, const GLdouble *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord4dv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord4dv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord4dv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    EVENT("(GLenum target = %s, GLfloat s = %f, GLfloat t = %f, GLfloat r = %f, GLfloat q = %f)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t, r, q);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord4f(context, target, s, t, r, q));
        if (isCallValid)
        {
            context->multiTexCoord4f(target, s, t, r, q);
        }
        ANGLE_CAPTURE(MultiTexCoord4f, isCallValid, context, target, s, t, r, q);
    }
}

void GL_APIENTRY MultiTexCoord4fv(GLenum target, const GLfloat *v)
{
    EVENT("(GLenum target = %s, const GLfloat *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord4fv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord4fv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord4fv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    EVENT("(GLenum target = %s, GLint s = %d, GLint t = %d, GLint r = %d, GLint q = %d)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t, r, q);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord4i(context, target, s, t, r, q));
        if (isCallValid)
        {
            context->multiTexCoord4i(target, s, t, r, q);
        }
        ANGLE_CAPTURE(MultiTexCoord4i, isCallValid, context, target, s, t, r, q);
    }
}

void GL_APIENTRY MultiTexCoord4iv(GLenum target, const GLint *v)
{
    EVENT("(GLenum target = %s, const GLint *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord4iv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord4iv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord4iv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY MultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    EVENT("(GLenum target = %s, GLshort s = %d, GLshort t = %d, GLshort r = %d, GLshort q = %d)",
          GLenumToString(GLenumGroup::TextureUnit, target), s, t, r, q);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord4s(context, target, s, t, r, q));
        if (isCallValid)
        {
            context->multiTexCoord4s(target, s, t, r, q);
        }
        ANGLE_CAPTURE(MultiTexCoord4s, isCallValid, context, target, s, t, r, q);
    }
}

void GL_APIENTRY MultiTexCoord4sv(GLenum target, const GLshort *v)
{
    EVENT("(GLenum target = %s, const GLshort *v = 0x%016" PRIxPTR ")",
          GLenumToString(GLenumGroup::TextureUnit, target), (uintptr_t)v);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateMultiTexCoord4sv(context, target, v));
        if (isCallValid)
        {
            context->multiTexCoord4sv(target, v);
        }
        ANGLE_CAPTURE(MultiTexCoord4sv, isCallValid, context, target, v);
    }
}

void GL_APIENTRY SampleCoverage(GLfloat value, GLboolean invert)
{
    EVENT("(GLfloat value = %f, GLboolean invert = %s)", value, GLbooleanToString(invert));

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateSampleCoverage(context, value, invert));
        if (isCallValid)
        {
            context->sampleCoverage(value, invert);
        }
        ANGLE_CAPTURE(SampleCoverage, isCallValid, context, value, invert);
    }
}
}  // namespace gl
