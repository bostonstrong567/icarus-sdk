// /Script/Icarus.PlayerAudioShelterRecord
// size 0x18, declared in Icarus/Source/Icarus/Audio/Player/PlayerAudioShelterRecord.h

USTRUCT()
struct FPlayerAudioShelterRecord
{
public:
    FVector TraceDirection;  // 0x0000, not reflected
    float Shelter;  // 0x000C, not reflected
    float Distance;  // 0x0010, not reflected
    EPhysicalSurface Surface;  // 0x0014, not reflected
};
