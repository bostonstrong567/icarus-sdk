// /Script/Icarus.StatPairRepState
// size 0x14, declared in Icarus/Source/Icarus/Stats/IcarusStatContainer.h

USTRUCT()
struct FStatPairRepState : public FFastArraySerializerItem
{
    UPROPERTY() int32 Stat;  // 0x000C, size 0x4
    UPROPERTY() int32 Value;  // 0x0010, size 0x4
};
