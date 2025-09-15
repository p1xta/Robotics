from setuptools import find_packages
from setuptools import setup

setup(
    name='full_name_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('full_name_interfaces', 'full_name_interfaces.*')),
)
