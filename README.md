# nice-like

## Bindowanie
Bindowanie zostanie wykonane jedynie gdy nazwa będzie zaczynać się od . lub będzie ona poprzedzona wyrażeniem #nice#.
Dozwolone jest jedynie dwupioziomowe menu w formie .NazwaGrupy.NazwaFunkcji
Możliwe jest wywołanie okienka, które pozwoli na wpisanie dodatkowej wartości np. nazwy pliku, format: na końcu nazwy trzeba dodać ${Komunikat pojawiający się w okienku|Entry}
Zaimplementowane są od razu .File.Help i .File.Quit

**Klawisze specjalne**

W ramach obsługi <EDITION> istnieje możliwość posługiwania się większością przycisków na klawiaturze, odbywa się to przez ustawienie setEntry("KEY", klawisz) i funkcji toola odpowiadającą za obsługę tych przycisków. Jednakże nie wszystkie klawisze mogą być przesłane jako char, dlatego są nazywane specjalnymi. Poniżej podane są klawisze i ich nazwy przesyłane do toola:
- Enter <ENTER>
- Backspace <BS>
- Del <DEL>
- strzałki <[UDLR]ARROW>
