<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>Kwadrat</title>
  </head>
  <body>
    <h3>Kwadrat</h3>
    <form method="post">
      <input type="text" name="sideA" placeholder="Podaj bok a"><br><br>
      <input type="submit" value="Oblicz">
    </form>
    <?php
      if (!empty($_POST['sideA'])) {
        $sideA=$_POST['sideA'];
        $area=pow($sideA, 2);
        $circuit=4*$sideA;
        echo <<< RESULT
          <hr>
          Pole kwadratu wynosi: $area cm<sup>2</sup><br>
          Obwód kwadratu wynosi: $circuit cm
RESULT;
      }else {
        echo "Wypełnij wszystkie pola!";
      }
     ?>
  </body>
</html>
