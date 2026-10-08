// /Script/Icarus.MetaCurrency
// size 0xB8, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/MetaCurrencyLibrary.generated.h

USTRUCT()
struct FMetaCurrency : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0060, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemStaticData;  // 0x0078, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DecoratorText;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DecoratorImage;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisplayOnMainScreen;  // 0x00B0, size 0x1
};
