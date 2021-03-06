/**
 *    Copyright(c) 2016-2017 rryqszq4
 *
 *
 */

#ifndef NGX_HTTP_PYTHON_DIRECTIVE_H
#define NGX_HTTP_PYTHON_DIRECTIVE_H

#include <ngx_config.h>
#include <ngx_conf_file.h>
#include <nginx.h>

char *ngx_http_python_rewrite_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_python_rewrite_inline_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);

char *ngx_http_python_access_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_python_access_inline_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);

char *ngx_http_python_content_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_python_content_inline_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);

char *ngx_http_python_log_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_python_log_inline_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);

#endif
