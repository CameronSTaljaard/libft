# Libft - @WeThinkCode_
My implementation of some of the Standard C Library functions including some additional ones.

### What is libft?
Libft is an individual project at WeThinkCode_.
In this project, we are tasked with reproducing a few, basic C functions, as well as a few other functions that
WeThinkCode_ believes will be helpful in future.
This point of this project was not to reinvent the wheel, but rather to help students gain a basic understanding
of how the functions you may otherwise take for granted, work.

### What's in it?

This project is split into 4 sections:

1.  **Core Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later.

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		| ft_iswhitespace 
bzero		| ft_memdel		| ft_lstdelone	| ft_wordcount 
memcpy		| ft_strnew		| ft_lstdel		| ft_sort_array    
memccpy		| ft_strdel		| ft_lstadd		| ft_strswap    
memmove		| ft_strclr		| ft_lstiter	| ft_insert_node    
memchr		| ft_striter	| ft_lstmap		| ft_free_list
memcmp		| ft_striteri	|				| ft_realloc
strlen		| ft_strmap		|				| ft_isupper
strdup		| ft_strmapi	|				| ft_islower
strcpy		| ft_strequ		|				| ft_copyuntil
strncpy		| ft_strnequ	|			| ft_intlen
strcat		| ft_strsub		| | ft_intlen	| ft_frequency
strlcat		| ft_strjoin	| | ft_strendswith	| ft_putendl_col_fd
strchr		| ft_strtrim	| | ft_pathjoin	| ft_putchar_col_fd
strrchr		| ft_strsplit	| | ft_lstaddback	| ft_putstr_col_fd
strstr		| ft_itoa		| | get_next_line	| ft_putnbr_col_fd
strnstr		| ft_putchar	| | ft_putnstr	| ft_int_overflows
strcmp		| ft_putstr		| | ft_strreplace	| ft_copy_array
strncmp		| ft_putendl	| | ft_isemptystr	| ft_freearray
atoi		| ft_putnbr		| | ft_strsplitall
isalpha		| ft_putchar_fd	| | ft_countwordsall
isdigit		| ft_putstr_fd	| | ft_freestrarr
isalnum		| ft_putendl_fd	| | ft_strjoincl
isascii		| ft_putnbr_fd	| | ft_strjoinchcl
isprint		|| | ft_count2darray
toupper		| | | ft_strarrmax
tolower		| | | ft_get_parent_path


Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Fourty Two
- The project instructions require that we put all the source files in the root directory but for the sake of this Github repo, I separate them into sub folders.

My code is not the best, but it passed all the 42 tests successfully.

### How do I use the library?

I added an example file called **example.c**, it's using the function **ft_putstr** to print "DON'T PANIC" to the screen. 

If you try to compile it with gcc using `gcc example.c` you will get an *undefined symbol* error for ft_putstr. 

You have to tell the file where your library resides and which library it is using:

`gcc example.c -L. -lft`

-L takes the path to your library. `.` in this case<br>
-l takes the name of your library. This is the set of characters that come after `lib` in your library name.

That's it. Now run it using `./a.out`

That's it! If you're having some problems, just [send me a tweet][8]. If you think your problem is due to my code or this README, [create a new issue][9]. I'll definitely check it out.