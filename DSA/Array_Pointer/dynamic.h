#define ARRAY_FULL 0
#define SUCCES
#define FOUND 1
#define NOT_FOUND 0

struct _array_dynamic_
{
int *arr;
int c_size , t_size;
};
typedef struct _array_dynamic_ Array_dyn;

struct _max_min_
{
int max, min;
};
typedef struct _max_min_Maxmini;
Array_dyn initialise_array_dyn(int);
int insert_array_data(Array_dyn*, int data);
int search(Array_dyn*, int element);
int sort(Array_dyn*);
int is_palindrome(Array_dyn*);
int deallocate(Array_dyn*);
int intersection(Array_dyn *,Array_dyn*);
int merge(Array_dyn*src,Array_dyn*tgt);
int max_min(Array_dyn*,Mammin);
#endif
