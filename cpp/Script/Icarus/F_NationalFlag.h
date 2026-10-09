// /Script/Icarus.NationalFlag
// size 0x58, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/NationalFlagsLibrary.generated.h

USTRUCT()
struct FNationalFlag : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemableRowHandle Item;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> FlagTexture;  // 0x0030, size 0x28
};
