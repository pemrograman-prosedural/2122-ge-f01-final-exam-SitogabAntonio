#include "dorm.h"
#include <stdio.h>
#include <string.h>

void create_dorm(struct dorm_t *_dorm, char *_name, unsigned short _capacity, enum gender_t _gender)
{
    strcpy(_dorm->name, _name);
    _dorm->capacity = _capacity;
    _dorm->gender = _gender;
    _dorm->residents_num = 0;
}

void print_dorm(struct dorm_t *_dorm, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (_dorm[i].gender == GENDER_MALE)
        {
            printf("%s|%d|male\n", _dorm[i].name, _dorm[i].capacity);
        }
        else if (_dorm[i].gender == GENDER_FEMALE)
        {
            printf("%s|%d|female\n", _dorm[i].name, _dorm[i].capacity);
        }
    }
}
void print_dorm_detail(struct dorm_t *_dorm, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (_dorm[i].gender == GENDER_MALE)
        {
            printf("%s|%d|male|%d\n", _dorm[i].name, _dorm[i].capacity, _dorm[i].residents_num);
        }
        else if (_dorm[i].gender == GENDER_FEMALE)
        {
            printf("%s|%d|female|%d\n", _dorm[i].name, _dorm[i].capacity, _dorm[i].residents_num);
        }
    }
}