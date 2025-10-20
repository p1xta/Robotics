import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'delayed_turtle'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='p1xta',
    maintainer_email='daria.petrova496@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'turtle_tf2_broadcaster = delayed_turtle.turtle_tf2_broadcaster:main',
            'turtle_tf2_listener = delayed_turtle.turtle_tf2_listener:main',
            'fixed_frame_tf2_broadcaster = delayed_turtle.fixed_frame_tf2_broadcaster:main',
        ],
    },
)
