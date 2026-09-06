def is_isogram(phrase):
    cleaned = ''.join(c.lower() for c in phrase if c.isalpha())
    return len(cleaned) == len(set(cleaned))
    