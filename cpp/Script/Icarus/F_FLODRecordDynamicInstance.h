// /Script/Icarus.FLODRecordDynamicInstance
// size 0x34, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordDynamicInstance : public FFastArraySerializerItem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 InstanceIndex;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector_NetQuantize100 WorldLocation;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector_NetQuantize100 WorldRotation;  // 0x001C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector_NetQuantize100 WorldScale;  // 0x0028, size 0xC
};
