// /Script/Engine.FastArraySerializerItem
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Engine/NetSerialization.h

USTRUCT()
struct FFastArraySerializerItem
{
    UPROPERTY() int32 ReplicationID;  // 0x0000, size 0x4
    UPROPERTY() int32 ReplicationKey;  // 0x0004, size 0x4
    UPROPERTY() int32 MostRecentArrayReplicationKey;  // 0x0008, size 0x4
};
