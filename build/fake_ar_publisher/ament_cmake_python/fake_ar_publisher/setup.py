from setuptools import find_packages
from setuptools import setup

setup(
    name='fake_ar_publisher',
    version='0.0.0',
    packages=find_packages(
        include=('fake_ar_publisher', 'fake_ar_publisher.*')),
)
