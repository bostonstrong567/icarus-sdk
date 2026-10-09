// /Script/Icarus.StomachContentSaveData
// size 0x10, declared in Icarus/Source/Icarus/Systems/Food/StomachContent.h

USTRUCT()
struct FStomachContentSaveData
{
public:
    UPROPERTY(SaveGame, BlueprintReadWrite) FName FoodRowName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame, BlueprintReadWrite) FName ModifierName;  // 0x0008, size 0x8
};
