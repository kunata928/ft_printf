cmake_minimum_required(VERSION 3.15)
project(ft_printf)

set(CMAKE_C_STANDARD 99)

include_directories(libft/includes)

set(SOURCES src/ft_printf.c src/manage_csper.c src/manage_p.c src/parser.c
		src/manage_d.c src/manage_u.c src/utils.c main_test.c
		src/manage_buffer.c src/manage_o.c src/manage_x.c src/ft_printf.c src/float.c)

set (HEADERS include/ft_printf.h)

add_executable(fr_printf ${SOURCES} ${HEADERS})

add_subdirectory(libft)

target_link_libraries(ft_printf libft)