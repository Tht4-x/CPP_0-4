# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dancel <dancel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 18:33:29 by dancel            #+#    #+#              #
#    Updated: 2025/03/31 19:59:18 by dancel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variables de Compilation
# ============================
ACCOUNT          = account
CC               = c++
CFLAGS           = -Wall -Werror -Wextra -g3 -std=c++98

# Fichiers source
# ============================
SRC_FILES   = sources/tests.cpp sources/account.cpp
OBJ_FILES   = $(SRC_FILES:sources/%.c=objects/%.o)
INCLUDES	= -I ./includes

# Cible principale
# ============================
all: create_objects_dirs $(ACCOUNT)

$(ACCOUNT): $(OBJ_FILES)
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
	@rm -f account

# Rebuild
# ============================
re: fclean all

# Cibles "fantômes"
# ============================
.PHONY: all clean fclean re bonus
