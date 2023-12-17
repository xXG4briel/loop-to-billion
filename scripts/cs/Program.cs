const int billion = 1000000000;

var sp = System.Diagnostics.Stopwatch.StartNew();

for (var i = 0; i < billion; i++)
{
}

var elapsedTime = sp.Elapsed;
Console.WriteLine($"{elapsedTime.TotalSeconds:F3} segundos");