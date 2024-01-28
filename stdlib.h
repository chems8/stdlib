long unsigned int strlen(const char *str);
const int strcmp(const char *str0, const char *str1);
char *strdup(const char *str);
const int *strcontains(const char *str0, const char *str1);
char **strsplit(char *str, char *spliter);
char *read_io();
char *read_file(const char *restrict file_name, const char *restrict mode);
char *strconcatenate(const char *str0, const char *str1);
const int shift_mask_left(const int mask, const int i);
const int and_operation(const int number, const int mask_shifted);
const int shift_result_right(const int number, const int i);
void *convert_integer_to_binary(int *array, int mask, const int number);
int convert_hexa_to_int(char hexa);
void convert_hexa_to_binary(int *array, int mask, char hexa);
long convert_char_to_int(char c);
char convert_int_to_char(long n);
int convert_binary_to_integer(int *array, int architecture);
void print(const char *str, const char *type);
char *get_data_by_key(char *buffer, char *key);
