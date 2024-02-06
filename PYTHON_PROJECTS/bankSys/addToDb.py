import shelve


def addToDb(obj):
    db = shelve.open('clientdb')
    db[obj.idNo] = obj
    db.close()

