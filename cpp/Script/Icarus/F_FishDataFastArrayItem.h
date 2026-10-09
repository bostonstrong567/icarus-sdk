// /Script/Icarus.FishDataFastArrayItem
// size 0x34, declared in Icarus/Source/Icarus/Systems/Bestiary/BeastiaryFastArrays.h

USTRUCT()
struct FFishDataFastArrayItem : public FFastArraySerializerItem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishDataRowHandle FishRow;  // 0x000C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxQuality;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxWeight;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxLength;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CaughtCount;  // 0x0030, size 0x4
};
