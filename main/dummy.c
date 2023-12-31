#include <stdio.h>
#include <stdbool.h>
#include "iot_enums.h"
#include "iot_structs.h"
#include "iot_enums.h"
#include "iot_globals.h"
#include "iot_config.h"
#include "driver/gpio.h"


iot_config_linked_list_t* dummy_intiConfig(void) {

    iot_intr_switch_simple_config_t* jasonTest = calloc(1, sizeof(iot_intr_switch_simple_config_t));
        jasonTest->mqttConfig = calloc(1, sizeof(iot_mqtt_config_t));
        jasonTest->mqttConfig = calloc(1, sizeof(iot_mqtt_config_t));
        jasonTest->intrTaskName = "Task Inter 1";
        jasonTest->intrPin = GPIO_NUM_0;
        jasonTest->intrSimpleSwitchType = IOT_INTR_SWITCH_TOGGLE;
        jasonTest->outPin = GPIO_NUM_1;
        jasonTest->outPull = IOT_GPIO_PULL_UP;
        jasonTest->intrPull = IOT_GPIO_PULL_UP;
        //jasonTest->intrType = GPIO_INTR_ANYEDGE;
        jasonTest->inputInvert = true;
        jasonTest->timerDelay = 5000;
        jasonTest->mqttConfig->mqttTopic = "JSONTest";
        jasonTest->mqttConfig->mqttTopicQos = IOT_MQTT_QOS_LEAST_ONCE;
        jasonTest->mqttConfig->mqttSubscribe = "NONE";
        jasonTest->mqttDataOn = "On";
        jasonTest->mqttDataOff = "Off";

    iot_config_item_t* configItemTest0 = calloc(1, sizeof(iot_config_item_t));
        configItemTest0->configItem = jasonTest;
        configItemTest0->configKey = "JSON_Test-1";
        configItemTest0->configItemType = IOT_CONFIG_SIMPLE_SWITCH;


    iot_intr_switch_simple_config_t* lindaTest = calloc(1, sizeof(iot_intr_switch_simple_config_t));
        lindaTest->mqttConfig = calloc(1, sizeof(iot_mqtt_config_t));
        lindaTest->intrTaskName = "Task Inter 3";
        lindaTest->intrPin = GPIO_NUM_2;
        lindaTest->intrSimpleSwitchType = IOT_INTR_SWITCH_ONE_SHOT_POS;
        lindaTest->intrPull = IOT_GPIO_PULL_DOWN;
        lindaTest->intrType = GPIO_INTR_NEGEDGE;
        lindaTest->outPin = GPIO_NUM_3;
        lindaTest->inputInvert = false;
        lindaTest->outPull = IOT_GPIO_PULL_DOWN;
        lindaTest->timerDelay = 500;
        lindaTest->mqttConfig->mqttTopic = "NopeNope";
        lindaTest->mqttConfig->mqttTopicQos = IOT_MQTT_QOS_MOST_ONCE;
        lindaTest->mqttConfig->mqttSubscribe = "NONE";
        lindaTest->mqttConfig->mqttSubscribeQos = IOT_MQTT_QOS_NO_TOPIC;
        lindaTest->mqttDataOn = "On";
        lindaTest->mqttDataOff = "Off";
    



    iot_config_item_t* configItemTest3 = calloc(1, sizeof(iot_config_item_t));
        configItemTest3->configItem = lindaTest;
        configItemTest3->configKey = "JSON_Test-2";
        configItemTest3->configItemType = IOT_CONFIG_SIMPLE_SWITCH;
    


   

/**/
//    iot_config_linked_list_t* c4 = calloc(1, sizeof(iot_config_linked_list_t));
//    c4->configEntry = configItemTest4;
    iot_config_linked_list_t* c3 = calloc(1, sizeof(iot_config_linked_list_t));
//    c3->next = c4;
    c3->configEntry = configItemTest3;
//    iot_config_linked_list_t* c1 = calloc(1, sizeof(iot_config_linked_list_t));
//    c1->next = c3;
//    c1->configEntry = configItemTest1;
    iot_config_linked_list_t* iotConfigHead = calloc(1, sizeof(iot_config_linked_list_t));
    iotConfigHead->next = c3;
    iotConfigHead->configEntry = configItemTest0;

    return iotConfigHead;
}