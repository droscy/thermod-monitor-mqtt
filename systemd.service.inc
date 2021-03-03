[Unit]
Description=Thermod monitor for MQTT
Requires=syslog.service
Wants=thermod.service network.target
After=syslog.service thermod.service network.target

[Service]
Type=simple
User=<WRITE_HERE_USERNAME>
ExecStart=<WRITE_HERE_VRITUALENV_FOLDER>/bin/thermod-monitor-mqtt --syslog
KillSignal=SIGTERM

[Install]
WantedBy=multi-user.target
