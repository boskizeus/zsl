<!DOCTYPE html>
<html lang="pl" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>Dołączenie pliku 3_1.php</title>
  </head>
  <body>
    <h3>Początek pliku</h3>
      <?php
        include '3_1.php';
        include_once '3_1.php';
        require '3_1.php';
        require_once '3_1.php';
       ?>
    <h3>Koniec pliku</h3>
  </body>
</html>
