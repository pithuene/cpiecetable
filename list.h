#ifndef LIST_H_
#define LIST_H_

struct list;
typedef struct list * List;

struct list_item {
    struct list_item * next;
    void * value;
};
typedef struct list_item * ListItem;

List list_create(void);
void list_free(List l);
ListItem list_get_first(List l);
ListItem list_get_last(List l);
int list_length(List l);
void list_append(List l, void * value);
ListItem list_get_item(List l, int i);
ListItem list_insert(List l, int idx, void * value);

#endif
