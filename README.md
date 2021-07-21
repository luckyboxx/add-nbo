## KITRI BoB 10th (2021.07.13)

### gilgil - add-nbo

```bash
$ echo -n -e \\x00\\x00\\x03\\xe8 > thousand.bin
$ echo -n -e \\x00\\x00\\x01\\xf4 > five-hundred.bin
$ ./add-nbo thousand.bin five-hundred.bin
```

Link: https://gitlab.com/gilgil/sns/-/wikis/byte-order/report-add-nbo
