struct address {
  int aptnum;
};

struct girl {
  int age;
  address address;
};

struct boy {
  girl girlfriend[];
};
