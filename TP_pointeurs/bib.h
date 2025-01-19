#pragma once
#ifndef __BIB__
#define __BIB__

typedef struct {
	const char* option;
} Menu;

typedef struct {
	const char* nom;
	Menu* menus;
	int nb_menu;

} Application;

#endif