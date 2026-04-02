#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "func_pkmn.h"

// Devuelve un puntero de la clase pokemon con sus valores rellenado
Pokemon * crearPokemon(char *nombre, char *tipo, int hp, int ataque, int defensa, int velocidad) {
    /*
    Cree su codigo acá
    */
}

void liberarEquipoPokemon(Pokemon *p){
    /*
    Cree su codigo acá
    */
}


// Función para obtener un pokémon según la selección
Pokemon * obtenerEquipoPokemon(int opcion[]) {
    /*
    Esta funcion solo crea 1 pokemon por equipo, 
    modificar en caso de querer tener más de un pokemon en el equipo
    */
    switch(opcion[0]) {
        case 1:
            return crearPokemon("Charizard", "Fuego", 30, 12, 10, 11);
        case 2:
            return crearPokemon("Blastoise", "Agua", 32, 11, 13, 10);
        case 3:
            return crearPokemon("Venusaur", "Planta", 31, 10, 12, 11);
        case 4:
            return crearPokemon("Pikachu", "Eléctrico", 25, 10, 8, 15);
        
        //Ingrese más casos si desean

        default:
            return crearPokemon("Charizard", "Fuego", 30, 12, 10, 11);
    }
}


// Función de selección de enemigo aleatorio
Pokemon * generarRivalAleatorio() {
    /*
    Esta funcion solo crea 1 pokemon por equipo, 
    modificar en caso de querer tener más de un pokemon en el equipo
    */
    srand(time(NULL));
    int enemigo = (rand() % 4) + 1;
    return obtenerEquipoPokemon(enemigo);
}


// Funciones basicas --------------------------------------------------------------------------------

// Función para mostrar el menú de selección
int seleccionarPokemon() {
    int opcion;
    printf("\n========== ELIGE TU POKÉMON ==========\n");
    printf("1. Charizard (Fuego) - Ataque: 12, Defensa: 10, Velocidad: 11\n");
    printf("2. Blastoise (Agua) - Ataque: 11, Defensa: 13, Velocidad: 10\n");
    printf("3. Venusaur (Planta) - Ataque: 10, Defensa: 12, Velocidad: 11\n");
    printf("4. Pikachu (Eléctrico) - Ataque: 10, Defensa: 8, Velocidad: 15\n");
    
    // Pueden agregar opciones si desean...

    printf("=====================================\n");
    printf("Opción (1-4): ");
    scanf("%d", &opcion);
    getchar(); // Consumir el salto de línea
    return opcion;
}

// Función para mostrar el estado de un pokémon
void mostrarPokemon(Pokemon *p) {
    printf("\n%s (%s)\n", p->nombre, p->tipo);
    printf("HP: [");
    int barra_llena = (p->hp * 20) / p->hp_max;
    for (int i = 0; i < 20; i++) {
        if (i < barra_llena) printf("=");
        else printf("-");
    }
    printf("] %d/%d\n", p->hp, p->hp_max);
}




// Función para mostrar el menú de acciones
int mostrarMenuAcciones(Pokemon *jugador, Pokemon *enemigo) {
    int accion;
    printf("\n--- Turno de %s ---\n", jugador->nombre);
    mostrarPokemon(jugador);
    mostrarPokemon(enemigo);
    printf("\nOpciones:\n");
    printf("1. Atacar\n");
    printf("2. Defensa\n");;
    printf("3. Ver estado\n");
    printf("4. Rendirse\n");
    printf("Elige (1-4): ");
    scanf("%d", &accion);
    getchar();
    return accion;
}


// --------------------------------------------------------------------------------------------------



// Función para calcular el daño
int calcularDano(Pokemon *atacante, Pokemon *defensor) {
    /*
    Cree su codigo acá
    */
}


void aplicarDano(Pokemon *defensor, int dano){
    /*
    Cree su codigo acá
    */
}



// Función para realizar el combate
int combate(Pokemon *jugador, Pokemon *enemigo) {   
    /*
    Inserte aqui su codigo para combatir
    */
}
