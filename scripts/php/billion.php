<?php
$billion = 1000000000;

$start_time = microtime(true);

for ($i = 0; $i < $billion; $i++) {
}

$end_time = microtime(true);

$elapsed_time = $end_time - $start_time;
printf("%.3f segundos\n", $elapsed_time);
?>
