// /Game/BP/Hunting/BP_HuntingClueSpawnerInstanceGroup_Footprint.BP_HuntingClueSpawnerInstanceGroup_Footprint_C
// Derives from: UBP_HuntingClueSpawnerInstanceGroup_C > UObject
// size 0x100, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_HuntingClueSpawnerInstanceGroup_Footprint_C : public UBP_HuntingClueSpawnerInstanceGroup_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastAIFocus;  // 0x00F0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentTotalDistance;  // 0x00FC, size 0x4
};
