Functions
size_t print_list(const list_t *h)
This function prints all the elements of a list_t list. It takes a pointer to the head of the list as input and returns the number of nodes in the list.

Prototype: size_t print_list(const list_t *h)
Returns: The number of nodes in the list.
Format: The function prints the elements of the list in the following format:
If str is NULL, it prints [0] (nil).
For each non-NULL element, it prints [<length>] <str>, where <length> is the length of the string and <str> is the string itself.
size_t list_len(const list_t *h)
This function returns the number of elements in a list_t list. It takes a pointer to the head of the list as input and returns the size of the list.

Prototype: size_t list_len(const list_t *h)
Returns: The number of elements in the list.
list_t *add_node(list_t **head, const char *str)
This function adds a new node at the beginning of a list_t list. It takes a double pointer to the head of the list and a string str as input. It duplicates the string and creates a new node containing the duplicated string. The new node becomes the new head of the list.

Prototype: list_t *add_node(list_t **head, const char *str)
Returns: The address of the new element (i.e., the new head of the list), or NULL if it fails to allocate memory for the new node.
Note: The input string str will be duplicated using strdup().
list_t *add_node_end(list_t **head, const char *str)
This function adds a new node at the end of a list_t list. It takes a double pointer to the head of the list and a string str as input. It duplicates the string and creates a new node containing the duplicated string. The new node is appended to the end of the list.

Prototype: list_t *add_node_end(list_t **head, const char *str)
Returns: The address of the new element, or NULL if it fails to allocate memory for the new node.
Note: The input string str will be duplicated using strdup().
void free_list(list_t *head)
This function frees the memory allocated for a list_t list. It takes a pointer to the head of the list as input and recursively frees each node in the list.

Prototype: void free_list(list_t *head)
