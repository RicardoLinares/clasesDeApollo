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
void newName(sStudent*, char[]);
void newAltura(sStudent*, char[]);
void newNote(sStudent*, char[]);

void ordernarAlumnos(sStudent[], int);

void cargarListaDeAlumnos(sStudent[], int);
void mostrarListaDeAlumnos(sStudent[], int);

void mostrarAlumno(sStudent);
void cargarAlumno(sStudent*);

void initializeListStudents(sStudent[], int);
int buscarLibre(sStudent[], int);

void showMenu(void);
