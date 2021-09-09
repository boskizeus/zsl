<?php
// wersja php
echo PHP_VERSION; //8.0.10

$pow=2**10;
echo $pow; //1042

$x=30;
$y=300;

echo $x<=>$y;

/*
  komentarz
  w wielu
  liniach
*/

// porównanie oraz identyczność
$x=1;
$y=1.0;

  if ($x==$y) {
    echo "Równe";
  }else{
    echo "Różne";
  }

$x=1;
$y=1.0;

  if ($x===$y) {
    echo "Równe";
  }else{
    echo "Różne";
  }

  echo gettype($x);
  echo gettype($y);

 ?>
