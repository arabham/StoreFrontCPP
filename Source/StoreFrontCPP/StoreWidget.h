// Property of Do Over Games

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Store.h"
#include "StoreWidget.generated.h"

/**
 * 
 */
UCLASS()
class STOREFRONTCPP_API UStoreWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UStoreWidget(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	void UpdateItemCount(int32 Value);

	void UpdateItemStock(int32 Value);

	void ResetItemCount();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* ItemCountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* ItemStockedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AStore* MyAStore;

	UPROPERTY(EditDefaultsOnly, Category = "Store")
	TSubclassOf<AStore> StoreClass;

};
