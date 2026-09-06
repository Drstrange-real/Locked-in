def is_valid(isbn):
    cleaned = isbn.replace("-", "")
    if len(cleaned) != 10:
        return False
    digits = []
    for i, char in enumerate(cleaned):
        if char.isdigit():
            digits.append(int(char))
        elif char == 'X' and i == 9:
            digits.append(10)
        else:
            return False
    return sum(d * (10 - i) for i, d in enumerate(digits)) % 11 == 0
        
