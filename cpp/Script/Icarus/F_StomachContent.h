// /Script/Icarus.StomachContent
// size 0x24, declared in Icarus/Source/Icarus/Systems/Food/StomachContent.h

USTRUCT()
struct FStomachContent
{
public:
    UPROPERTY(BlueprintReadWrite) FItemsStaticRowHandle Food;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) int32 ModifierID;  // 0x0018, size 0x4
    UPROPERTY(BlueprintReadOnly) FName CachedModifierName;  // 0x001C, size 0x8
};
