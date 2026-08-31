from itertools import product


def is_tautology():
    for p, q in product([True, False], repeat=2):

        expression = (p or q) or (not p)

        if expression == False:
            return False

    return True


if is_tautology():
    print("The expression is a tautology.")
else:
    print("The expression is not a tautology.")
