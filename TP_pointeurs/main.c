#include <stdio.h>
#include "bib.h"

void displayMenu(const Application* app) {
	printf("%s\n", app->nom);

	for (int i = 0; i < app->nb_menus; i++) {
		printf("%d. %s\n", i + 1, app->menus[i].option);
	}
}

int main() {

	Menu photoMenus[] = { {"Regarder une photo"}, {"Prendre une photo" } };
	Application photoApp = { {"Photo"}, {photoMenus}, {2} };

	displayMenu(photoApp);

}