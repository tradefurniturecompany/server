# Catch SSL offloading
if ($http_x_forwarded_proto = "https") {
    set $fastcgi_https "on";
}
