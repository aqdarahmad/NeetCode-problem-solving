class HashTable:
    def __init__(self, size=5):
        self.size = size
        self.table = [None] * size

    def _hash(self, key):
        return hash(key) % self.size

    def put(self, key, value):
        index = self._hash(key)
        self.table[index] = (key, value)

    def get(self, key):
        index = self._hash(key)
        if self.table[index] is not None:
            return self.table[index][1]
        return None

    def delete(self, key):
        index = self._hash(key)
        if self.table[index] is not None:
            self.table[index] = None

    def display(self):
        for i, item in enumerate(self.table):
            print(f"index {i}: {item}")


ht = HashTable()
ht.put("name", "aqdar")
ht.put("age", 21)
ht.put("country", "palestine")
ht.display()