#ifndef YOUR_HEADER_H
#define YOUR_HEADER_H

/* Define your struct */
typedef struct listint_t {
    int n;
    struct listint_t *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif /* YOUR_HEADER_H */
