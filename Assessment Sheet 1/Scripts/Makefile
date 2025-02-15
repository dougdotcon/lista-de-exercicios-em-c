# Compilar todos os arquivos
all: nota_d nota_c nota_b nota_a

# Regras para compilar cada arquivo
nota_d: nota_d.c
	gcc nota_d.c -o nota_d

nota_c: nota_c.c
	gcc nota_c.c -o nota_c

nota_b: nota_b.c
	gcc nota_b.c -o nota_b

nota_a: nota_a.c
	gcc nota_a.c -o nota_a

# Limpeza dos arquivos binários gerados
clean:
	rm -f nota_d nota_c nota_b nota_a
