#include "TTModels.h"

TTModels::TTModels() {
	QVBoxLayout *l = new QVBoxLayout;

	// Scroll
	QScrollArea *scroll = new QScrollArea;
	QWidget *w = new QWidget;
	layout = new QVBoxLayout;

	layout->setMargin(0);
	layout->setContentsMargins(0, 0, 5, 0);
	layout->setAlignment(Qt::AlignTop);

	w->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
	w->setLayout(layout);

	scroll->setWidget(w);
	scroll->setWidgetResizable(true);
	scroll->setAlignment(Qt::AlignTop | Qt::AlignHCenter);
	scroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	scroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
	scroll->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
	scroll->setFrameStyle(QFrame::NoFrame);

	setBackgroundRole(QPalette::Base);

	l->addWidget(scroll);
	setLayout(l);
}
