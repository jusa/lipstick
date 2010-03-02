/***************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (directui@nokia.com)
**
** This file is part of duihome.
**
** If you have questions regarding the use of this file, please contact
** Nokia at directui@nokia.com.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file LICENSE.LGPL included in the packaging
** of this file.
**
****************************************************************************/
#ifndef TA_MKTACLASSNAME_H
#define TA_MKTACLASSNAME_H

#include <mtestapp.h>
#include <mtestpagefactory.h>
#include <QObject>

class QTimer;
class DuiLabel;
class DuiProgressIndicator;

class Ta_ActiveApp : public  MTestPageFactory
{
    Q_OBJECT

public:
    virtual DuiWidget *addMainContent();
    virtual DuiWidget *addToolbar();

    void setup(int &argc, char ** &argv);

public slots:
    void tick();

private slots:

private:
    QTimer *timer;
    DuiProgressIndicator *progress;
    DuiLabel *value;

    QString progressType;
    long refresh;
    bool noRefresh;
};


#endif
