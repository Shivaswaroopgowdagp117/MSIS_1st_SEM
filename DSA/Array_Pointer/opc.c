Array initialize_array(int size)
{  Array my_arr;
  my_arr.c_size = 0;
  my_arr.t_size = size>0 && size<MAX_SIZE ? size:MAX_SIZE;

return my_arr;
}
Array insert_data(Array,int)
{
  if(my_arr.c_size = my_arr_t_size) return my_arr;
  my_arr.array[my_arr.c_size++]=data;
  return my_arr;
}
int search(Array,int)
{
  int i;
  for(i=0;i<my_arr.c_size;i++) 
  {
    if(my_arr.array[i] == data) return FOUND;
  }
  return NOT_FOUND;
}
