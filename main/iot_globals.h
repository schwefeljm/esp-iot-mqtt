#pragma once

#include "iot_enums.h"
#include "iot_structs.h"
#include "cJSON.h"
#include "nvs_flash.h"
#include "mqtt_client.h"

#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"

#define IOT_ISR_ONE_SHOT_OUT_PIN_DEFAULT_DELAY 250

extern const char *TAG;
extern const char* baseTopic;

//extern iot_config_linked_list_t* iotConfigHead;
extern cJSON* iotConfiguration;
extern nvs_handle_t iot_nvs_user_handle;
extern QueueHandle_t simpleSwitchInreQueue;
extern esp_mqtt_client_handle_t iotMqttClient;
extern iot_wifi_conf_t iot_wifi_conf;


void iot_init(void);