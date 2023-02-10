// Fill out your copyright notice in the Description page of Project Settings.


#include "Store.h"
#include "InGameHUD.h"


// Sets default values
AStore::AStore()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	ItemCount = 0;

}

// Called when the game starts or when spawned
void AStore::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStore::BuyItemFromStoreStoreInventory(int32 IWholePrice)
{
	if (IWholePrice < Marks)
	{
		Marks = Marks - IWholePrice;
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("CAN'T AFFORD ITEM!"))
}

void AStore::AddItemStoreInventory(AItem* ItemToAdd)
{
	AInGameHUD* InGameHUD = Cast<AInGameHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
	{
		ItemCount += 1;
		InGameHUD->UpdateItemCount(ItemCount);
		StoreInventory.Add(ItemToAdd);
	}
}

void AStore::StockItem(AItem* ItemToStock)
{
	StockedItems.Add(ItemToStock);
}
