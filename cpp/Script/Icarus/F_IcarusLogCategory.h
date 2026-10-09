// /Script/Icarus.IcarusLogCategory
// size 0x48, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/LogCategoriesLibrary.generated.h

USTRUCT()
struct FIcarusLogCategory : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Name;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0030, size 0x18
};
