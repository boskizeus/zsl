<!DOCTYPE html>
<html lang="pl" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>Kwadrat</title>
  </head>
  <body>
    <h4>Prostokąt</h4>
    <form method="post">
      <input type="text" name="sideA" placeholder="Podaj długość boku a"><br><br>
      <input type="text" name="sideB" placeholder="Podaj długość boku b"><br><br>
      <input type="submit" value="Oblicz">
    </form>
    <?php
      if (!empty($_POST['sideA']) && !empty($_POST['sideB'])) {
        $sideA = $_POST['sideA'];
        $sideB = $_POST['sideB'];

        $area=$sideA * $sideB;
        $circuit=2*$sideA + 2*$sideB;
        echo <<< RESULT
          <hr>
          Pole kwadratu wynosi: $area cm<sup>2</sup><br>
          Obwód kwadratu wynosi: $circuit cm
RESULT;
      }else{
        echo '<hr>Wpisz długość bok a';
      }
     ?>
  </body>
</html>
