// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterAttributeSet.h"

void UMyCharacterAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue);

    if (Attribute == GetHealthAttribute())
    {
        // Health ���� 0���� 100 ���̷� ����
        NewValue = FMath::Clamp<float>(NewValue, 0.0f, 100.0f);
    }
}
