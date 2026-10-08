// /Game/BP/Hunting/BP_HuntingClueSpawnerInstanceGroup_BloodTrail.BP_HuntingClueSpawnerInstanceGroup_BloodTrail_C
// Derives from: UBP_HuntingClueSpawnerInstanceGroup_C > UObject
// size 0x100, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_HuntingClueSpawnerInstanceGroup_BloodTrail_C : public UBP_HuntingClueSpawnerInstanceGroup_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastDropTime;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastClueLocation;  // 0x00F4, size 0xC
};
