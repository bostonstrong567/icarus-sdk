// /Script/Icarus.BestiaryFastArrayItem
// size 0x28, declared in Icarus/Source/Icarus/Systems/Bestiary/BeastiaryFastArrays.h

USTRUCT()
struct FBestiaryFastArrayItem : public FFastArraySerializerItem
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryDataRowHandle BestiaryRowHandle;  // 0x000C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PointScore;  // 0x0024, size 0x4
};
