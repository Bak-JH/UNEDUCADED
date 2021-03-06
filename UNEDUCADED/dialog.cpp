﻿#include "dialog.h"
#include "customqgraphicsscene.h"
#include <QVBoxLayout>
#include <QGraphicsView>
#include <QHBoxLayout>
#include "paintwidget.h"

Dialog::Dialog(QWidget *parent)
: QDialog(parent)
{
   scene = new CustomQGraphicsScene(this);
   view = new QGraphicsView(scene,this);
   layout = new QVBoxLayout(this);
   layout->addWidget(view);
   layout->addWidget(new PaintWidget());

   QHBoxLayout * Hlayout = new QHBoxLayout();
   ui->centralwidget->setLayout(hbox);
   hbox->addWidget(new PaintWidget);
   setLayout(layout);
   resize(1280,720);
}

Dialog::~Dialog()
{
   delete scene;
   delete view;
}
