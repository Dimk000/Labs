import sys
import argparse


def createParser():
    parser = argparse.ArgumentParser()
    parser.add_argument('-p', '--poly')
    namespace = parser.parse_args(sys.argv[1:])
    value = namespace.poly
    separate_value = value.split(",")
    # print(separate_value)
    return separate_value

def converter(x):
    for i in range(len(x)):
        x[i] = float(x[i])
    return x

def math_operation(x):
    result=[]
    for i in range(len(x)):
        result.append(1/x[i]*3)
    print(sum(result))

if __name__ == '__main__':
    separate_value = createParser()
    ok_value = converter(separate_value)
    math_operation(ok_value)

    # print (namespace)

    # print("Привет, {}!".format(namespace.name))
