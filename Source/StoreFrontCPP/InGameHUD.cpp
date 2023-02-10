// Property of Do Over Games


#include "InGameHUD.h"

AInGameHUD::AInGameHUD()
{

}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();

	if (StoreWidgetClass)
	{
		StoreWidget = CreateWidget<UStoreWidget>(GetWorld(), StoreWidgetClass);
		if (StoreWidget)
		{
			StoreWidget->AddToViewport();
		}
	}
}

void AInGameHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AInGameHUD::UpdateItemCount(int32 Value)
{
	if (StoreWidget)
	{
		StoreWidget->UpdateItemCount(Value);
	}
}

void AInGameHUD::ResetItemCount()
{
	if (StoreWidget)
	{
		StoreWidget->ResetItemCount();
	}
}
