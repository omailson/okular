/***************************************************************************
 *   Copyright (C) 2006 by Pino Toscano <toscano.pino@tiscali.it>          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

#include "ui_dlgidentitybase.h"

#include "dlgidentity.h"

DlgIdentity::DlgIdentity( QWidget * parent )
    : QWidget( parent )
{
    m_dlg = new Ui_DlgIdentityBase();
    m_dlg->setupUi( this );
}