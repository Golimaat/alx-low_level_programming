<a src="https://alx-intranet.hbtn.io/projects/230" >0x13. C - More singly linked lists </a>

Description:

*  How to use linked lists

*  Start to look for the right source of information without too much help

<h3> More Info </h3>

<p> Please use this data structure for this project </p>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
