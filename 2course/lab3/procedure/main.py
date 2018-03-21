from ModuleParser import createParser
from ModuleMathConvert import converter, math_operation

if __name__ == '__main__':
    separate_value = createParser()
    converted_value = converter(separate_value)
    math_operation(converted_value)