<!DOCTYPE html>
<html lang="pl" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title></title>
  </head>
  <body>
    <h3>Dane użytkownika</h3>
    <form>
      <input type="text" name="name" placeholder="Podaj imię"><br><br>
      <input type="text" name="surname" placeholder="Podaj nazwisko"><br><br>
      <input type="color" name="color"><br><br>
      <input type="submit" value="Wyślij dane">
    </form>
    <?php
      if (!empty($_GET['name']) && !empty($_GET['surname']) && !empty($_GET['color'])) {
        echo <<< L
        <br>
        Imię i nazwisko: $_GET[name] $_GET[surname]<br>
        Ulubiony kolor: $_GET[color]
L;
      }else {
        echo "Wypełnij wszystkie dane!";
      }
     ?>
  </body>
</html>
