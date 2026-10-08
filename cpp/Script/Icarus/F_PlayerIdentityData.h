// /Script/Icarus.PlayerIdentityData
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/PlayerIdentityLibrary.generated.h

USTRUCT()
struct FPlayerIdentityData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Icon;  // 0x0020, size 0x8
};
