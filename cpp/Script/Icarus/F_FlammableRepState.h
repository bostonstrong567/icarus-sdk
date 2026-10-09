// /Script/Icarus.FlammableRepState
// size 0x18, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableRepState.h

USTRUCT()
struct FFlammableRepState : public FFastArraySerializerItem
{
public:
    UPROPERTY() EFlammableState FlammableState;  // 0x000C, size 0x1
    UPROPERTY() float DesiredTemperature;  // 0x0010, size 0x4
    UPROPERTY() int32 InstanceIndex;  // 0x0014, size 0x4
};
