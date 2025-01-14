from pprint import pprint

ALPHABET = {  #
    'АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ'[i - 1]: i for i in range(1, 32)  # алфавит !!!(не включает букву Ё)
}
REVERSED_ALPHABET = {i[1]: i[0] for i in ALPHABET.items()}


def gamma(m, key):
    c = ""
    if len(m) != len(key):
        return 1
    for i in range(len(m)):
        m_i = ALPHABET[m[i]]
        key_i = ALPHABET[key[i]]
        c += REVERSED_ALPHABET[m_i ^ key_i]
    return c
