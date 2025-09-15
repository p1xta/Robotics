import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/p1xta/Robotics/Task2/ex10/install/py_pubsub'
