// /Script/FMODStudio.FMODOcclusionDetails
// size 0x3, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Classes/FMODAudioComponent.h

USTRUCT()
struct FFMODOcclusionDetails
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableOcclusion;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECollisionChannel> OcclusionTraceChannel;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseComplexCollisionForOcclusion;  // 0x0002, size 0x1
};
