<?php
  echo 'ZSŁ<br>';
  echo 'ZSŁ';

  $name='Janusz';
  echo '<br>Imię: $name'; //Imię: $name
  echo "<br>Imię: $name<br>"; //Imię: Janusz

  $x="Tomasz";
  $y="Nowak";

// konkatenacja .
  echo $x.$y."<hr>";

// typy danych
// całkowity
  $calkowita=10;
  $bin=0b1010; //10
  $oct=011; //9
  $hex=0x11; //17
  echo $hex;

// zmiennoprzecinkowy
  $x=100.7;

// logiczny
  $prawda=true;
  $fałsz=false; //można dodawać polskie znaki w nazwach zmiennych ;)

  echo "<br>".gettype($prawda); //boolean
  echo "<br>".gettype($hex); //integer
  echo "<br>".gettype($x); //double

// składnia heredoc
  $name="Krystyna";
  echo <<< ETYKIETA
    <hr>Imię: $name<br>
    ZSŁ<br>
ETYKIETA;

  $text = <<< ETYKIETA
    <hr>Anna Nowak<br>
    ZSŁ<br>
ETYKIETA;

  echo $text;

// składnia nowdoc
  $name="Krystyna";
  echo <<< 'ETYKIETA'
    <hr>Imię: $name<br>
    ZSŁ<br>
ETYKIETA;

  $name="Jagoda";
  echo "Imię: $name, nazwisko: Szyper <hr>";
  echo "Imię: \$name, nazwisko: Szyper <hr>";
 ?>
