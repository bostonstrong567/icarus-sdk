// /Script/Engine.NetDriverDefinition
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FNetDriverDefinition
{
public:
    UPROPERTY() FName DefName;  // 0x0000, size 0x8
    UPROPERTY() FName DriverClassName;  // 0x0008, size 0x8
    UPROPERTY() FName DriverClassNameFallback;  // 0x0010, size 0x8
};
