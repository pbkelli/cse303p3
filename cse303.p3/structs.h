#ifndef STRUCTS_H
#define STRUCTS_H
#include "structs.c"
/*
 *
 * Define page/sector structures here as well as utility structures
 * such as directory entries.
 *
 * Sectors/Pages are 512 bytes
 * The filesystem is 4 megabytes in size.
 * You will have 8K pages total.
 *
 */
struct root_sector;
struct allocation_pages;
struct directory_pages;
struct folder_entry;


#endif
