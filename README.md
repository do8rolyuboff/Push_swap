# Push_swap - @21born2code
![Screenshot intra](https://github.com/do8rolyuboff/Push_swap/blob/master/other/screenshot.png)
## Что такое Push_swap?
[Push_swap](https://github.com/do8rolyuboff/Push_swap/blob/master/other/push_swap.en.pdf) - цель проекта, создать две программы, `checker` и `push_swap`.

### Сhecker
![checker](https://github.com/do8rolyuboff/Push_swap/blob/master/other/screenshot_checker.png)
`checker`- в качестве апгумента получает стек, в виде списка целых чисел. Затем `checker` будет ждать инструкции.

`sa`: swap a - меняет местами первые 2 элемента в верхней части стека a.

`sb`: swap b - меняет местами первые 2 элемента в верхней части стека b.

`ss`: sa и sb одновременно.

`pa`: push a - первый элемент стека b помещает навверх стека a.

`pb`: push b - первый элемент стека a помещает навверх стека b.

`ra`: rotate a - сдвигает все элементы стека a на 1. Первый элемент становится
последний.

`rb`: rotate b - сдвигает все элементы стека b на 1. Первый элемент становится
последний.

`rr`: `ra` и `rb` одновременно.

`rra`: reverse rotate a - сдвинуть все элементы стека a на 1. Последний элемент
становится первым.

`rrb`: reverse rotate b - сдвинуть все элементы стека b на 1. Последний элемент
становится первым.

`rrr`: `rra` и `rrb` одновременно.

Как только все инструкции прочитаны, `checker` проверки выполнит отсортирован ли стек a.
Если стек отсортирован, то программа выдаст: `OK`
Если нет: `KO`

### Push_swap
`push_swap` - программа должна отображать наименьший список возможных инструкций для сортировки стека.
![push_swap](https://github.com/do8rolyuboff/Push_swap/blob/master/other/screenshot_push_swap.png)

### Визуализация
Для отладки алгоритма, я пользовался сприптом для визуализации сортировки: [python3 pyviz.py `ruby -e "puts (-200..200).to_a.shuffle.join(' ')"`](https://github.com/o-reo/push_swap_visualizer)

## Как проверить Push_swap?

