Server settings for [tradefurniturecompany.co.uk](https://www.tradefurniturecompany.co.uk) (Magento 2).  
The server's version: `CentOS Linux release 7.9.2009 (Core)` (via `cat /etc/redhat-release`).

## Useful commands:
### Restart a service
```                      
systemctl restart crond          
systemctl restart elasticsearch
systemctl restart nginx
systemctl restart php-fpm
systemctl restart rabbitmq-server  
```       

### A service's status
```         
service crond status
service elasticsearch status                        
service rabbitmq-server status
```                       
