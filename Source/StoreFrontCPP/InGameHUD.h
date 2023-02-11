// Property of Do Over Games

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Components/WidgetComponent.h"
#include "StoreWidget.h"
#include "InGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class STOREFRONTCPP_API AInGameHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	AInGameHUD();

	virtual void DrawHUD() override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	void UpdateItemCount(int32 Value);

	UFUNCTION()
	void UpdateItemStock(int32 Value);
	
	UFUNCTION()
	void ResetItemCount();

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> StoreWidgetClass;

private:
	UStoreWidget* StoreWidget;
};
