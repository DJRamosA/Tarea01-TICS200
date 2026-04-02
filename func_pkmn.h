
// Estructura para un pokémon
typedef struct {
    char nombre[50];
    char tipo[20];
    int hp;
    int hp_max;
    int ataque;
    int defensa;
    int velocidad;
} Pokemon;


// Funciones para manejo de memoria
Pokemon * crearPokemon(char *nombre, char *tipo, int hp, int ataque, int defensa, int velocidad);
void liberarEquipoPokemon(Pokemon *p);
Pokemon * obtenerEquipoPokemon(int opcion[]);
Pokemon * generarEnemigoAleatorio();


// Funciones de display
int seleccionarPokemon();
void mostrarPokemon(Pokemon *p);
int mostrarMenuAcciones(Pokemon *jugador, Pokemon *enemigo);


// Combate
int calcularDano(Pokemon *atacante, Pokemon *defensor);
void aplicarDano(Pokemon *defensor, int dano);
int combate(Pokemon *jugador, Pokemon *enemigo);
