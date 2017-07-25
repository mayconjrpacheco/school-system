struct data {
    char *name;
    int grades;
    int failures;
};

typedef struct data Data;

struct student {
    Data x;
    struct student *next;
};

typedef struct student Student;