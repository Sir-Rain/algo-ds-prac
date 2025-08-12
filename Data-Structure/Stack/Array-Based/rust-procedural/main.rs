mod array_stack;

use array_stack::*;

fn main() {
    let mut array_stack = create_stack(10);

    push(&mut array_stack, 5);
    push(&mut array_stack, 3);
    push(&mut array_stack, 4);
    push(&mut array_stack, 8);
    push(&mut array_stack, 10);

    let data1 = top(&array_stack).unwrap();

    println!("{data1}");

    pop(&mut array_stack);

    let data2 = pop(&mut array_stack).unwrap();

    println!("{data2}");

    println!("{}", get_stack_size(&array_stack));

    println!("{}", is_empty(&array_stack));
}
