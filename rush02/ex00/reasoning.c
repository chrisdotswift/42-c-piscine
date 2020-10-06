/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reasoning.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 21:32:33 by salimon           #+#    #+#             */
/*   Updated: 2020/09/27 23:21:54 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
/!\ did not have time to translate everything

THE SUBJECT

Faire un makefile

Executable : rush-02

Code src compilé avec;
Make fclean 
Make

If ac == 2 : convertir int 
If ac == 3: av[1] = dico à utiliser, av[2] = val a convertir


Cas error;
-If param nb not entier
- if valeur non convertissable dans dico
Afficher Error \n


Parse dico rsrc
Dico :
Nb | 0 à n spaces | : | 0 à n spaces | printable | \n
Trimmer espaces en début et fin de chaine
On utilise seulement valeurs clés initialement donnés dans dico
Dict error\n;


Print conversion
Malloc et free. (Voir heap et malloc 3)
Proteger malloc

BONUS
- clés valeurs custom
- Gerer syntaxe (, et -)
- Read
- Dico bonus en francais







_________________________________________________________________________
WHAT WE NEED TO LEARN 


FILE DESCRIPTOR
C'est quoi?
https://forums.commentcamarche.net/forum/affich-32990827-definition-d-un-file-descriptor

We need to find a site or video that explains clearly what is a file descriptor.

Why we need to understand the file descriptor: We want to READ the dictionary file.


_
FUNCTIONS USING THE FILE DESCRIPTOR

int Open
Ouvre un fichier c
Path = fichier à ouvrir
Flags = mode d’ouveture (lecture simple ou écriture ou les 2)
Perm = permissions

Open return un int qui correspond au file descriptor soit -1 en cas d’erreur


Flags:
O_RDONLY
O_WRONLY
O_RDWR

Flags qui modifient le comportement d’open;
O_CREAT créer fichier si celui ci nexiste pas
O_TRUNC écrire depuis premier octet si -f existe
O_APPEND ‘’      ''   dernier    ‘’          ‘’
Les flags peuvent être additionnes avec un ou binaire

Int close (int fd);
Fd = file description a fermer
Return 0 ou -1 en car d’erreur


Int write(int fd,, char *buf, int count);
Fd = file descriptor
Buf = buffer source
Count = nb d’octets a écrire 
Return nb doctes a écrire ou -1 en cas d’erreur 


Read (int fd, char *buf, int count)
Fd = fd depuis lequel lire
Buf = buffer de destination
count = nb d’octets a lire



We need to know how to use:
-malloc
-argmuments



____________________________________________________________________
OUR PLAN

We manage error cases (see subject part)

concerning the arguments, 2 differents cases:
- if argc == 2, we only need to convert the argv[1] nb parameter
- if argc == 3, we have to read the argv[1] dictionnary parameter and find the indexes to convert our argv[2] number


OPERATING WITH DE DICTIONARY PARAMETER (a file)
We READ the dictionary file (see file descriptor notes)
We "Parse" the dictionnary
We compartimentalize the dictionnary with the \n separator 
we split the obtained lines in 2 parts separatated with the ":"
we obtained the numbers block and the conversion value block
in block numbers, we manage the spaces before and afrter the number like:  while spaces skip++ or while != number skip++ and while != ':' skip++
we attribute an index to each line 


OPERATING WITH THE NB PARAMETER
we need a strlen of the argv nb's string
the len will determine in what range is the number (a 4 len number will be in the hundreds, a 10 len number will be in the millions etc...)
we attritube a getindex value to find the combination of lines we need in the dictionary in order to convert our number 

ex;
502

strlen (nb) => 3
the number is in the hundreds range

If str length = 4 => thousands 
If str length = 7 => millions
Etc…
 
/|\ WARNING particular cases: 
_digits
-0 to 19


Maybe we can try to convert our str nb in an int tab
so we can do operations

*/
