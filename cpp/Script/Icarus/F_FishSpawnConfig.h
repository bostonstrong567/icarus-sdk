// /Script/Icarus.FishSpawnConfig
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/FishSpawnConfigLibrary.generated.h

USTRUCT()
struct FFishSpawnConfig : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UGameplayTexture> SpawnMap;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFIshSpawnZoneSetup> SpawnZones;  // 0x0040, size 0x10
};
