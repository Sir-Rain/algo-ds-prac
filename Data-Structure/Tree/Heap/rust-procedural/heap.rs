pub type nodeDT = i32;

pub struct Heap {
    nodes: Vec<nodeDT>,
}

pub fn create_heap(initial_size: usize) -> Heap {
    return Heap {
        nodes: Vec::with_capacity(initial_size),
    };
}

fn get_parent(index: usize) -> usize {
    if index == 0 {
        return 0;
    } else {
        return (index - 1) / 2;
    }
}

fn get_left_chlid(index: usize) -> usize {
    return (index * 2) + 1;
}

pub fn insert(heap: &mut Heap, new_data: nodeDT) {
    heap.nodes.push(new_data);

    let mut current_position = heap.nodes.len() - 1;
    let mut parent_position = get_parent(current_position);

    while current_position > 0 && heap.nodes[current_position] < heap.nodes[parent_position] {
        heap.nodes.swap(current_position, parent_position);
        current_position = parent_position;
        parent_position = get_parent(current_position);
    }
}

pub fn delete_min(heap: &mut Heap) -> Option<nodeDT> {
    let len = heap.nodes.len();

    if len == 0 {
        return None;
    }

    let min_data = heap.nodes[0];

    if len == 1 {
        heap.nodes.pop();
        return Some(min_data);
    }

    heap.nodes.swap_remove(0);


    let mut parent_position = 0;

    loop {
        let left_position = get_left_chlid(parent_position);

        if left_position >= heap.nodes.len() {
            break;
        }

        let right_position = left_position + 1;

        let mut selected_child = left_position;
        if right_position < heap.nodes.len() && heap.nodes[right_position] < heap.nodes[left_position] {
            selected_child = right_position;
        }

        if heap.nodes[parent_position] > heap.nodes[selected_child] {
            heap.nodes.swap(parent_position, selected_child);
            parent_position = selected_child;
        }else {
            break;
        }
    }

    return Some(min_data);
}

pub fn print_nodes(heap: &Heap) {
    for data in &heap.nodes {
        print!("{} ", data);
    }
    println!();
}
