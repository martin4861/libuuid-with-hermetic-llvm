#include <uuid/uuid.h>

int main() {
    uuid_t u;
    uuid_generate(u);

    return 0;
}