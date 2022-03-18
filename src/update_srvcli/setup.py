from setuptools import setup

package_name = 'update_srvcli'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='barbariccia',
    maintainer_email='kkykky11@angel-robotics.com',
    description='Firmware update service and client',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'service = update_srvcli.tftp_update_service:main',
            'client = update_srvcli.tftp_update_client_test:main',
        ],
    },
)
