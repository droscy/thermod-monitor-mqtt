# Thermod monitor for MQTT
Forward Thermod temperature and current status to an MQTT broker

It also support Home Assistant topic for auto-discovery of sensors.

## License
Thermod monitor for MQTT v0.0.0-dev \
Copyright (C) 2020 Simone Rossetto <simros85@gmail.com> \
GNU General Public License v3

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.


## How to install

### Requirements
*Thermod monitor for MQTT* requires [Python3](https://www.python.org/)
(at least version 3.5) and the following packages:

 - [requests](http://docs.python-requests.org/) (>=2.20.0)
 - [phao-mqtt](https://pypi.org/project/paho-mqtt/) (>= 1.5.0)

### Installation
To install the monitor you need to have [Python3](https://www.python.org/)
and [virtualenv](https://virtualenv.pypa.io/en/stable/) already installed on
the system, then the basic steps are:

 1. download and uncompress the source tarball (or clone the repository)

 2. create e virtualenv somewhere

 3. using that virtualenv, install dependecies and this monitor with

       ```bash
       pip install -r requirements.txt
       python3 setup.py install
       ```

 4. copy the config file `monitor-mqtt.conf` in one of the following folder (the top-most take precedence)

    - `~/.thermod/`
    - `~/.config/thermod/`
    - `/usr/local/etc/thermod/`
    - `/var/lib/thermod/`
    - `/etc/thermod/`

    and adjust it to your needs.

