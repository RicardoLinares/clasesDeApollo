#define TAM_NOMBRE 21

typedef struct
{
    //campus/atributos
    int id;
    int legajo;
    char nombre[TAM_NOMBRE];
    float altura;
    int nota;
    int estado;
}sStudent;


static int generateNextId(void);
void newLegajo(sStudent*, char[]);
void newName(char[], char[], int);
float newAltura(char[], int);
int newNote(char[], int);

void ordernarAlumnos(sStudent[], int);

void cargarListaDeAlumnos(sStudent[], int);
void mostrarListaDeAlumnos(sStudent[], int);

void mostrarAlumno(sStudent);
void cargarAlumno(sStudent*);

void initializeListStudents(sStudent[], int);
int buscarLibre(sStudent[], int);

int buscarAlumnoPorLegajo(sStudent[], int);
int modificarAlumno(sStudent);

void showMenu(void);
