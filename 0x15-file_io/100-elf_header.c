#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
/**
 * check_elf - the func Checks if a file is an ELF file.
 * @e_ident: the pointer point to an array containing the ELF magic numbers.
 *
 * Description: the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int int_ind;
	unsigned char elf_magic[4] = {127, 'E', 'L', 'F'};

	for (int_ind = 0; int_ind < 4; int_ind++)
	{
		if (e_ident[int_ind] != elf_magic[int_ind])
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int intex;
	char chseparator = ' ';

	printf(" Magic: ");

	for (intex = 0; intex < EI_NIDENT; intex++)
	{
		printf("%02x%c", e_ident[intex], chseparator);
	}

	printf("\n");
}
/**
 * print_class - the func Prints the class of an ELF header.
 * @e_ident: A pointer point to an array
 *  containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
	char *chcls_str;

	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			chcls_str = "none";
			break;
		case ELFCLASS32:
			chcls_str = "ELF32";
			break;
		case ELFCLASS64:
			chcls_str = "ELF64";
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
			return;
	}

	printf("%s\n", chcls_str);
}
/**
 * print_data -the func
 * Prints the data of an ELF header.
 * @e_ident: A pointer point to an array
 * containing the ELF class.
 */
void print_data(unsigned char *e_ident)
{
	char *chdata_str;

	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			chdata_str = "none";
			break;
		case ELFDATA2LSB:
			chdata_str = "2's complement, little endian";
			break;
		case ELFDATA2MSB:
			chdata_str = "2's complement, big endian";
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
			return;
	}

	printf("%s\n", chdata_str);
}

/**
 * print_version - the method Prints the
 * version of an ELF header.
 * @e_ident: A pointer point to an array
 * containing the ELF version.
 */
void print_version(unsigned char *e_ident)
{
	 printf(" Version: %d",
			  e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
/**
 * print_osabi - the method Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer point to an array
 * containing the ELF version.
 */
void print_osabi(unsigned char *e_ident)
{
	char *osabi_chr;

	printf(" OS/ABI: ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			osabi_chr = "UNIX - System V";
			break;
		case ELFOSABI_HPUX:
			osabi_chr = "UNIX - HP-UX";
			break;
		case ELFOSABI_NETBSD:
			osabi_chr = "UNIX - NetBSD";
			break;
		case ELFOSABI_LINUX:
			osabi_chr = "UNIX - Linux";
			break;
		case ELFOSABI_SOLARIS:
			osabi_chr = "UNIX - Solaris";
			break;
		case ELFOSABI_IRIX:
			osabi_chr = "UNIX - IRIX";
			break;
		case ELFOSABI_FREEBSD:
			osabi_chr = "UNIX - FreeBSD";
			break;
		case ELFOSABI_TRU64:
			osabi_chr = "UNIX - TRU64";
			break;
		case ELFOSABI_ARM:
			osabi_chr = "ARM";
			break;
		case ELFOSABI_STANDALONE:
			osabi_chr = "Standalone App";
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
			return;
	}

	printf("%s\n", osabi_chr);
}
/**
 * print_abi - the func Prints the ABI version of an ELF header.
 * @e_ident: A pointer point to an array containing
 * the ELF ABI version.
 */
void print_abi(unsigned char *e_ident)
{
	int intabi_version = e_ident[EI_ABIVERSION];
	char *abi_str;

	printf(" ABI Version: %d", intabi_version);

	if (intabi_version == 0)
		abi_str = " (original)";
	else
		abi_str = "";

	printf("%s\n", abi_str);
}
/**
 * print_type - the function Prints the type of an ELF header.
 * @e_type: a ELF type.
 * @e_ident: A pointer point to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}
/**
 * print_entry - the func Prints the entry point
 * of an ELF header.
 * @e_entry: a address of the ELF entry point.
 * @e_ident: A pointer point to an array
 * containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	char *format_ch;

	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		format_ch = "%#x\n";
	else
		format_ch = "%#lx\n";

	printf(format_ch, e_entry);
}
/**
 * close_elf - the func Closes an ELF file.
 * @elf: a file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed -
 * exit code is 98.
 */
void close_elf(int elf)
{
	int result = close(elf);

	if (result == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
}
}
/**
 * main - the main Displays the information contained in the
 * ELF header at a start of an ELF file.
 * @argc: The number of arguments supplied to the fucnt.
 * @argv: An array of pointers point to the arguments.
 *
 * Return: return 0 on success.
 *
 * Description: If the file is not an ELF File or
 * the function fails - exit code is 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;
	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	close_elf(o);
	return (0);
}
