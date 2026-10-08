// /Script/Icarus.ArmourSet
// size 0x30, declared in Icarus/Source/Icarus/Traits/Behaviours/ArmourData.h

USTRUCT()
struct FArmourSet : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FArmourSetBonusRowHandle> SetBonus;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPlayerArmourTypeFMODParam FMODParam;  // 0x0028, size 0x1
};
