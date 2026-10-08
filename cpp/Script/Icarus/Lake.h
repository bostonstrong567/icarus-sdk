// /Script/Icarus.Lake
// Derives from: AWaterBody > AIcarusActor > AActor > UObject
// size 0x368, declared in Icarus/Source/Icarus/World/Lake.h

UCLASS(Config=Engine)
class ALake : public AWaterBody
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LakeScale;  // 0x0338, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWaterPoint> WaterPoints;  // 0x0348, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFishManager* FishManager;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsFishVolume;  // 0x0360, size 0x1
};
