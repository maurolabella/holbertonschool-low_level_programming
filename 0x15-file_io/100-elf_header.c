#include "main.h"

/**
 * print_0S_ABI - print os abi
 * @value: receives value
 * Return: int
 */
int print_0S_ABI(uint8_t value)
{
	switch (value)
	{
	case 0x00:
		printf("OS/ABI:\t\t\t\t   UNIX - System V\n");
		break;
	case 0x01:
		printf("OS/ABI:\t\t\t\t   HP-UX\n");
		break;
	case 0x02:
		printf("OS/ABI:\t\t\t\t   UNIX - NetBSD\n");
		break;
	case 0x03:
		printf("OS/ABI:\t\t\t\t   Linux\n");
		break;
	case 0x04:
		printf("OS/ABI:\t\t\t\t   HP-UX\n");
		break;
	case 0x05:
		printf("OS/ABI:\t\t\t\t   GNU Hurd\n");
		break;
	case 0x06:
		printf("OS/ABI:\t\t\t\t   UNIX - Solaris\n");
		break;
	case 0x07:
		printf("OS/ABI:\t\t\t\t   AIX\n");
		break;
	case 0x08:
		printf("OS/ABI:\t\t\t\t   IRIX\n");
		break;
	case 0x09:
		printf("OS/ABI:\t\t\t\t   FreeBSD\n");
		break;
	case 0x0A:
		printf("OS/ABI:\t\t\t\t   TRU64\n");
		break;
	default:
		printf("OS/ABI:\t\t\t\t   <unknown %d>\n", value);
		break;
	}
	return (0);
}

/**
 * print_elf_type- print elf type
 * @value: receives value
 * Return: int
 */
int print_elf_type(uint16_t value)
{
	char *select_from[5];

	select_from[0] = "NONE (non file)";
	select_from[1] = "REL (relocatable file";
	select_from[2] = "EXEC (Executable file)";
	select_from[3] = "DYN (Shared object file)";
	select_from[4] = "CORE (core file)";
	printf("Type:                              %s\n", select_from[value]);
	return (0);
}

/**
 * print_class - prints class
 * @value: received
 * Return: int
 */
int print_class(uint8_t value)
{
	printf("Class:");
	if (value == 1)
		printf("%*s", 35, "ELF32\n");
	else
		printf("%*s", 35, "ELF64\n");
	return (0);
}

/**
 * print_data - print data
 * @value: receives selector
 * Return int
 */
int print_data(uint8_t value)
{
	printf("Data:");
	if (value == 1)
	{
		printf("%*s", 60, "2's complement, little endian\n");
	}
	else
		printf("%*s", 60, "2's complement, big endian\n");
	return (0);
}

/**
 * main - main functions prints header
 * Return: int
 */
int main(void)
{
	Elf64Hdr header;
	int i = 0;
	char *s = "trial";
	FILE *file = fopen(s, "rb");

	if (file)
	{
		/**read the header*/
		fread(&header, 1, sizeof(header), file);
		/** check so its really an elf file*/
		if (header.e_ident[0] == 0x7f &&
				header.e_ident[1] == 'E' &&
				header.e_ident[2] == 'L' &&
				header.e_ident[3] == 'F')
		{
			/** print the header*/
			printf("ELF Header:\n");
			printf("Magic:\t");
			for (i = 0; i < 16; i++)
			{
				printf(" %02x", header.e_ident[i]);
			}
			printf("\n");
			print_class(header.e_ident[4]);
			print_data(header.e_ident[5]);
			printf("Version:                           1 (current)\n");
			print_0S_ABI(header.e_ident[7]);
			printf("ABI Version:                       %d\n", header.e_ident[8]);
			print_elf_type(header.e_type);
			printf("Entry point address:               ");
			printf("0x%" PRIx64 "\n", header.e_entry);
		}
		/** finally close the file*/
		fclose(file);
		return (0);
	}
	return (-1);
}
