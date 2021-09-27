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
      <input type="text" name="sideB" placeholder="Podaj bok b"><br><br>
      <input type="submit" value="Oblicz">
    </form>
    <?php
      if (!empty($_POST['sideA']) && !empty($_POST['sideB'])) {
        $sideA=$_POST['sideA'];
        $sideB=$_POST['sideB'];
        $area=$sideA*$sideB;
        $circuit=2*$sideA+2*$sideB;
        echo <<< RESULT
          <hr>
          Pole prostokąta wynosi: $area cm<sup>2</sup><br>
          Obwód prostokąta wynosi: $circuit cm
RESULT;
      }else {
        echo "Wypełnij wszystkie pola!";
      }
     ?>
  </body>
</html>
