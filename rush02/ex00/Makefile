# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salimon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 20:04:12 by salimon           #+#    #+#              #
#    Updated: 2020/09/27 23:13:05 by salimon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#notre makefile permet d'organiser la compilation selon un ensemble de regles
#on execute le makefile avec la commande make. Le makefile executera la premiere regle de compilation qu'il lira, ici "all"

#our makefile organizes the compilation according to a set of rules
#we use the command make to execute the makefile. The makefile will read and operate the first rule it enconters, "all" in that case

#on reconnait les regles quand elles sont suivies d'un ":"                           
#rules names are followed by ":"

NAME = rush-02
SRCS = main.c dict_parsing.c othersfiles.c
HEADERS = headers.h                 #ici on attribue nos fichiers a minipuler aux varibles srcs et headers, ce sont des substituts de tous les noms de fichiers en quelque sorte             #we attribute the files we want to manimulate to the srcs and headers variables. they are substitute in a sort of way

all:                                #notre commande "all" compile tous nos fichiers appeles avc SRCS et HEADERS pour creer l'executable "rush-2"                                            #our first command "all" compiles our .c files and our headers and prototype files. We created our executable "rush-2"
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) $(HEADERS)

clean:
	rm *.o                  #on supprime nos .o     #we delete our .o

fclean: clean          #la commande fclean depend de clean      #the fclean command depends of the clean command 
	rm $(NAME)         #on supprime l'executable                #we delete the executable

re: fclean all
