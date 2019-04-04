# Compute number of bits set to 1 for given integer

## 1.
```
void get_1bits_of_integer(unsigned int val);
```
- Time complexity :
- Code analysis:
<img src="https://github.com/yuvvi/Elements_of_programming/blob/master/Primitive_type/code_analysis.PNG" width="700" height="600" />
## 2.
```
unsigned int get_1bits_of_integer_recursively(unsigned int val,int *iteration);
```
- Used to compute number of bits set to 1 recursively.
- Time complexity :

## 3. Brian Kernighan's Algorithm
```
void get_1bits_of_int_Brian_Algo(unsigned int val);
```
- counts number of 1s without shift operator.
- Uses substraction & AND operator.
- Time complexity :

### Output
![Output](https://github.com/yuvvi/Elements_of_programming/blob/master/Primitive_type/Output_1bits_of_int.PNG)

