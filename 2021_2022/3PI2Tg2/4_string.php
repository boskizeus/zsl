<?php
  $text = <<< T
    ZSŁ - Zespół
    Szkół
    Łączności
T;

echo "$text<br>";
echo nl2br($text),'<hr>';

$name="janUSz";
// zamiana liter na małe
echo strtolower($name),"<br>"; //janusz
// zamiana na duże litery
echo strtoupper($name),"<br>"; //JANUSZ

$data="januSZ koWALski";
// zamiana pierwszą literę na dużą
echo ucfirst($data); //JanuSZ koWALski
// zamiana wszystkie pierwsze litery na duże
echo ucwords($data); //JanuSZ KoWALski

$lorem="Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

echo "<hr>$lorem<hr>";
// $col=wordwrap($lorem, 30, "text");
$col=wordwrap($lorem, 30, "<br>");
// $col=wordwrap($lorem, 30, "<hr>");
echo $col;

//czyszczenie zawartości bufora
ob_clean();

// usuwanie białych znaków
$name="Janusz";
$name1=" Janusz  ";

echo "Długość \$name: ".strlen($name)."<br>"; //6
echo "Długość \$name1: ".strlen($name1)."<br>"; //9

echo "Długość \$name1: ".strlen(ltrim($name1))."<br>"; //8
echo "Długość \$name1: ".strlen(rtrim($name1))."<br>"; //7
echo "Długość \$name1: ".strlen(trim($name1))."<br>"; //6

// przeszukiwanie ciągów znaków
echo strstr("janusz@gmail.com", "@"); //@gmail.com
echo strstr("janusz@gmail.com", "G"); //
echo stristr("janusz@gmail.com", "G"); //gmail.com

// substr
$name="Janusz";
echo substr($name, 2); //nusz
echo substr($name, 2,3); //nus
echo substr($name, -2); //sz
echo substr($name, -2,1); //s
echo substr(strstr("janusz@gmail.com", "@"),1); //gmail.com

// dokończyć str_replace
 ?>
