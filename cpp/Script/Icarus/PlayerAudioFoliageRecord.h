// /Script/Icarus.PlayerAudioFoliageRecord
// Derives from: UObject
// size 0x50, declared in Icarus/Source/Icarus/Audio/Player/PlayerAudioFoliageRecord.h

UCLASS()
class UPlayerAudioFoliageRecord : public UObject
{
public:
    UPROPERTY() UFLODRecord* FLODRecord;  // 0x0028, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    EPlayerAudioFoliageType Type;  // 0x0030, private
    int32 Count;  // 0x0034, private
    int32 CloseCount;  // 0x0038, private
    float CoverDepth;  // 0x003C, private
    TArray<FVector2D,TSizedDefaultAllocator<32> > CloseCountLocations;  // 0x0040, private
};
