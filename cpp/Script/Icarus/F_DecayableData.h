// /Script/Icarus.DecayableData
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DecayableComponent.generated.h

USTRUCT()
struct FDecayableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DecayTime;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpoilTime;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle SpoiledItem;  // 0x0020, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ResourceLeakage;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEmptyContainer;  // 0x003C, size 0x1
};
