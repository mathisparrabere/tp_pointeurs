#include <stdio.h>

void displayMenu(const Application* app) {

}

int main() {
	typedef struct {
		const char* option;
	} Menu;

	typedef struct {
		const char* nom;
		Menu* menus;
		int nb_menu;
		
	} Application;

	Menu photoMenus[] = { {"Regarder une photo"}, {"Prendre une photo" } };
	Application photoApp = { {"Photo"}, {photoMenus}, {2} };

	displayMenu(photoApp);

}