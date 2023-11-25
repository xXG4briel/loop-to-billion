use std::time::Instant;

fn main() {
    let billion = 1_000_000_000;
    let start_time = Instant::now();

    for _ in 0..billion {
    }

    let end_time = Instant::now();
    let elapsed_time = end_time.duration_since(start_time).as_secs_f64();
    println!("{:.3} segundos", elapsed_time);
}
