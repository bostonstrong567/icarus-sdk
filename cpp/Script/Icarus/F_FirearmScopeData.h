// /Script/Icarus.FirearmScopeData
// size 0x58, declared in Icarus/Source/Icarus/DataStructs/Tools/FirearmData.h

USTRUCT()
struct FFirearmScopeData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture> ScopeTexture;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TargetFOV;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScopeTime;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FirstPersonADSOffset;  // 0x0048, size 0xC
};
