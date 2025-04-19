# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dancel <dancel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 18:33:29 by dancel            #+#    #+#              #
#    Updated: 2025/03/13 13:47:08 by dancel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variables de Compilation
# ============================
MEGAPHONE        = megaphone
CC               = c++
CFLAGS           = -Wall -Werror -Wextra -g3 -std=c++98

# Fichiers source
# ============================
SRC_FILES   = sources/main.cpp
OBJ_FILES   = $(SRC_FILES:sources/%.c=objects/%.o)

# Cible principale
# ============================
all: create_objects_dirs $(MEGAPHONE)

$(MEGAPHONE): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@

create_objects_dirs: objects

objects:
	mkdir -p objects

objects/%.o: sources/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Nettoyage des fichiers
# ============================
clean:
	@rm -rf objects

fclean: clean
	@rm -f megaphone

# Rebuild
# ============================
re: fclean all

# Cibles "fantômes"
# ============================
.PHONY: all clean fclean re bonus
