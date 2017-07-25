struct class {
    char *label;
    int quantity;
    int average;
    StudentHeader *studentH;
    struct class* next;
};

typedef struct class Class;