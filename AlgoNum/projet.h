#ifndef __PROJET__
#define PROJET


typedef struct CSparse_t CSparse;

/**
 * @pre: fichier_input != NULL 
 * @post: matrice du fichier creee au format column compressed
 * @return : la matrice nouvellement creee
 */
CSparse* creer_matrice(char* fichier_input);

/**
 * @pre: matrice initialisee (!= NULL)
 * @post: l'element a l'emplacement (colonne, ligne) de la matrice est retourne
 * @return: voir post
 */
int acceder_element(CSparse* matrice, int colonne, int ligne);



#endif