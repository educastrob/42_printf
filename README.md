<div align=center>

## ft_printf

</div>

## Description
<p>The ft_printf function prints a formatted string to standard output. It's a useful way to produce precisely formatted results from numerical or textual arguments.</p>

## The Project
<h3>Mandatory</h3>
<table>
<thead>
  <tr>
    <th>Conversion</th>
    <th>Description</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td><b>%c</b></td>
    <td>Single ascii character</td>
  </tr>
  <tr>
    <td><b>%s</b></td>
    <td>String of characters NULL terminated</td>
  </tr>
  <tr>
    <td><b>%p</b></td>
    <td>Pointer location converted to hexadecimal value</td>
  </tr>
  <tr>
    <td><b>%d</b></td>
    <td>Decimal number</td>
  </tr>
  <tr>
    <td><b>%i</b></td>
    <td>Integer in decimal base</td>
  </tr>
  <tr>
    <td><b>%u</b></td>
    <td>Unsigned integer in decimal base</td>
  </tr>
  <tr>
    <td><b>%x</b></td>
    <td>Unsigned number printed in lowercase hexadecimal base</td>
  </tr>
  <tr>
    <td><b>%X</b></td>
    <td>Unsigned number printed in uppercase hexadecimal base</td>
  </tr>
  <tr>
    <td><b>%%</b></td>
    <td>The '%' ascii character</td>
  </tr>
</tbody>
</table>
<table>
<h3>Bonus</h3>
<thead>
  <tr>
    <th>Flags</th>
    <th>Description</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td><b>+</b></td>
    <td>Add a plus sign ('+') in the front of positive numeric conversions</td>
  </tr>
  <tr>
    <td><b>#</b></td>
    <td>Add the corresponding prefix in front of x, X and o conversions</td>
  </tr>
  <tr>
    <td><b>(space)</b></td>
    <td>Add a single space (' ') in the front of positive numeric conversions</td>
  </tr>
</tbody>
</table>

## How to Execute
Clone this repository in your local computer and `cd` into it:

```sh
$> git clone https://github.com/educastrob/ft_printf.git && cd ft_printf
```

In your local repository, run `make`

```sh
$> make 
```

> `make` suports 4 flags: 
> - `make all` or simply `make` compiles printf in its mandatory format
> - `make clean` deletes the `.o` files generated during compilation
> - `make fclean` deletes the `.o` and the `libftprintf.a` library file generated
> - `make re` executes `fclean` and `all` in sequence, recompiling the library

To use the ft_printf in your code you will need to include the header:
```c
#include "ft_printf.h" 
```

When compiling your own code with `libftprintf`, don't forget to use the flags:
```sh
$> ... -lftprintf -L path/to/libftprintf.a -I path/to/ftprintf.h 
```
