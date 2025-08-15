mod heap;

use heap::*;

fn main() {
    let mut heap = create_heap(10);

    insert(&mut heap, 5);
    insert(&mut heap, 3);
    insert(&mut heap, 11);
    insert(&mut heap, 24);
    insert(&mut heap, 59);
    insert(&mut heap, 1);

    print_nodes(&heap);

    delete_min(&mut heap);
    delete_min(&mut heap);
    delete_min(&mut heap);
    delete_min(&mut heap);

    print_nodes(&heap);
}
