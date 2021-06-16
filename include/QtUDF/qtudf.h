/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Foxman , Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com
 * URL      : http://qtudf.sourceforge.net/
 *
 * QtUDF acts as an interface between Qt and UDF library.
 * Please keep QtUDF as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#ifndef QT_UDF_H
#define QT_UDF_H

#include <QtCore>
#ifndef QT_STATIC
#include <QtScript>
#endif

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#  if defined(QT_BUILD_QTUDF_LIB)
#    define Q_UDF_EXPORT Q_DECL_EXPORT
#  else
#    define Q_UDF_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define Q_UDF_EXPORT
#endif

#define QT_UDF_LIB 1

class Q_UDF_EXPORT QtUDF ;

class Q_UDF_EXPORT QtUDF
{
  public:

    explicit     QtUDF   (void) ;
    virtual     ~QtUDF   (void) ;

  protected:

  private:

} ;

QT_END_NAMESPACE

#endif
