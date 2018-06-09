# Learn Awk
`Awk` 是一门解释型编程语言, `Gawk(GNU Awk)`是 `GNU` 对AWK语言的实现

***************************************

* [The GNU Awk User’s Guide](https://www.gnu.org/software/gawk/manual/gawk.html)
* [Awk Tutorial](https://www.tutorialspoint.com/awk/index.htm)

***************************************
### 数据处理格并格式化输出

``` bash
    $ awk '$3 > 0 {print $1 "\t" $2*$3}' emp.data
```

### 执行 awk 脚本

``` bash
    $ awk -f cal.awk score.txt
    
    $ ./cal.awk score.txt
```

### 查看系统的 awk 实现

``` bash
    $ ls -l /bin/awk
```

### 输出文件所有内容

``` bash
    $ awk '{print}' log.txt
```

### 使用正则表达式匹配行

``` bash
    $ awk '/test/ {print $0}' log.txt
```

### 使用内置函数

``` bash
    $ awk 'length($0) >20' log.txt
```
