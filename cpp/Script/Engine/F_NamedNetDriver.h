// /Script/Engine.NamedNetDriver
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FNamedNetDriver
{
public:
    UPROPERTY(Transient) UNetDriver* NetDriver;  // 0x0000, size 0x8
    FNetDriverDefinition * NetDriverDef;  // 0x0008, not reflected
};
