#include <stdio.h>

int main() {
	typedef struct {
		const char* option;
	} Menu;

	typedef struct {
		const char* nom;
		Menu* menus;
		int nb_menu;
	} Application;

	Menu* option = "options";
	Application* nom = "Twitter";
}