// /Script/Icarus.BuildingSkin
// size 0xB8, declared in Icarus/Source/Icarus/Building/BuildingSkin.h

USTRUCT()
struct FBuildingSkin : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInterface>> BaseMeshMaterialSlotOverrides;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInterface>> FrameMaterialSlotOverrides;  // 0x0068, size 0x50
};
