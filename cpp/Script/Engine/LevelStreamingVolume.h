// /Script/Engine.LevelStreamingVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/Engine/LevelStreamingVolume.h

UCLASS(MinimalAPI, Config=Engine)
class ALevelStreamingVolume : public AVolume
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FName> StreamingLevelNames;  // 0x0258, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEditorPreVisOnly : 1;  // 0x0268, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisabled : 1;  // 0x0268, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EStreamingVolumeUsage> StreamingUsage;  // 0x026C, size 0x1
};
