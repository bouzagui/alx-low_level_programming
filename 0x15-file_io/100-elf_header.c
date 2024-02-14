#include "main.h"

void check_elf(unsigned char *e_ident)
{
    int index = 0;

    while (index < 4)
    {
        if (e_ident[index] != 127 &&
            e_ident[index] != 'E' &&
            e_ident[index] != 'L' &&
            e_ident[index] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
        index++;
    }
}

void print_magic(unsigned char *e_ident)
{
    int index = 0;

    printf("  Magic:   ");

    while (index < EI_NIDENT)
    {
        printf("%02x", e_ident[index]);

        if (index == EI_NIDENT - 1)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
        index++;
    }
}

void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");

    if (e_ident[EI_CLASS] == ELFCLASSNONE)
    {
        printf("none\n");
    }
    else if (e_ident[EI_CLASS] == ELFCLASS32)
    {
        printf("ELF32\n");
    }
    else if (e_ident[EI_CLASS] == ELFCLASS64)
    {
        printf("ELF64\n");
    }
    else
    {
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");

    if (e_ident[EI_DATA] == ELFDATANONE)
    {
        printf("none\n");
    }
    else if (e_ident[EI_DATA] == ELFDATA2LSB)
    {
        printf("2's complement, little endian\n");
    }
    else if (e_ident[EI_DATA] == ELFDATA2MSB)
    {
        printf("2's complement, big endian\n");
    }
    else
    {
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

void print_version(unsigned char *e_ident)
{
    printf("  Version:                           %d", e_ident[EI_VERSION]);

    if (e_ident[EI_VERSION] == EV_CURRENT)
    {
        printf(" (current)\n");
    }
    else
    {
        printf("\n");
    }
}

void print_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");

    if (e_ident[EI_OSABI] == ELFOSABI_NONE)
    {
        printf("UNIX - System V\n");
    }
    else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
    {
        printf("UNIX - HP-UX\n");
    }
    else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
    {
        printf("UNIX - NetBSD\n");
    }
    else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
    {
        printf("UNIX - Linux\n");
    }
    else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
    {
        printf("UNIX - Solaris\n");
    }
    else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
    {
        printf("UNIX - IRIX\n");
    }
    else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
    {
        printf("UNIX - FreeBSD\n");
    }
    else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
    {
        printf("UNIX - TRU64\n");
    }
    else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
    {
        printf("ARM\n");
    }
    else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
    {
        printf("Standalone App\n");
    }
    else
    {
        printf("<unknown: %x>\n", e_ident[EI_OSABI]);
    }
}

void print_abi(unsigned char *e_ident)
{
    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

void print_type(unsigned int e_type, unsigned char *e_ident)
{
    if (e_ident[EI_DATA] == ELFDATA2MSB)
    {
        e_type >>= 8;
    }

    printf("  Type:                              ");

    if (e_type == ET_NONE)
    {
        printf("NONE (None)\n");
    }
    else if (e_type == ET_REL)
    {
        printf("REL (Relocatable file)\n");
    }
    else if (e_type == ET_EXEC)
    {
        printf("EXEC (Executable file)\n");
    }
    else if (e_type == ET_DYN)
    {
        printf("DYN (Shared object file)\n");
    }
    else if (e_type == ET_CORE)
    {
        printf("CORE (Core file)\n");
    }
    else
    {
        printf("<unknown: %x>\n", e_type);
    }
}

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
    printf("  Entry point address:               ");

    if (e_ident[EI_DATA] == ELFDATA2MSB)
    {
        e_entry = ((e_entry << 8) & 0xFF00FF00) |
                  ((e_entry >> 8) & 0xFF00FF);
        e_entry = (e_entry << 16) | (e_entry >> 16);
    }

    if (e_ident[EI_CLASS] == ELFCLASS32)
    {
        printf("%#x\n", (unsigned int)e_entry);
    }
    else
    {
        printf("%#lx\n", e_entry);
    }
}

void close_elf(int elf)
{
    if (close(elf) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
        exit(98);
    }
}

int main(int argc, char *argv[])
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
}
