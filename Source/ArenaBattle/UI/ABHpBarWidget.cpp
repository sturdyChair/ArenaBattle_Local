// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/ABHpBarWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Interface/ABCharacterWidgetInterface.h"

UABHpBarWidget::UABHpBarWidget(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	MaxHp = -1.f;
}

void UABHpBarWidget::UpdateStat(const FABCharacterStat& BaseStat, const FABCharacterStat& ModifierStat)
{
	MaxHp = BaseStat.MaxHp + ModifierStat.MaxHp;
	if (HpProgressBar)
	{
		HpProgressBar->SetPercent(CurrentHp / MaxHp);
	}
	HpStat->SetText(FText::FromString(GetHpStatText()));
}

void UABHpBarWidget::UpdateHpBar(float NewCurrentHp)
{
	CurrentHp = NewCurrentHp;
	ensure(MaxHp > 0.f);
	if (HpProgressBar)
	{
		HpProgressBar->SetPercent(NewCurrentHp / MaxHp);
	}
	HpStat->SetText(FText::FromString(GetHpStatText()));
}

FString UABHpBarWidget::GetHpStatText()
{
	return FString::Printf(TEXT("%0.f / %0.f"), CurrentHp, MaxHp);
}

void UABHpBarWidget::NativeConstruct()
{
	Super::NativeConstruct();
	HpProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PbHpBar")));
	ensure(HpProgressBar);
	HpStat = Cast<UTextBlock>(GetWidgetFromName(TEXT("TxtHpStat")));
	ensure(HpStat);

	IABCharacterWidgetInterface* WidgetInterface = Cast<IABCharacterWidgetInterface>(OwningActor);
	if (WidgetInterface)
	{
		WidgetInterface->SetupCharacterWidget(this);
	}
}
