<?php
  $text = <<< L
    ZSŁ - Zespół
    Szkół
    Łączności<br>
L;
echo $text;
echo nl2br($text);

$name='jaNuSZ';
// zamiana wszystkich liter na małe
$name=strtolower($name);
echo $name; //janusz

// zamiana wszystkich liter na duże
echo strtoupper($name); //JANUSZ

$nameSurname = "januSZ koWALski";
//zamiana pierwszej litery na dużą
echo ucfirst($nameSurname); //JanuSZ koWALski

//zamiana każdej pierrwszej litery w słowie na dużą
echo ucwords($nameSurname); //JanuSZ KoWALski

// zmiana wszystkich liter na małe a pierwszej na dużą
$name="jAnuSz";
echo "<br>$name"; //jAnuSz
echo ucfirst(strtolower($name)); //Janusz

$lorem="Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.<hr>";

echo $lorem;
$col=wordwrap($lorem, 30, "<br>");
$col=wordwrap($lorem, 30, "TEXT");
$col=wordwrap($lorem, 30, "<hr>");
echo $col;

// wyczyszczenie bufora
ob_clean();

// usuwanie białych znaków
$name="Janusz";
$name1="  Janusz ";
echo "Długość \$name: ".strlen($name)."<br>"; //6
echo "Długość \$name1: ".strlen($name1)."<br>"; //9
echo strlen(ltrim($name1)); //7
echo strlen(rtrim($name1)); //8
echo strlen(trim($name1))."<hr>"; //6

// przeszukiwanie ciągów znaków
$mail="janusz@gmail.com";
echo strstr($mail, "@"); //@gmail.com
echo strstr($mail, "G"); //nic nie wyświetli
echo stristr($mail, "G")."<br>"; //gmail.com

// substr
echo substr($mail, 2); //nusz@gmail.com
echo substr($mail, 6); //@gmail.com
echo substr($mail, -3); //com
echo substr($mail, -2, 1); //o

// zadanie
$personality="Janusz Kowalski";
/*
  do zmiennej name przypisać imię, do zmiennej surname    przypisać nazwisko wykorzystując funkcję substr
*/









 ?>
