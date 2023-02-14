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
	StockCount = 0;
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

void AStore::BuyItemFromStoreStoreInventory(FS_ItemInfo ItemToBuy)
{
	int32 WholePrice = ItemToBuy.WholesalePrice;
	if (Marks >= WholePrice)
	{
		UE_LOG(LogTemp, Warning, TEXT("Marks = %d"), Marks)
		UE_LOG(LogTemp, Warning, TEXT("WholePrice = %d"), WholePrice)
		UE_LOG(LogTemp, Warning, TEXT("ITEM BOUGHT!"))
		Marks = Marks - WholePrice;
		AddItemStoreInventory(ItemToBuy);
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("CAN'T AFFORD ITEM!"))
}

void AStore::AddItemStoreInventory(FS_ItemInfo ItemToAdd)
{
	AInGameHUD* InGameHUD = Cast<AInGameHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
	{
		ItemCount += 1;
		InGameHUD->UpdateItemCount(ItemCount);
		StoreInventory.Add(ItemToAdd);
	}
}

void AStore::StockItem(FS_ItemInfo ItemToStock)
{
	AInGameHUD* InGameHUD = Cast<AInGameHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD && ItemCount > StockCount)
	{
		StockCount += 1;
		InGameHUD->UpdateItemStock(StockCount);
		StockedItems.Add(ItemToStock);
		UE_LOG(LogTemp, Warning, TEXT("ITEM STOCKED!"))
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("NO ITEM TO STOCK!"))
}

void AStore::SetShelfRef()
{
	if (ShelfClass)
	{
		AActor* FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), ShelfClass);

		MyShelf = Cast<AShelf>(FoundActor);
		if (MyShelf)
		{
			UE_LOG(LogTemp, Warning, TEXT("Shelf Found"))
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("Shelf Not Found"))
	}
}

void AStore::SetRegisterRef()
{
	if (RegisterClass)
	{
		AActor* FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), RegisterClass);

		MyRegister = Cast<ARegister>(FoundActor);
		if (MyRegister)
		{
			UE_LOG(LogTemp, Warning, TEXT("Register Found"))
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("Register Not Found"))
	}
}