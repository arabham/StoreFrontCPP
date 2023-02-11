// Property of Do Over Games


#include "StoreWidget.h"

UStoreWidget::UStoreWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UStoreWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (StoreClass)
	{
		AActor* FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), StoreClass);
		
		MyAStore = Cast<AStore>(FoundActor);
		if (MyAStore)
		{
			UE_LOG(LogTemp, Warning, TEXT("Store"))
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("Not Found"))
	}
}

void UStoreWidget::UpdateItemCount(int32 Value)
{
	if (ItemCountText)
	{
		if (ItemCountText->Visibility == ESlateVisibility::Hidden)
		{
			ItemCountText->SetVisibility(ESlateVisibility::Visible);
		}
		ItemCountText->SetText(FText::FromString("Owned: " + FString::FromInt(Value)));
	}
}

void UStoreWidget::UpdateItemStock(int32 Value)
{
	if (ItemStockedText)
	{
		if (ItemStockedText->Visibility == ESlateVisibility::Hidden)
		{
			ItemStockedText->SetVisibility(ESlateVisibility::Visible);
		}
		ItemStockedText->SetText(FText::FromString("Stocked: " + FString::FromInt(Value)));
	}
}

void UStoreWidget::ResetItemCount()
{
	if (ItemCountText)
	{
		ItemCountText->SetVisibility(ESlateVisibility::Hidden);
	}
}