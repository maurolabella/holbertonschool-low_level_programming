#ifndef FILEH
#define FILEH
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct elf64Hdr
{
	uint8_t e_ident[16];	/* Magic number and other info */
	uint16_t e_type;			/* Object file type */
	uint16_t e_machine;		/* Architecture */
	uint32_t e_version;		/* Object file version */
	uint64_t e_entry;			/* Entry point virtual address */
	uint64_t e_phoff;			/* Program header table file offset */
	uint64_t e_shoff;			/* Section header table file offset */
	uint32_t e_flags;			/* Processor-specific flags */
	uint16_t e_ehsize;		/* ELF header size in bytes */
	uint16_t e_phentsize; /* Program header table entry size */
	uint16_t e_phnum;			/* Program header table entry count */
	uint16_t e_shentsize; /* Section header table entry size */
	uint16_t e_shnum;			/* Section header table entry count */
	uint16_t e_shstrndx;	/* Section header string table index */
} Elf64Hdr;

int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int cp_file(int argc, char *argv[]);
#endif
