// /Script/Icarus.SuccessAnimSet
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/ActionData.h

USTRUCT()
struct FSuccessAnimSet
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FValidHitTypesRowHandle SuccessType;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> SuccessMontageVariations;  // 0x0018, size 0x10
};
