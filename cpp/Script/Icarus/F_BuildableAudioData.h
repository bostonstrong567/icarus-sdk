// /Script/Icarus.BuildableAudioData
// size 0x188, declared in Icarus/Source/Icarus/DataStructs/Audio/BuildableAudioData.h

USTRUCT()
struct FBuildableAudioData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BuildingPlacedSound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BuildingStressDamageSound;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BuildingDestroyedSound;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BuildingDamagedSound;  // 0x0090, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BuildingDestructibleDamagedSound;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BuildingWeatherDamageSound;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BuildingWeatherDamageStrippedSound;  // 0x0108, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BuildingWeatherUnzippingSound;  // 0x0130, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BuildingRepairedSound;  // 0x0158, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BuildingOcclusionValue;  // 0x0180, size 0x4
};
