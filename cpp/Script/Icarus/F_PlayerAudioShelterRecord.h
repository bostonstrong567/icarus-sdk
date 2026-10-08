// /Script/Icarus.PlayerAudioShelterRecord
// size 0x18, declared in Icarus/Source/Icarus/Audio/Player/PlayerAudioShelterRecord.h

USTRUCT()
struct FPlayerAudioShelterRecord
{

    // Not reflected:
    FVector TraceDirection;  // 0x0000
    float Shelter;  // 0x000C
    float Distance;  // 0x0010
    EPhysicalSurface Surface;  // 0x0014
};
