let billion = 1000000000;
let start_time = Date.now();

for (let i = 0; i < billion; i++) {
}

let end_time = Date.now();
let elapsed_time = (end_time - start_time) / 1000;
console.log(`${elapsed_time.toFixed(3)} segundos`);
