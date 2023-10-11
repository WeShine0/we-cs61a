
from operator import floordiv,mod

def divexact(n, d):
    """Return the quotient and remainder of diving N by D.
    >>> q, r = divexact(2023, 10)
    >>> q
    202
    >>> r
    3
    """
    return floordiv(n, d), mod(n, d)
q, r = divexact(2023, 10)