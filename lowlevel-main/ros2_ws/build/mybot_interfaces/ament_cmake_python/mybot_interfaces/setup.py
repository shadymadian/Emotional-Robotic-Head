from setuptools import find_packages
from setuptools import setup

setup(
    name='mybot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('mybot_interfaces', 'mybot_interfaces.*')),
)
