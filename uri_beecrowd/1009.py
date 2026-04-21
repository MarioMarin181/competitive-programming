# -*- coding: utf-8 -*-

def totalSalary(salary, sales):
    return float(salary+(sales*0.15))

name = input()
salary = float(input())
sales = float(input())

print(f'TOTAL = R$ {totalSalary(salary, sales):.2f}')