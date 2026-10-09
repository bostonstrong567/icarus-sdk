// /Script/Icarus.ContextMenuGroupType
// size 0x38, declared in Icarus/Source/Icarus/IcarusGenerated/ContextMenuGroupTypes/ContextMenuGroupTypesRowHandle.h

USTRUCT()
struct FContextMenuGroupType : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText GroupName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* GroupIcon;  // 0x0030, size 0x8
};
