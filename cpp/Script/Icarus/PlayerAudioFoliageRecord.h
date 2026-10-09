// /Script/Icarus.PlayerAudioFoliageRecord
// Derives from: UObject
// size 0x50, declared in Icarus/Source/Icarus/Audio/Player/PlayerAudioFoliageRecord.h

UCLASS()
class UPlayerAudioFoliageRecord : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UFLODRecord* FLODRecord;  // 0x0028, size 0x8
    EPlayerAudioFoliageType Type;  // 0x0030, not reflected
    int32 Count;  // 0x0034, not reflected
    int32 CloseCount;  // 0x0038, not reflected
    float CoverDepth;  // 0x003C, not reflected
    TArray<FVector2D,TSizedDefaultAllocator<32> > CloseCountLocations;  // 0x0040, not reflected
};
