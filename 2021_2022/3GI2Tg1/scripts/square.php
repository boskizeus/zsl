<!DOCTYPE html>
<html lang="pl" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>Kwadrat</title>
  </head>
  <body>
    <h3>Kwadrat</h3>
    <form method="get">
      <input type="text" name="sideA" placeholder="Podaj długość boku a"><br><br>
      <input type="submit" name="button" value="Oblicz">
    </form>
    <?php
      // if (isset($_GET['button']) && is_numeric($_GET['sideA'])) {
      if (isset($_GET['button'])) {
        if (!empty($_GET['sideA'])) {
          // echo $_GET['sideA'];
          $sideA=str_replace(',', '.', $_GET['sideA']);
          // echo $sideA;
          $area=$sideA**2;
          $circuit=4*$sideA;
          echo <<< RESULT
            <hr>
            Pole kwadratu wynosi: $area cm<sup>2</sup><br>
            Obwód kwadratu wynosi: $circuit cm
RESULT;
        }else{
          echo "Wypełnij pole!";
        }
      }
     ?>
  </body>
</html>
