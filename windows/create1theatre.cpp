#include "create1theatre.h"

create1theatre::create1theatre() {

	name = new QLineEdit;
	address = new QLineEdit;
	tel_num = new QLineEdit;
	desc = new QTextEdit;

	l_name = new QLabel("Название театра");
	l_address = new QLabel("Адрес");
	l_tel_num = new QLabel("Телефонный номер");
	l_desc = new QLabel("Описание:");

	l_name->setBuddy(name);
	l_address->setBuddy(address);
	l_tel_num->setBuddy(tel_num);
	l_desc->setBuddy(desc);

	entr = new QPushButton("Добавить");
	cancel = new QPushButton("Отмена");

	l = new QVBoxLayout;
	lh = new QHBoxLayout;

	lh->addWidget(entr);
	lh->addWidget(cancel);

	l->addWidget(l_name);
	l->addWidget(name);
	l->addWidget(l_address);
	l->addWidget(address);
	l->addWidget(l_tel_num);
	l->addWidget(tel_num);
	l->addWidget(l_desc);
	l->addWidget(desc);

	l->addLayout(lh);
	setLayout(l);


}


