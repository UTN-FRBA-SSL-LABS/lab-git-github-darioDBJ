#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}//hola mundo

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
<<<<<<< HEAD
=======
/*La función recibe dos variables y las multiplica entre si para devolver ese resultado como valor. Debe respetarse un orden específico en la multiplicación de las variables*/
>>>>>>> 83cb18e3c4d17bacf8dde717b3c4a3d4ccb5d5e3
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}